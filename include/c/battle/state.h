/*
 * battle.h
 *
 *  Created on: Mar 28, 2018
 *      Author: dominik
 */

#ifndef INCLUDE_C_BATTLE_STATE_H_
#define INCLUDE_C_BATTLE_STATE_H_

typedef struct {
    u32 double_battle : 1;
    u32 link_battle : 1;
    u32 wild_battle : 1;
    u32 trainer_battle : 1;
    u32 oak_battle : 1;
    u32 flag_5 : 1;
    u32 multi_battle : 1;
    u32 safari_battle : 1;
    u32 items_prohibited : 1;
    u32 catch_tutorial : 1;
    u32 flag_A : 1;
    u32 items_prohibited2 : 1;
    u32 flag_C : 1;
    u32 flag_D : 1;
    u32 unkown : 17;
    u32 field_31 : 1;
} battle_flags_t;

typedef struct {
	u8 unkown[0xB8];
	u16 items_consumed[4]; // one item per batler
} battle_state_t;

extern battle_flags_t battle_flags;
extern battle_state_t *battle_state;
extern u8 battle_trainer_kind;
extern u8 battle_result;
extern u16 battle_trainer_id;
extern u8 battle_stat_change[];
extern u8 battle_effects[4]; // Probably there even more, 0x3 is the target effect

/**
 * Checks if the battle is a double battle
 * @return whether the battle is a double battle
 */
bool battle_is_double();

/**
 * Callback1 for the battle engine
 */
void battle_callback1();


#endif /* INCLUDE_C_BATTLE_STATE_H_ */
