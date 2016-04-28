#ifndef H_MAPEVENTS
#define H_MAPEVENTS
#include "types.h"


typedef struct map_event_person{
	u8 target_index; //scripts use this as target reference
	u8 overworld_index; //the picture to be displayed
	u8 field_2;
	u8 field_3;
	s16 x;
	s16 y;
	u8 field_8;
	u8 facing;
	u8 behavior;
	u8 field_B;
	u8 is_trainer : 1;
	u8 padding : 7;
	u8 field_D;
	u16 alert_radius;
	u8 *script;
	u16 flag;
	u8 field_16;
	u8 field_17;
	
}map_event_person;

typedef struct map_event_warp{
	s16 x;
	s16 y;
	u8 field_4;
	u8 target_warp_id;
	u8 target_map;
	u8 target_bank;
}map_event_warp;

typedef struct map_event_script{ //TODO
	s16 x;
	s16 y;
	u8 unkown[8];
	u8 *script;
}map_event_script;

typedef struct map_event_singpost{ //TODO
	s16 x;
	s16 y;
	u8 level;
	u8 type;
	u8 field_6;
	u8 field_7;
	u8 *script;
}map_event_signpost;

typedef struct map_events{
	u8 person_cnt;
	u8 warp_cnt;
	u8 script_cnt;
	u8 signpost_cnt;
	map_event_person *persons;
	map_event_warp *warps;
	map_event_script *scripts;
	map_event_signpost *signposts;
}map_events;
#endif