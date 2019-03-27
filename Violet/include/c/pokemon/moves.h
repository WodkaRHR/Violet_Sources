/*
 * moves.h
 *
 *  Created on: Mar 28, 2018
 *      Author: dominik
 */

#ifndef INCLUDE_C_POKEMON_MOVES_H_
#define INCLUDE_C_POKEMON_MOVES_H_

#include "pokemon/count.h"


typedef struct {
    u16 move_id : 9;
    u16 level : 7;
} pokemon_move;

pokemon_move *pokemon_moves[POKEMON_CNT];
u8 pokemon_tm_compatibility [POKEMON_CNT][8];
u32 pokemon_move_tutor_compatibility[POKEMON_CNT];

/**
 * Gets the attack associated with a move tutor
 * @param move_tutor the move tutor index
 */
u16 move_tutor_get_attack(u8 move_tutor_idx);

#endif /* INCLUDE_C_POKEMON_MOVES_H_ */
