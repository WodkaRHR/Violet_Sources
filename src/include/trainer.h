#ifndef H_TRAINER
#define H_TRAINER

#include "pokemon.h"

typedef struct trainer{
	u8 struct_info;
	u8 trainerclass;
	u8 field_1;
	u8 field_2;
	u8 name[8];
	u8 unkown_fields[0x1C];
	
}trainer;

typedef struct build_field{
	u8 build : 5;
	u8 ability : 1;
	u8 hability : 1;
	u8 shinyness : 1;
	
}build_field;

typedef struct build{
	u8 nature : 5;
	u8 evs[6];
	u16 prefered_item;
} build;

union union_build_field{
	u8 value;
	build_field bitfield;
};

typedef struct trainer_items{
	
	u16 items[4];
	u8 cnt;
	
}trainer_items;


trainer* trainers = (trainer*)0x0823E998;

void build_trainer_poke(union union_build_field field, pokemon *poke);

void load_trainer_items (trainer_items *t_items);

#endif