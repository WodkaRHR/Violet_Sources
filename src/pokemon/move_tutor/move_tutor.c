#include "types.h"
#include "stdbool.h"
#include "pokemon/moves.h"
#include "constants/attacks.h"


bool move_tutor_is_compatible(u16 species, u8 move_tutor){
    u32 mask = (u32)(1 << move_tutor);
    if(pokemon_move_tutor_compatibility[species] & mask)
        return true;
    return false;
}

u16 move_tutor_attacks[] = {
    ATTACK_FOKUSSTOSS,
    ATTACK_GIFTHIEB,
    ATTACK_FINSTERAURA,
    ATTACK_EISZAHN,
    
    ATTACK_DONNERZAHN,
    ATTACK_KREUZSCHERE,
    ATTACK_STEINKANTE,
    ATTACK_LICHTKANONE,
    ATTACK_DRACO_METEOR,
    ATTACK_ENERGIEBALL,
    ATTACK_DRACHENPULS,
    ATTACK_FEUERZAHN,
    ATTACK_EXPLOSION,
    ATTACK_STEINHAGEL,
    ATTACK_DELEGATOR,
    ATTACK_FLORA_STATUE,
    ATTACK_LOHEKANONADE,
    ATTACK_AQUAHAUBITZE,
    ATTACK_DONNERWELLE,
};

u16 move_tutor_get_attack_id(u8 move_tutor){
    return move_tutor_attacks[move_tutor];
}

