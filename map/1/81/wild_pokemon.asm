.include "std.s"

@// Wild data map_1_81_wild_grass
.global map_1_81_wild_grass
map_1_81_wild_grass:
.byte 0x3 @// Frequency in 1/256
.byte 0, 0, 0
.word map_1_81_wild_grass_entries

map_1_81_wild_grass_entries:
.byte 26, 30 @//Level range
.hword POKEMON_CAMAUB @// 20 percent percent
.byte 26, 30 @//Level range
.hword POKEMON_KLEINSTEIN @// 20 percent percent
.byte 26, 30 @//Level range
.hword POKEMON_SCHNECKMAG @// 10 percent percent
.byte 26, 30 @//Level range
.hword POKEMON_KLEINSTEIN @// 10 percent percent
.byte 26, 30 @//Level range
.hword POKEMON_SCHNECKMAG @// 10 percent percent
.byte 26, 30 @//Level range
.hword POKEMON_SCHNECKMAG @// 10 percent percent
.byte 26, 32 @//Level range
.hword POKEMON_KLEINSTEIN @// 5 percent percent
.byte 26, 32 @//Level range
.hword POKEMON_KLEINSTEIN @// 5 percent percent
.byte 26, 32 @//Level range
.hword POKEMON_GEOROK @// 4 percent percent
.byte 26, 32 @//Level range
.hword POKEMON_GEOROK @// 4 percent percent
.byte 26, 32 @//Level range
.hword POKEMON_KLEINSTEIN @// 1 percent percent
.byte 31, 32 @//Level range
.hword POKEMON_MAGMAR @// 1 percent percent

