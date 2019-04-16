
#include "types.h"

// Pairs of cutable tiles and their respective cut-version
u16 cut_table[][2] = {
	{0x10, 0x11},
	{0x1a, 0x1c},
	{0x1b, 0x1d},
	{0x5c, 0x5d},
	{0x6c, 0x6d},
	{0x74, 0x75},
	{0xa0, 0xa1},
	{0xc8, 0xca},
	{0xc9, 0xcb},
        {0x299, 0x298}, // Desert
	{0x281, 0x2A5}, // Graveyard / Ceometria
	{0x30A, 0x312}, // Graveyard / Ceometria
	{0x30B, 0x313}, // Graveyard / Ceometria
	{0x30C, 0x314}, // Graveyard / Ceometria
	{0x306, 0x30e}, // Graveyard / Ceometria
	{0x307, 0x30f}, // Graveyard / Ceometria
	{0x2ff, 0x30d}, // Graveyard / Ceometria
        {0xFFFF, 0xFFFF}
};
