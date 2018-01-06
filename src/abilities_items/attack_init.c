#include "types.h"
#include "abilities.h"
#include "battle.h"
#include "romfuncs.h"
#include "basestats.h"
#include "item.h"
#include "attack.h"
#include "debug.h"
#include "oams.h"
#include "callbacks.h"
#include "color.h"
#include "mega.h"
#include "pstring.h"
#include "save.h"


extern u8 bsc_wandlungskunst[];
extern u8 bsc_stance_change_to_attack[];
extern u8 bsc_stance_change_to_defense[];
extern u8 bsc_ap_sparer[];

void attack_init_trigger_abilities(){
    
    char str[] = PSTRING("deutsch\n","englisch\n");
    dprintf(str);
    
    battler *attacker = &battlers[*attacking_battler];
    switch(attacker->ability){
        case WANDLUNGSK:{
            dprintf("Lauched ability 'WANDLUNGSK'");
            u8 attack_type = attacks[*active_attack].type;
            if(attacker->type1 != attack_type || attacker->type2 != attack_type){
                attacker->type1 = attack_type;
                attacker->type2 = attack_type;
                bsc_buffers[0] = 0xFD;
                bsc_buffers[1] = 3;
                bsc_buffers[2] = attack_type;
                bsc_buffers[3] = 0xFF;
                bsc_push_next_cmd();
                
                *bsc_offset = bsc_wandlungskunst;
            }
                
            break;
        }
        case TAKTIKWECHS:{
            if(attacker->species == POKEMON_DURENGARD && 
                    (attacks[*active_attack].category == CATEGORY_PHYSICAL || 
                    (attacks[*active_attack].category == CATEGORY_SPECIAL))){
                stance_change_change_species(*attacking_battler,
                        POKEMON_DURENGARDA);
                bsc_push_next_cmd();
                *attack_anim_user_index = *attacking_battler;
                *attack_anim_target_index = *attacking_battler;
                dprintf("User index %d, target index %d\n", *attacking_battler, *attacking_battler);
                *bsc_offset = bsc_stance_change_to_attack;
                
            }else if(attacker->species == POKEMON_DURENGARDA &&
                    *active_attack == ATTACK_KOENIGSSCHILD){
                stance_change_change_species(*attacking_battler,
                        POKEMON_DURENGARD);
                bsc_push_next_cmd();
                *attack_anim_user_index = *attacking_battler;
                *attack_anim_target_index = *attacking_battler;
                dprintf("User index %d, target index %d\n", *attacking_battler, 
                        *attacking_battler);
                *bsc_offset = bsc_stance_change_to_defense;
            }
            break;
            
        }
        case AP_SPARER:{
            if(rnd16() & 3){
                attacker->custom_status |= CUSTOM_STATUS_AP_SPARER;
                bsc_push_next_cmd();
                *bsc_offset = bsc_ap_sparer;
                dprintf("Ap sparer triggered for attacker %d\n", 
                        *attacking_battler);
                bsc_buffers[0] = 0xFD;
                bsc_buffers[1] = 3;
                bsc_buffers[3] = 0xFF;
            }
            break;
        }
    }
}


void attack_anim_stance_change_sprite_show(u8 self){
    u8 target = *attack_anim_target_index;
    u8 target_oam = battler_oams[target];
    oams[target_oam].final_oam.attr0 &= !ATTR0_OBJDISABLE;
    //dprintf("Stance change anim cb removing with %d tasks running.\n", *attack_anim_tasks_running);
    attack_anim_remove_big_cb(self);
    //dprintf("After Stance change anim cb removing with %d tasks running.\n", *attack_anim_tasks_running);
    
}

void attack_anim_stance_change_sprite_change(u8 self){
    u8 target = *attack_anim_target_index;
    dprintf("Sprite change for target %d\n.", target);
    u8 target_oam = battler_oams[target];
    
    //load_graphic_for_wandler(target, target, 0);
    
    //first move away the oam
    oams[target_oam].final_oam.attr0 |= ATTR0_OBJDISABLE;
    
    load_graphic_for_wandler(target, target, 0);
    mega_disable_blurr(target);
    
    color oam_color = {.value = attack_anim_additional_animation[0]};
    u8 oam_pal = (u8)(oams[target_oam].final_oam.attr2 >> 12);
    color_blend((u16)(oam_pal * 16 + 256), 16, 16, oam_color.value);
    
    big_callbacks[self].function = attack_anim_stance_change_sprite_show;
    //err2(self, self);
    
}

void stance_change_change_species(u8 target, u16 species){
    void *pokemon = get_pokemon_offset_by_index(target);
    set_pokemons_attribute(pokemon, ATTRIBUTE_SPECIES, &species);
    recalculate_stats(pokemon);
    
    //Update the battler slot
    battlers[target].species = species;
    int j;
    for(j = 0; j < 5; j++){
        battlers[target].stats[j] = 
                (u16) get_pokemons_attribute(pokemon, (u8)(j + ATTRIBUTE_ATK), 0);
    }
    battlers[target].current_hp = (u16) get_pokemons_attribute(pokemon,
            ATTRIBUTE_CURRENT_HP, 0);
    battlers[target].max_hp = (u16) get_pokemons_attribute(pokemon,
             ATTRIBUTE_TOTAL_HP, 0);
    battlers[target].ability = get_pokemons_ability(pokemon);
    battlers[target].type1 = basestats[species].type1;
    battlers[target].type1 = basestats[species].type2;
    

}

void attack_anim_stance_change_cry(u8 self){
    
    u8 target = *attack_anim_target_index;
    u16 species = battlers[target].species;
    cry(species, 0);
    attack_anim_remove_big_cb(self);
}