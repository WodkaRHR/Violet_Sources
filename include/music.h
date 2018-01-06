/* 
 * File:   music.h
 * Author: Domi
 *
 * Created on 9. Juni 2016, 11:57
 */

#ifndef MUSIC_H
#define	MUSIC_H


#include "types.h"
#include "anim_engine.h"

#define VAR_BATTLE_MUSIC 0x50DC
#define VAR_MAP_MUSIC_FORCE 0x50D9

#define MUS_VIOLET_ENCOUNTER 274
#define MUS_GYMLEADER_BATTLE 0x128
#define MUS_TRAINER_BATTLE 0x129
#define MUS_WILDBATTLE 0x12A
#define MUS_VIOLET_BATTLE 0x15B
#define MUS_RIVAL_BATTLE 0x15F
#define MUS_REVOLUTIONARY_BATTLE 353
#define MUS_REVOLUTIONARY_ENCOUNTER 355

#define SONG_TYPE_SONG 0
#define SONG_TYPE_SOUND 1
#define SONG_TYPE_FANFARE 2
#define SONG_PLAYER_3 3


typedef struct {
    const void *mid;
    u16 type;
    u16 type2; //exact copy of type
}song;

u16 get_encounter_music_by_trainer_id(u16 trainer_id);
u16 battle_get_music();
u16 current_map_get_song();

extern const unsigned char mus_rin_battle[];
extern const unsigned char mus_encounter_violet[];
extern const unsigned char mus_deoxys_battle[];
extern const unsigned char mus_titlescreen[];
extern const unsigned char mus_graveyard[];
extern const unsigned char mus_encounter_beethoven[];
extern const unsigned char mus_encounter_staccato[];
extern const unsigned char mus_encounter_cello[];
extern const unsigned char mus_silvania_forest[];
extern const unsigned char mus_new_day[];
extern const unsigned char mus_melancholy[];
extern const unsigned char mus_windy[];
extern const unsigned char mus_gym_leader[];
extern const unsigned char mus_trainer_battle[];
extern const unsigned char mus_wild_battle[];
extern const unsigned char mus_amonia[];
extern const unsigned char mus_jorney[];
extern const unsigned char mus_pokecenter[];
extern const unsigned char mus_violet_headquarter[];
extern const unsigned char mus_orina_city[];
extern const unsigned char mus_inferior[];
extern const unsigned char mus_victory_trainer[];
extern const unsigned char mus_kaskada_unused[];
extern const unsigned char mus_meriana_city[];
extern const unsigned char mus_encounter_rival[];
extern const unsigned char mus_volcano[];
extern const unsigned char mus_darkness[];
extern const unsigned char mus_groudon_rise[];
extern const unsigned char mus_summit[];
extern const unsigned char mus_cave[];
extern const unsigned char mus_asterisk_castle[];
extern const unsigned char mus_silvania[];
extern const unsigned char mus_aktania[];
extern const unsigned char mus_battle_violet[];
extern const unsigned char sound_step[];
extern const unsigned char mus_jeropardy[];
extern const unsigned char mus_trainerschool[];
extern const unsigned char mus_rival_battle[];
extern const unsigned char mus_desert[];
extern const unsigned char mus_revolution_battle[];
extern const unsigned char mus_kaskada[];
extern const unsigned char mus_revolution[];
extern const unsigned char mus_magmatic[];
extern const unsigned char mus_fur_elise[];
extern const unsigned char mus_dimensional_traveler[];
extern const unsigned char mus_queen_of_darkness_battle[];
extern const unsigned char mus_consuming_darkness[];
extern const unsigned char mus_blackbeard[];
extern const unsigned char mus_criminal_intentions[];
extern const unsigned char mus_mistral[];
extern const unsigned char mus_sky[];
extern const unsigned char mus_violet_sphere_v1[];
extern const unsigned char sound_hint[];
extern const unsigned char mus_mistral_battle[];
extern const unsigned char mus_ceometria[];
extern const unsigned char mus_monumental[];
extern const unsigned char mus_route_7[];
extern const unsigned char mus_chan_test[];

#endif	/* MUSIC_H */

