/*
 * map_control.h
 *
 *  Created on: Mar 28, 2018
 *      Author: dominik
 */

#ifndef INCLUDE_C_OVERWORLD_MAP_CONTROL_H_
#define INCLUDE_C_OVERWORLD_MAP_CONTROL_H_

typedef struct{
    u8 _unkown;
    u8 _unkown_2;
    u8 x_start;
    u8 y_start;
} stru_map_displ_cntrl;

extern stru_map_displ_cntrl map_displ_cntrl;

/**
 * Returns the state of an overworld flag (0 or != 0)
 * This is done by accessing 0x02037078 and masking the byte with the flag
 * Known flags:
 * 8 (=1 << 3) : If not set wildbattles in water are not triggered
 */
int overworld_flag_get(u8 flag);

/**
 * Reloads the map state
 */
void map_reload();

/**
 * Reloads the map state without fadings (small mapreaload)
 */
void map_reload_no_fading();

/**
 * Sets up the data for warping the player
 * @param bank the target map bank
 * @param map the target map id
 * @param exit the target warp
 * @param x the target x coordiante (if exit == 0xFF)
 * @param y the target y coordiante (if exit == 0xFF)
 */
void warp_setup(u8 bank, u8 map, u8 exit, s16 x, s16 y);

/**
 * Sets up callbacks to execute the warping process setup by warp_setup
 */
void warp_setup_callbacks();

/**
 * Gets the weather currently present
 * @return the current weather
 */
u8 map_get_current_weather();

/**
 * Plays the fadeout sound for rain
 */
void map_play_sound_rain_fadeout();

/**
 * Sets up the warp teleport callback
 */
void warp_setup_teleport_callback();

/**
 * Sets up the warp muted teleport callback
 */
void warp_setup_muted_callback();

/**
 * Enables the warp flags
 */
void warp_enable_flags();

/**
 * Sets the warp history (last used warp)
 * @param index index in the warp history
 * @param bank target map bank
 * @param map target map id
 * @param exit target warp
 * @param x x coordiante if exit == 0xFF
 * @param y y coordinate if exit == 0xFF
 */
void warp_history_set(u8 index, u8 bank, u8 map, u8 exit, s16 x, s16 y);

/**
 * Frees all components of the overworld (i.e. virtual maps)
 */
void overworld_free();

#endif /* INCLUDE_C_OVERWORLD_MAP_CONTROL_H_ */
