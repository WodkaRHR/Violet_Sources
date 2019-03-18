#include "types.h"
#include "map/wild_pokemon.h"
#include "constants/wild_pokemon_densities.h"
#include "constants/species.h"

wild_pokemon_entry wild_pokemon_3_0_water_entries[5] = {
	[WILD_POKEMON_DENSITY_WATER_0_60_PERCENT] = 
		{.level_min = 33, .level_max = 35, .species = POKEMON_LOTURZEL},
	[WILD_POKEMON_DENSITY_WATER_1_30_PERCENT] = 
		{.level_min = 33, .level_max = 35, .species = POKEMON_MASKEREGEN},
	[WILD_POKEMON_DENSITY_WATER_2_5_PERCENT] = 
		{.level_min = 33, .level_max = 35, .species = POKEMON_LOTURZEL},
	[WILD_POKEMON_DENSITY_WATER_3_4_PERCENT] = 
		{.level_min = 33, .level_max = 35, .species = POKEMON_MASKEREGEN},
	[WILD_POKEMON_DENSITY_WATER_3_1_PERCENT] = 
		{.level_min = 34, .level_max = 35, .species = POKEMON_LOTURZEL},
};

wild_pokemon_habitat wild_pokemon_3_0_water = {
	.frequency = 9, .data = wild_pokemon_3_0_water_entries
};

wild_pokemon_entry wild_pokemon_3_0_rod_entries[10] = {
	[WILD_POKEMON_DENSITY_OLD_ROD_0_70_PERCENT] = 
		{.level_min = 11, .level_max = 11, .species = POKEMON_KARPADOR},
	[WILD_POKEMON_DENSITY_OLD_ROD_1_30_PERCENT] = 
		{.level_min = 11, .level_max = 1, .species = POKEMON_KARPADOR},
	[WILD_POKEMON_DENSITY_GOOD_ROD_0_60_PERCENT] = 
		{.level_min = 22, .level_max = 25, .species = POKEMON_FLEGMON},
	[WILD_POKEMON_DENSITY_GOOD_ROD_1_20_PERCENT] = 
		{.level_min = 22, .level_max = 25, .species = POKEMON_KARPADOR},
	[WILD_POKEMON_DENSITY_GOOD_ROD_2_20_PERCENT] = 
		{.level_min = 22, .level_max = 25, .species = POKEMON_KARPADOR},
	[WILD_POKEMON_DENSITY_SUPER_ROD_0_40_PERCENT] = 
		{.level_min = 35, .level_max = 38, .species = POKEMON_FLEGMON},
	[WILD_POKEMON_DENSITY_SUPER_ROD_1_40_PERCENT] = 
		{.level_min = 35, .level_max = 38, .species = POKEMON_KARPADOR},
	[WILD_POKEMON_DENSITY_SUPER_ROD_2_15_PERCENT] = 
		{.level_min = 35, .level_max = 38, .species = POKEMON_KARPADOR},
	[WILD_POKEMON_DENSITY_SUPER_ROD_3_4_PERCENT] = 
		{.level_min = 35, .level_max = 38, .species = POKEMON_GARADOS},
	[WILD_POKEMON_DENSITY_SUPER_ROD_4_1_PERCENT] = 
		{.level_min = 35, .level_max = 38, .species = POKEMON_FLEGMON},
};

wild_pokemon_habitat wild_pokemon_3_0_rod = {
	.frequency = 66, .data = wild_pokemon_3_0_rod_entries
};
