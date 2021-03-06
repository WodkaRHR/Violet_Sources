.include "species.s"

@// Wild data map_3_67_wild_grass
.global map_3_67_wild_grass
.align 4
map_3_67_wild_grass:
.byte 0x3 @// Frequency in 1/256
.byte 0, 0, 0
.word map_3_67_wild_grass_entries

.align 4
map_3_67_wild_grass_entries:
.byte 19, 21 @//Level range
.hword POKEMON_DIGDA @// 20 percent percent
.byte 19, 22 @//Level range
.hword POKEMON_ZUBAT @// 20 percent percent
.byte 19, 23 @//Level range
.hword POKEMON_MACHOLLO @// 10 percent percent
.byte 19, 23 @//Level range
.hword POKEMON_DIGDA @// 10 percent percent
.byte 19, 23 @//Level range
.hword POKEMON_ZUBAT @// 10 percent percent
.byte 19, 23 @//Level range
.hword POKEMON_MACHOLLO @// 10 percent percent
.byte 19, 23 @//Level range
.hword POKEMON_DIGDA @// 5 percent percent
.byte 19, 23 @//Level range
.hword POKEMON_ZUBAT @// 5 percent percent
.byte 19, 23 @//Level range
.hword POKEMON_MACHOLLO @// 4 percent percent
.byte 19, 23 @//Level range
.hword POKEMON_DIGDA @// 4 percent percent
.byte 20, 24 @//Level range
.hword POKEMON_ZUBAT @// 1 percent percent
.byte 24, 26 @//Level range
.hword POKEMON_MACHOLLO @// 1 percent percent

@// Wild data map_3_67_wild_water
.global map_3_67_wild_water
.align 4
map_3_67_wild_water:
.byte 0xf @// Frequency in 1/256
.byte 0, 0, 0
.word map_3_67_wild_water_entries

.align 4
map_3_67_wild_water_entries:
.byte 35, 35 @//Level range
.hword POKEMON_TENTACHA @// 60 percent percent
.byte 35, 35 @//Level range
.hword POKEMON_TENTACHA @// 30 percent percent
.byte 35, 35 @//Level range
.hword POKEMON_TENTACHA @// 5 percent percent
.byte 35, 35 @//Level range
.hword POKEMON_TENTACHA @// 4 percent percent
.byte 37, 37 @//Level range
.hword POKEMON_TENTOXA @// 1 percent percent

@// Wild data map_3_67_wild_rod
.global map_3_67_wild_rod
.align 4
map_3_67_wild_rod:
.byte 0x6 @// Frequency in 1/256
.byte 0, 0, 0
.word map_3_67_wild_rod_entries

.align 4
map_3_67_wild_rod_entries:
.byte 20, 20 @//Level range
.hword POKEMON_TENTACHA @// 70 percent, rod percent
.byte 20, 20 @//Level range
.hword POKEMON_TENTACHA @// 30 percent, rod percent
.byte 40, 40 @//Level range
.hword POKEMON_TENTACHA @// 60 percent, profi rod percent
.byte 40, 40 @//Level range
.hword POKEMON_TENTACHA @// 20 percent, profi rod percent
.byte 40, 40 @//Level range
.hword POKEMON_TENTOXA @// 20 percent, profi rod percent
.byte 40, 40 @//Level range
.hword POKEMON_TENTOXA @// 40 percent, super rod percent
.byte 40, 40 @//Level range
.hword POKEMON_TENTOXA @// 40 percent, super rod percent
.byte 50, 50 @//Level range
.hword POKEMON_TENTOXA @// 15 percent, super rod percent
.byte 50, 50 @//Level range
.hword POKEMON_TENTOXA @// 4 percent, super rod percent
.byte 50, 50 @//Level range
.hword POKEMON_TENTOXA @// 1 percent, super rod percent

