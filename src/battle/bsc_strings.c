#include "types.h"
#include "battle.h"

extern u8 bsc_string_aura[];
extern u8 bsc_string_raura[];
extern u8 bsc_string_baura[];
extern u8 bsc_string_gaura[];

u8 *bsc_strings[] = {
        //Bsc-String 0x0
	(u8*) 0x83faa39,
	//Bsc-String 0x1
	(u8*) 0x83faa8c,
	//Bsc-String 0x2
	(u8*) 0x83faab3,
	//Bsc-String 0x3
	(u8*) 0x83faaca,
	//Bsc-String 0x4
	(u8*) 0x83faadc,
	//Bsc-String 0x5
	(u8*) 0x83faaf8,
	//Bsc-String 0x6
	(u8*) 0x83fab2d,
	//Bsc-String 0x7
	(u8*) 0x83fab62,
	//Bsc-String 0x8
	(u8*) 0x83fab78,
	//Bsc-String 0x9
	(u8*) 0x83fab8e,
	//Bsc-String 0xa
	(u8*) 0x83fcf69,
	//Bsc-String 0xb
	(u8*) 0x83fabc4,
	//Bsc-String 0xc
	(u8*) 0x83fabe1,
	//Bsc-String 0xd
	(u8*) 0x83fc868,
	//Bsc-String 0xe
	(u8*) 0x83fabf9,
	//Bsc-String 0xf
	(u8*) 0x83fac53,
	//Bsc-String 0x10
	(u8*) 0x83fac72,
	//Bsc-String 0x11
	(u8*) 0x83fac85,
	//Bsc-String 0x12
	(u8*) 0x83fac98,
	//Bsc-String 0x13
	(u8*) 0x83faca9,
	//Bsc-String 0x14
	(u8*) 0x83facd1,
	//Bsc-String 0x15
	(u8*) 0x83fada6,
	//Bsc-String 0x16
	(u8*) 0x83fadf3,
	//Bsc-String 0x17
	(u8*) 0x83fae05,
	//Bsc-String 0x18
	(u8*) 0x83fae1b,
	//Bsc-String 0x19
	(u8*) 0x83fae3b,
	//Bsc-String 0x1a
	(u8*) 0x83fae4f,
	//Bsc-String 0x1b
	(u8*) 0x83fae63,
	//Bsc-String 0x1c
	(u8*) 0x83fae76,
	//Bsc-String 0x1d
	(u8*) 0x83fae8a,
	//Bsc-String 0x1e
	(u8*) 0x83faea3,
	//Bsc-String 0x1f
	(u8*) 0x83faec1,
	//Bsc-String 0x20
	(u8*) 0x83faedb,
	//Bsc-String 0x21
	(u8*) 0x83faef6,
	//Bsc-String 0x22
	(u8*) 0x83faf12,
	//Bsc-String 0x23
	(u8*) 0x83faf1d,
	//Bsc-String 0x24
	(u8*) 0x83faf35,
	//Bsc-String 0x25
	(u8*) 0x83faf64,
	//Bsc-String 0x26
	(u8*) 0x83faf78,
	//Bsc-String 0x27
	(u8*) 0x83faf9e,
	//Bsc-String 0x28
	(u8*) 0x83fafb2,
	//Bsc-String 0x29
	(u8*) 0x83fafc6,
	//Bsc-String 0x2a
	(u8*) 0x83fafda,
	//Bsc-String 0x2b
	(u8*) 0x83faff7,
	//Bsc-String 0x2c
	(u8*) 0x83fb029,
	//Bsc-String 0x2d
	(u8*) 0x83fb062,
	//Bsc-String 0x2e
	(u8*) 0x83fb08f,
	//Bsc-String 0x2f
	(u8*) 0x83fb0ab,
	//Bsc-String 0x30
	(u8*) 0x83fb0ce,
	//Bsc-String 0x31
	(u8*) 0x83fb0f0,
	//Bsc-String 0x32
	(u8*) 0x83fb119,
	//Bsc-String 0x33
	(u8*) 0x83fb145,
	//Bsc-String 0x34
	(u8*) 0x83fb170,
	//Bsc-String 0x35
	(u8*) 0x83fb198,
	//Bsc-String 0x36
	(u8*) 0x83fb1a9,
	//Bsc-String 0x37
	(u8*) 0x83fb1c5,
	//Bsc-String 0x38
	(u8*) 0x83fb1d8,
	//Bsc-String 0x39
	(u8*) 0x83fb1f1,
	//Bsc-String 0x3a
	(u8*) 0x83fb207,
	//Bsc-String 0x3b
	(u8*) 0x83fb223,
	//Bsc-String 0x3c
	(u8*) 0x83fb23b,
	//Bsc-String 0x3d
	(u8*) 0x83fb24f,
	//Bsc-String 0x3e
	(u8*) 0x83fb26d,
	//Bsc-String 0x3f
	(u8*) 0x83fb281,
	//Bsc-String 0x40
	(u8*) 0x83fb291,
	//Bsc-String 0x41
	(u8*) 0x83fb2a1,
	//Bsc-String 0x42
	(u8*) 0x83fb2ef,
	//Bsc-String 0x43
	(u8*) 0x83fb33b,
	//Bsc-String 0x44
	(u8*) 0x83fb368,
	//Bsc-String 0x45
	(u8*) 0x83fb394,
	//Bsc-String 0x46
	(u8*) 0x83fb3b1,
	//Bsc-String 0x47
	(u8*) 0x83fb3c7,
	//Bsc-String 0x48
	(u8*) 0x83fb3e3,
	//Bsc-String 0x49
	(u8*) 0x83fb401,
	//Bsc-String 0x4a
	(u8*) 0x83fb41c,
	//Bsc-String 0x4b
	(u8*) 0x83fb436,
	//Bsc-String 0x4c
	(u8*) 0x83fb443,
	//Bsc-String 0x4d
	(u8*) 0x83fb459,
	//Bsc-String 0x4e
	(u8*) 0x83fb48e,
	//Bsc-String 0x4f
	(u8*) 0x83fb4b0,
	//Bsc-String 0x50
	(u8*) 0x83fb4f6,
	//Bsc-String 0x51
	(u8*) 0x83fb511,
	//Bsc-String 0x52
	(u8*) 0x83fb52d,
	//Bsc-String 0x53
	(u8*) 0x83fb549,
	//Bsc-String 0x54
	(u8*) 0x83fb562,
	//Bsc-String 0x55
	(u8*) 0x83fb587,
	//Bsc-String 0x56
	(u8*) 0x83fb5a6,
	//Bsc-String 0x57
	(u8*) 0x83fb5ca,
	//Bsc-String 0x58
	(u8*) 0x83fb5dd,
	//Bsc-String 0x59
	(u8*) 0x83fb5fe,
	//Bsc-String 0x5a
	(u8*) 0x83fb616,
	//Bsc-String 0x5b
	(u8*) 0x83fb637,
	//Bsc-String 0x5c
	(u8*) 0x83fb66f,
	//Bsc-String 0x5d
	(u8*) 0x83fb683,
	//Bsc-String 0x5e
	(u8*) 0x83fb697,
	//Bsc-String 0x5f
	(u8*) 0x83fb6ad,
	//Bsc-String 0x60
	(u8*) 0x83fb6c7,
	//Bsc-String 0x61
	(u8*) 0x83fb6da,
	//Bsc-String 0x62
	(u8*) 0x83fb6f7,
	//Bsc-String 0x63
	(u8*) 0x83fb713,
	//Bsc-String 0x64
	(u8*) 0x83fb72a,
	//Bsc-String 0x65
	(u8*) 0x83fb742,
	//Bsc-String 0x66
	(u8*) 0x83fb754,
	//Bsc-String 0x67
	(u8*) 0x83fb77c,
	//Bsc-String 0x68
	(u8*) 0x83fb78a,
	//Bsc-String 0x69
	(u8*) 0x83fb7a7,
	//Bsc-String 0x6a
	(u8*) 0x83fb7cf,
	//Bsc-String 0x6b
	(u8*) 0x83fb7ee,
	//Bsc-String 0x6c
	(u8*) 0x83fb808,
	//Bsc-String 0x6d
	(u8*) 0x83fb81e,
	//Bsc-String 0x6e
	(u8*) 0x83fb832,
	//Bsc-String 0x6f
	(u8*) 0x83fb853,
	//Bsc-String 0x70
	(u8*) 0x83fb865,
	//Bsc-String 0x71
	(u8*) 0x83fb878,
	//Bsc-String 0x72
	(u8*) 0x83fb892,
	//Bsc-String 0x73
	(u8*) 0x83fb8b0,
	//Bsc-String 0x74
	(u8*) 0x83fb8d0,
	//Bsc-String 0x75
	(u8*) 0x83fb8fd,
	//Bsc-String 0x76
	(u8*) 0x83fb91b,
	//Bsc-String 0x77
	(u8*) 0x83fb939,
	//Bsc-String 0x78
	(u8*) 0x83fb951,
	//Bsc-String 0x79
	(u8*) 0x83fc1fa,
	//Bsc-String 0x7a
	(u8*) 0x83fb96c,
	//Bsc-String 0x7b
	(u8*) 0x83fb989,
	//Bsc-String 0x7c
	(u8*) 0x83fb99e,
	//Bsc-String 0x7d
	(u8*) 0x83fb9b9,
	//Bsc-String 0x7e
	(u8*) 0x83fb9ca,
	//Bsc-String 0x7f
	(u8*) 0x83fb9e9,
	//Bsc-String 0x80
	(u8*) 0x83fba14,
	//Bsc-String 0x81
	(u8*) 0x83fba2a,
	//Bsc-String 0x82
	(u8*) 0x83fba4a,
	//Bsc-String 0x83
	(u8*) 0x83fba60,
	//Bsc-String 0x84
	(u8*) 0x83fba77,
	//Bsc-String 0x85
	(u8*) 0x83fba8d,
	//Bsc-String 0x86
	(u8*) 0x83fbaab,
	//Bsc-String 0x87
	(u8*) 0x83fbae6,
	//Bsc-String 0x88
	(u8*) 0x83fbb05,
	//Bsc-String 0x89
	(u8*) 0x83fbb34,
	//Bsc-String 0x8a
	(u8*) 0x83fbb56,
	//Bsc-String 0x8b
	(u8*) 0x83fbb65,
	//Bsc-String 0x8c
	(u8*) 0x83fbb83,
	//Bsc-String 0x8d
	(u8*) 0x83fbb99,
	//Bsc-String 0x8e
	(u8*) 0x83fbbb0,
	//Bsc-String 0x8f
	(u8*) 0x83fbbbf,
	//Bsc-String 0x90
	(u8*) 0x83fbbea,
	//Bsc-String 0x91
	(u8*) 0x83fbc15,
	//Bsc-String 0x92
	(u8*) 0x83fbc34,
	//Bsc-String 0x93
	(u8*) 0x83fbc53,
	//Bsc-String 0x94
	(u8*) 0x83fbc6e,
	//Bsc-String 0x95
	(u8*) 0x83fbc81,
	//Bsc-String 0x96
	(u8*) 0x83fbc9d,
	//Bsc-String 0x97
	(u8*) 0x83fbce7,
	//Bsc-String 0x98
	(u8*) 0x83fbcf7,
	//Bsc-String 0x99
	(u8*) 0x83fbd1e,
	//Bsc-String 0x9a
	(u8*) 0x83fbd30,
	//Bsc-String 0x9b
	(u8*) 0x83fbd49,
	//Bsc-String 0x9c
	(u8*) 0x83fc1d7,
	//Bsc-String 0x9d
	(u8*) 0x83fbd64,
	//Bsc-String 0x9e
	(u8*) 0x83fc214,
	//Bsc-String 0x9f
	(u8*) 0x83fbd8a,
	//Bsc-String 0xa0
	(u8*) 0x83fbda5,
	//Bsc-String 0xa1
	(u8*) 0x83fc268,
	//Bsc-String 0xa2
	(u8*) 0x83fbdc4,
	//Bsc-String 0xa3
	(u8*) 0x83fbdd7,
	//Bsc-String 0xa4
	(u8*) 0x83fbe30,
	//Bsc-String 0xa5
	(u8*) 0x83fbe46,
	//Bsc-String 0xa6
	(u8*) 0x83fbe68,
	//Bsc-String 0xa7
	(u8*) 0x83fbe89,
	//Bsc-String 0xa8
	(u8*) 0x83fbea3,
	//Bsc-String 0xa9
	(u8*) 0x83fbecf,
	//Bsc-String 0xaa
	(u8*) 0x83fbef5,
	//Bsc-String 0xab
	(u8*) 0x83fbf0c,
	//Bsc-String 0xac
	(u8*) 0x83fbf23,
	//Bsc-String 0xad
	(u8*) 0x83fbf4e,
	//Bsc-String 0xae
	(u8*) 0x83fc294,
	//Bsc-String 0xaf
	(u8*) 0x83fbf77,
	//Bsc-String 0xb0
	(u8*) 0x83fbfa9,
	//Bsc-String 0xb1
	(u8*) 0x83fbfe0,
	//Bsc-String 0xb2
	(u8*) 0x83fbfff,
	//Bsc-String 0xb3
	(u8*) 0x83fc024,
	//Bsc-String 0xb4
	(u8*) 0x83fc04c,
	//Bsc-String 0xb5
	(u8*) 0x83fc2cb,
	//Bsc-String 0xb6
	(u8*) 0x83fc2e6,
	//Bsc-String 0xb7
	(u8*) 0x83fc304,
	//Bsc-String 0xb8
	(u8*) 0x83fc321,
	//Bsc-String 0xb9
	(u8*) 0x83fc34d,
	//Bsc-String 0xba
	(u8*) 0x83fc396,
	//Bsc-String 0xbb
	(u8*) 0x83fc3ba,
	//Bsc-String 0xbc
	(u8*) 0x83fc3de,
	//Bsc-String 0xbd
	(u8*) 0x83fc401,
	//Bsc-String 0xbe
	(u8*) 0x83fc427,
	//Bsc-String 0xbf
	(u8*) 0x83fc448,
	//Bsc-String 0xc0
	(u8*) 0x83fc46a,
	//Bsc-String 0xc1
	(u8*) 0x83fc48e,
	//Bsc-String 0xc2
	(u8*) 0x83fc4b3,
	//Bsc-String 0xc3
	(u8*) 0x83fc4dd,
	//Bsc-String 0xc4
	(u8*) 0x83fc4f4,
	//Bsc-String 0xc5
	(u8*) 0x83fc7f9,
	//Bsc-String 0xc6
	(u8*) 0x83fc807,
	//Bsc-String 0xc7
	(u8*) 0x83fc80f,
	//Bsc-String 0xc8
	(u8*) 0x83fc81c,
	//Bsc-String 0xc9
	(u8*) 0x83fc823,
	//Bsc-String 0xca
	(u8*) 0x83fc830,
	//Bsc-String 0xcb
	(u8*) 0x83fc84e,
	//Bsc-String 0xcc
	(u8*) 0x83fc85b,
	//Bsc-String 0xcd
	(u8*) 0x83fc8bf,
	//Bsc-String 0xce
	(u8*) 0x83fc8d0,
	//Bsc-String 0xcf
	(u8*) 0x83fc8e2,
	//Bsc-String 0xd0
	(u8*) 0x83fc916,
	//Bsc-String 0xd1
	(u8*) 0x83fc951,
	//Bsc-String 0xd2
	(u8*) 0x83fc970,
	//Bsc-String 0xd3
	(u8*) 0x83fc987,
	//Bsc-String 0xd4
	(u8*) 0x83fc9e9,
	//Bsc-String 0xd5
	(u8*) 0x83fcacf,
	//Bsc-String 0xd6
	(u8*) 0x83fcafd,
	//Bsc-String 0xd7
	(u8*) 0x83fcb10,
	//Bsc-String 0xd8
	(u8*) 0x83fcb11,
	//Bsc-String 0xd9
	(u8*) 0x83fcb23,
	//Bsc-String 0xda
	(u8*) 0x83fcb33,
	//Bsc-String 0xdb
	(u8*) 0x83fcb5f,
	//Bsc-String 0xdc
	(u8*) 0x83fcb7d,
	//Bsc-String 0xdd
	(u8*) 0x83fcb94,
	//Bsc-String 0xde
	(u8*) 0x83fcba5,
	//Bsc-String 0xdf
	(u8*) 0x83fcbb7,
	//Bsc-String 0xe0
	(u8*) 0x83fcbd0,
	//Bsc-String 0xe1
	(u8*) 0x83fcbec,
	//Bsc-String 0xe2
	(u8*) 0x83fcc05,
	//Bsc-String 0xe3
	(u8*) 0x83fcc19,
	//Bsc-String 0xe4
	(u8*) 0x83fcc32,
	//Bsc-String 0xe5
	(u8*) 0x83fcc50,
	//Bsc-String 0xe6
	(u8*) 0x83fcc68,
	//Bsc-String 0xe7
	(u8*) 0x83fcc84,
	//Bsc-String 0xe8
	(u8*) 0x83fcc9b,
	//Bsc-String 0xe9
	(u8*) 0x83fcca6,
	//Bsc-String 0xea
	(u8*) 0x83fccc2,
	//Bsc-String 0xeb
	(u8*) 0x83fcce4,
	//Bsc-String 0xec
	(u8*) 0x83fcd05,
	//Bsc-String 0xed
	(u8*) 0x83fcd29,
	//Bsc-String 0xee
	(u8*) 0x83fcd53,
	//Bsc-String 0xef
	(u8*) 0x83fcd75,
	//Bsc-String 0xf0
	(u8*) 0x83fcda1,
	//Bsc-String 0xf1
	(u8*) 0x83fcdc3,
	//Bsc-String 0xf2
	(u8*) 0x83fcdd7,
	//Bsc-String 0xf3
	(u8*) 0x83fce0f,
	//Bsc-String 0xf4
	(u8*) 0x83fce3f,
	//Bsc-String 0xf5
	(u8*) 0x83fd4d8,
	//Bsc-String 0xf6
	(u8*) 0x83fd4e9,
	//Bsc-String 0xf7
	(u8*) 0x83fd544,
	//Bsc-String 0xf8
	(u8*) 0x83fd569,
	//Bsc-String 0xf9
	(u8*) 0x83fd578,
	//Bsc-String 0xfa
	(u8*) 0x83fd5c0,
	//Bsc-String 0xfb
	(u8*) 0x83fd5de,
	//Bsc-String 0xfc
	(u8*) 0x83fd602,
	//Bsc-String 0xfd
	(u8*) 0x83fd61e,
	//Bsc-String 0xfe
	(u8*) 0x83fd633,
	//Bsc-String 0xff
	(u8*) 0x83fd670,
	//Bsc-String 0x100
	(u8*) 0x83fd690,
	//Bsc-String 0x101
	(u8*) 0x83fd6b2,
	//Bsc-String 0x102
	(u8*) 0x83fd6dd,
	//Bsc-String 0x103
	(u8*) 0x83fd708,
	//Bsc-String 0x104
	(u8*) 0x83fd737,
	//Bsc-String 0x105
	(u8*) 0x83fd742,
	//Bsc-String 0x106
	(u8*) 0x83fadc9,
	//Bsc-String 0x107
	(u8*) 0x83fce74,
	//Bsc-String 0x108
	(u8*) 0x83fce9a,
	//Bsc-String 0x109
	(u8*) 0x83fceb3,
	//Bsc-String 0x10a
	(u8*) 0x83fcecc,
	//Bsc-String 0x10b
	(u8*) 0x83fced9,
	//Bsc-String 0x10c
	(u8*) 0x83fceec,
	//Bsc-String 0x10d
	(u8*) 0x83fceff,
	//Bsc-String 0x10e
	(u8*) 0x83fcf20,
	//Bsc-String 0x10f
	(u8*) 0x83fcf94,
	//Bsc-String 0x110
	(u8*) 0x83fcfb8,
	//Bsc-String 0x111
	(u8*) 0x83fcfd9,
	//Bsc-String 0x112
	(u8*) 0x83fcff9,
	//Bsc-String 0x113
	(u8*) 0x83fd008,
	//Bsc-String 0x114
	(u8*) 0x83faa38,
	//Bsc-String 0x115
	(u8*) 0x83faa38,
	//Bsc-String 0x116
	(u8*) 0x83fd013,
	//Bsc-String 0x117
	(u8*) 0x83fd7a1,
	//Bsc-String 0x118
	(u8*) 0x83fd7c0,
	//Bsc-String 0x119
	(u8*) 0x83fd7e1,
	//Bsc-String 0x11a
	(u8*) 0x83fd803,
	//Bsc-String 0x11b
	(u8*) 0x83fd81b,
	//Bsc-String 0x11c
	(u8*) 0x83fd835,
	//Bsc-String 0x11d
	(u8*) 0x83fd858,
	//Bsc-String 0x11e
	(u8*) 0x83fd8aa,
	//Bsc-String 0x11f
	(u8*) 0x83fd8c3,
	//Bsc-String 0x120
	(u8*) 0x83fd8e3,
	//Bsc-String 0x121
	(u8*) 0x83fd913,
	//Bsc-String 0x122
	(u8*) 0x83fd933,
	//Bsc-String 0x123
	(u8*) 0x83fd957,
	//Bsc-String 0x124
	(u8*) 0x83fd977,
	//Bsc-String 0x125
	(u8*) 0x83fc515,
	//Bsc-String 0x126
	(u8*) 0x83fc537,
	//Bsc-String 0x127
	(u8*) 0x83fc567,
	//Bsc-String 0x128
	(u8*) 0x83fc586,
	//Bsc-String 0x129
	(u8*) 0x83fc5d5,
	//Bsc-String 0x12a
	(u8*) 0x83fc5ff,
	//Bsc-String 0x12b
	(u8*) 0x83fc61d,
	//Bsc-String 0x12c
	(u8*) 0x83fc63d,
	//Bsc-String 0x12d
	(u8*) 0x83fc662,
	//Bsc-String 0x12e
	(u8*) 0x83fc67d,
	//Bsc-String 0x12f
	(u8*) 0x83fc068,
	//Bsc-String 0x130
	(u8*) 0x83fc096,
	//Bsc-String 0x131
	(u8*) 0x83fb46c,
	//Bsc-String 0x132
	(u8*) 0x83fb47d,
	//Bsc-String 0x133
	(u8*) 0x83fc91e,
	//Bsc-String 0x134
	(u8*) 0x83fc0be,
	//Bsc-String 0x135
	(u8*) 0x83fcf7c,
	//Bsc-String 0x136
	(u8*) 0x83fc0d4,
	//Bsc-String 0x137
	(u8*) 0x83fc0fc,
	//Bsc-String 0x138
	(u8*) 0x83fc12a,
	//Bsc-String 0x139
	(u8*) 0x83fc83d,
	//Bsc-String 0x13a
	(u8*) 0x83fc13b,
	//Bsc-String 0x13b
	(u8*) 0x83fc36f,
	//Bsc-String 0x13c
	(u8*) 0x83fb4d4,
	//Bsc-String 0x13d
	(u8*) 0x83faaa7,
	//Bsc-String 0x13e
	(u8*) 0x83faaa8,
	//Bsc-String 0x13f
	(u8*) 0x83fc5aa,
	//Bsc-String 0x140
	(u8*) 0x83fac16,
	//Bsc-String 0x141
	(u8*) 0x83fd9d9,
	//Bsc-String 0x142
	(u8*) 0x83fc691,
	//Bsc-String 0x143
	(u8*) 0x83fbcc4,
	//Bsc-String 0x144
	(u8*) 0x83fc15c,
	//Bsc-String 0x145
	(u8*) 0x83faba8,
	//Bsc-String 0x146
	(u8*) 0x83fc99f,
	//Bsc-String 0x147
	(u8*) 0x83fc9c4,
	//Bsc-String 0x148
	(u8*) 0x83fc193,
	//Bsc-String 0x149
	(u8*) 0x83fc6d1,
	//Bsc-String 0x14a
	(u8*) 0x83fd87f,
	//Bsc-String 0x14b
	(u8*) 0x83fd526,
	//Bsc-String 0x14c
	(u8*) 0x83fd756,
	//Bsc-String 0x14d
	(u8*) 0x83fac3a,
	//Bsc-String 0x14e
	(u8*) 0x83fc6f8,
	//Bsc-String 0x14f
	(u8*) 0x83fc719,
	//Bsc-String 0x150
	(u8*) 0x83faf51,
	//Bsc-String 0x151
	(u8*) 0x83fc897,
	//Bsc-String 0x152
	(u8*) 0x83fc54f,
	//Bsc-String 0x153
	(u8*) 0x83fb659,
	//Bsc-String 0x154
	(u8*) 0x83fb312,
	//Bsc-String 0x155
	(u8*) 0x83fb2bf,
	//Bsc-String 0x156
	(u8*) 0x83fc1a9,
	//Bsc-String 0x157
	(u8*) 0x83fc743,
	//Bsc-String 0x158
	(u8*) 0x83fc76a,
	//Bsc-String 0x159
	(u8*) 0x83faddc,
	//Bsc-String 0x15a
	(u8*) 0x83fbdf8,
	//Bsc-String 0x15b
	(u8*) 0x83fbe06,
	//Bsc-String 0x15c
	(u8*) 0x83fbe14,
	//Bsc-String 0x15d
	(u8*) 0x83fc1c3,
	//Bsc-String 0x15e
	(u8*) 0x83fc78f,
	//Bsc-String 0x15f
	(u8*) 0x83fdce3,
	//Bsc-String 0x160
	(u8*) 0x83fdd7c,
	//Bsc-String 0x161
	(u8*) 0x83fad16,
	//Bsc-String 0x162
	(u8*) 0x83fad5b,
	//Bsc-String 0x163
	(u8*) 0x81a8a83,
	//Bsc-String 0x164
	(u8*) 0x81a8ac7,
	//Bsc-String 0x165
	(u8*) 0x81a8b08,
	//Bsc-String 0x166
	(u8*) 0x81a8b4b,
	//Bsc-String 0x167
	(u8*) 0x83fd507,
	//Bsc-String 0x168
	(u8*) 0x83fd978,
	//Bsc-String 0x169
	(u8*) 0x83fd99b,
	//Bsc-String 0x16a
	(u8*) 0x83fd9a9,
	//Bsc-String 0x16b
	(u8*) 0x83faa3c,
	//Bsc-String 0x16c
	(u8*) 0x83faa89,
	//Bsc-String 0x16d
	(u8*) 0x83fad8e,
	//Bsc-String 0x16e
	(u8*) 0x83fc7b3,
	//Bsc-String 0x16f
	(u8*) 0x83fc7d9,
	//Bsc-String 0x170
	(u8*) 0x83fd124,
	//Bsc-String 0x171
	(u8*) 0x83fd151,
	//Bsc-String 0x172
	(u8*) 0x83faa3f,
	//Bsc-String 0x173
	(u8*) 0x83faa54,
	//Bsc-String 0x174
	(u8*) 0x83faa57,
	//Bsc-String 0x175
	(u8*) 0x83faa6c,
	//Bsc-String 0x176
	(u8*) 0x88ac47a,
	//Bsc-String 0x177
	(u8*) 0x88ac612,
	//Bsc-String 0x178
	(u8*) 0x88ac830,
	//Bsc-String 0x179
	(u8*) 0x88ac86e,
	//Bsc-String 0x17a
	(u8*) 0x88ac94a,
	//Bsc-String 0x17b
	(u8*) 0x88ac9fd,
	//Bsc-String 0x17c
	(u8*) 0x8abc98a,
	//Bsc-String 0x17d
	(u8*) 0x88aca2e,
	//Bsc-String 0x17e
	(u8*) 0x88aca74,
	//Bsc-String 0x17f
	(u8*) 0x88acb75,
	//Bsc-String 0x180
	(u8*) 0x88acbe6,
	//Bsc-String 0x181
	(u8*) 0x88cef1a,
	//Bsc-String 0x182
	(u8*) 0x88b4962,
	//Bsc-String 0x18F (there is quite a displacement in this table (hardwired tho))
	bsc_string_aura,
	//Bsc-String 0x190
	bsc_string_raura,
	//Bsc-String 0x191
	bsc_string_baura,
	//Bsc-String 0x192
	bsc_string_gaura,
	//Bsc-String 0x187
	(u8*) 0xffffffff,
	//Bsc-String 0x188
	(u8*) 0xffffffff,
	//Bsc-String 0x189
	(u8*) 0xffffffff,
	//Bsc-String 0x18a
	(u8*) 0xffffffff,
	//Bsc-String 0x18b
	(u8*) 0xffffffff,
	//Bsc-String 0x18c
	(u8*) 0xffffffff,
	//Bsc-String 0x18d
	(u8*) 0xffffffff,
	//Bsc-String 0x18e
	(u8*) 0xffffffff,
	//Bsc-String 0x18f
	(u8*) 0xffffffff,
	//Bsc-String 0x190
	(u8*) 0xffffffff,
	//Bsc-String 0x191
	(u8*) 0xffffffff,
	//Bsc-String 0x192
	(u8*) 0xffffffff,
	//Bsc-String 0x193
	(u8*) 0xffffffff,
	//Bsc-String 0x194
	(u8*) 0xffffffff,
	//Bsc-String 0x195
	(u8*) 0xffffffff,
	//Bsc-String 0x196
	(u8*) 0xffffffff,
	//Bsc-String 0x197
	(u8*) 0xffffffff,
	//Bsc-String 0x198
	(u8*) 0xffffffff,
	//Bsc-String 0x199
	(u8*) 0xffffffff,
	//Bsc-String 0x19a
	(u8*) 0xffffffff,
	//Bsc-String 0x19b
	(u8*) 0xffffffff,
	//Bsc-String 0x19c
	(u8*) 0xffffffff,
	//Bsc-String 0x19d
	(u8*) 0xffffffff,
	//Bsc-String 0x19e
	(u8*) 0xffffffff,
	//Bsc-String 0x19f
	(u8*) 0xffffffff,



};
