/*
 * item.c
 *
 *  Created on: Jun 25, 2018
 *      Author: dominik
 */

#include "types.h"
#include "constants/species.h"
#include "prng.h"
#include "dungeon/dungeon2.h"
#include "save.h"
#include "debug.h"
#include "math.h"
#include "item/item.h"
#include "constants/items.h"

u16 dungeon_cave_items_common[] = {
    ITEM_POKEBALL,
    ITEM_SUPERBALL,
    ITEM_TRANK,
    ITEM_SUPERTRANK,
    ITEM_AETHER,
    ITEM_SCHUTZ,
    ITEM_FLUCHTSEIL,
    ITEM_PARA_HEILER,
    ITEM_GEGENGIFT,
    ITEM_SUPERSCHUTZ,
    0xFFFF
};

u16 dungeon_cave_items_rare[] = {
    ITEM_FINSTERSTEIN,
    ITEM_SONDERBONBON,
    ITEM_STERNENSTAUB,
    ITEM_AP_PLUS,
    ITEM_ELIXIER,
    ITEM_TOP_SCHUTZ,
    ITEM_METALLMANTEL,
    0xFFFF
};

u16 dungeon_cave_pick_item(dungeon_generator2 *dg2) {
  u16 *items;
  if (dungeon2_rnd_16(dg2) < 0x3000) {
    // 3/16 chance
    items = dungeon_cave_items_rare;
  } else {
    items = dungeon_cave_items_common;
  }
  int size = 0;
  while (items[size] != 0xFFFF) size++;
  return items[dungeon2_rnd_16(dg2) % size];
}




