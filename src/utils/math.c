#include "types.h"
#include "romfuncs.h"
#include "debug.h"
#include "utils.h"

int abs(int i) {
    if (i < 0) {
        return -i;
    }
    return i;
}

int signum(int i) {
    if (i < 0) {
        return -1;
    } else if (i > 0) {
        return 1;
    }
    return 0;
}


int sin_lo_table[256] = {
    0, 1608, 3215, 4821, 6423, 8022, 9616, 11204, 12785, 14359, 15923, 17479, 19024, 20557, 22078, 23586, 
    25079, 26557, 28020, 29465, 30893, 32302, 33692, 35061, 36409, 37736, 39039, 40319, 41575, 42806, 44011, 45189, 
    46340, 47464, 48558, 49624, 50660, 51665, 52639, 53581, 54491, 55368, 56212, 57022, 57797, 58538, 59243, 59913, 
    60547, 61144, 61705, 62228, 62714, 63162, 63571, 63943, 64276, 64571, 64826, 65043, 65220, 65358, 65457, 65516, 
    65536, 65516, 65457, 65358, 65220, 65043, 64826, 64571, 64276, 63943, 63571, 63162, 62714, 62228, 61705, 61144, 
    60547, 59913, 59243, 58538, 57797, 57022, 56212, 55368, 54491, 53581, 52639, 51665, 50660, 49624, 48558, 47464, 
    46340, 45189, 44011, 42806, 41575, 40319, 39039, 37736, 36409, 35061, 33692, 32302, 30893, 29465, 28020, 26557, 
    25079, 23586, 22078, 20557, 19024, 17479, 15923, 14359, 12785, 11204, 9616, 8022, 6423, 4821, 3215, 1608, 
    0, -1608, -3215, -4821, -6423, -8022, -9616, -11204, -12785, -14359, -15923, -17479, -19024, -20557, -22078, -23586, 
    -25079, -26557, -28020, -29465, -30893, -32302, -33692, -35061, -36409, -37736, -39039, -40319, -41575, -42806, -44011, -45189, 
    -46340, -47464, -48558, -49624, -50660, -51665, -52639, -53581, -54491, -55368, -56212, -57022, -57797, -58538, -59243, -59913, 
    -60547, -61144, -61705, -62228, -62714, -63162, -63571, -63943, -64276, -64571, -64826, -65043, -65220, -65358, -65457, -65516, 
    -65536, -65516, -65457, -65358, -65220, -65043, -64826, -64571, -64276, -63943, -63571, -63162, -62714, -62228, -61705, -61144, 
    -60547, -59913, -59243, -58538, -57797, -57022, -56212, -55368, -54491, -53581, -52639, -51665, -50660, -49624, -48558, -47464, 
    -46340, -45189, -44011, -42806, -41575, -40319, -39039, -37736, -36409, -35061, -33692, -32302, -30893, -29465, -28020, -26557, 
    -25079, -23586, -22078, -20557, -19024, -17479, -15923, -14359, -12785, -11204, -9616, -8022, -6423, -4821, -3215, -1608, 

};
   
/**
 * Sinus function with Period 0x10000, Amplitude 0x10000
 * @[0-0x10000] -> [0, 2Pi], Period is 0x10000
 * @return sin(x) * 0x10000
 */
int sin_16(int x){
    if(x < 0){
        x += (((-x) >> 16)+1) << 16;
    } 
    x = x % 0x10000;
    //x is a positive value in range[0, 0x10000)
    int lower = x >> 8;
    int interpol_lower = sin_lo_table[lower];
    int interpol_higher = sin_lo_table[(lower+1) % 0x100];
    int delta = interpol_higher - interpol_lower;
    int fractional = x & 0xFF;
    return interpol_lower + ((delta * fractional) >> 8);
    
}


int __sin(int x, int period, int amplitude){
    //map range [0, period-1] -> [0, 0xFFFF]
    int y = sin_16((x << 16) / period);
    y *= amplitude;
    int rem = (y >> 15) & 1;
    return (y >> 16) + rem;
}

int cos_16(int x){
    return sin_16(x+0x4000);
}

int __cos(int x, int period, int amplitude){
    //map range [0, period-1] -> [0, 0xFFFF]
    int y = cos_16((x << 16) / period);
    return (y * amplitude) >> 16;
}

int __tan(int x, int period){
    int _cos = __cos(x, period, 1);
    int _sin = __sin(x, period, 1);
    if(_cos == 0)
        debug1(ERR_TAN_16_COS_16_EQUALS_ZERO);
    return _sin / _cos;
}

int tan_16(int x){
    int cosine = cos_16(x);
    if(cosine){
        return sin_16(x) / cosine;
    }
    debug1(ERR_TAN_16_COS_16_EQUALS_ZERO);
    return 0;
}

int linear_cos_16(int x){
    if(x < 0) x = -x; //cosine is even
    x %= 0x10000;
    if(x < 0x8000){
        //interpolate from [0; pi]
        return 0x10000 - x * 0x8000 / 0x20000;
    }else{
        //interpolate from [pi; 2pi]
        return x * 0x8000 / 0x20000 - 0x10000;
    }
}

int linear_sin_16(int x){
    return linear_cos_16(x - 0x4000);
}

int linear_sin(int x, int period, int amplitude){
    int y = linear_sin_16((x << 16) / period);
    return (y * amplitude) >> 16;
}

int linear_cos(int x, int period, int amplitude){
    int y = linear_cos_16((x << 16) / period);
    return (y * amplitude) >> 16;
}

int linear_tan(int x, int period){
    int _cos = linear_cos(x, period, 1);
    int _sin = linear_sin(x, period, 1);
    if(_cos == 0)
        debug1(ERR_TAN_16_COS_16_EQUALS_ZERO);
    return _sin / _cos;
    
}





/**
 * hwt for a given value, th and start_value n0
 * @param x parameter
 * @param periodical time for the value to be / 2
 * @param n0 start value for x = 0
 * @return 
 */
int hwt(int x, int th, int n0){
    int ex = x / th;
    int div = 1 << ex;
    if(!div) return 0;
    return n0 / div;
    
}

int ggt(int a, int b){
    if(a == 0) return b;
    while(b != 0){
        if (a > b){
            a = a - b;
        }else{
            b = b - a;
        }
    }
    return a;
}

int kgv(int a, int b){
    if(a == 0 || b == 0) return -1;
    return a / ggt(a, b) * b;
}