/* 
 * File:   pokedex.h
 * Author: Domi
 *
 * Created on 11. August 2016, 23:10
 */

#ifndef POKEDEX_H
#define	POKEDEX_H

#include "anim_engine.h"
#include "pokemon.h"

#ifdef	__cplusplus
extern "C" {
#endif

#define POKEDEX_CNT 386

#define POKEDEX_TBOX_SEEN 0
#define POKEDEX_TBOX_CAUGHT 1
#define POKEDEX_TBOX_LIST_NAME 2
#define POKEDEX_TBOX_LIST_TYPES 3
#define POKEDEX_TBOX_LIST_CAPTURE 4
#define POKEDEX_TBOX_LIST_NR 5

#define POKEDEX_VAR_LAST_SPECIES 0x50DB
#define POKEDEX_VAR_COMPARATOR 0x50DA
#define POKEDEX_FLAG_HABITAT 0x927
#define POKEDEX_FLAG_FEATURE_0 0x928
#define POKEDEX_FLAG_FEATURE_1 0x929
#define POKEDEX_FLAG_FEATURE_2 0x92A
    
#define CAUGHT_POKEDEX_DISABLE 0x912

    extern u8 str_pokepad_pokedex_nl[];
    extern u8 str_pokepad_pokedex_unkown[];
    extern u8 str_pokepad_pokedex_form[];
    extern u8 str_pokepad_pokedex_data[];
    extern u8 str_pokepad_pokedex_qmark[];
    extern u8 str_pokepad_pokedex_std_buttons[];
    extern u8 str_pokepad_pokedex_habitat[];
    extern u8 str_pokepad_pokedex_std_buttons_battle[];
    extern u8 str_pokepad_pokedex_kg[];
    extern u8 str_pokepad_pokedex_m[];
    extern u8 str_pokepad_pokedex_comma[];
    extern u8 str_pokepad_pokedex_habitat_title[];
    extern u8 str_pokepad_pokedex_habitat_back[];
    extern u8 str_pokepad_pokedex_habitat_grass[];
    extern u8 str_pokepad_pokedex_habitat_water[];
    extern u8 str_pokepad_pokedex_habitat_rod[];
    extern u8 str_pokepad_pokedex_habitat_radar[];
    extern u8 str_pokepad_pokedex_habitat_none[];

    typedef struct {
        u16 dex_id;
        u16 species;
        bool seen;
        bool caught;
    } pokedex_list_element;

    typedef struct {
        u8 namespace;
        u8 propabilty; //0 rare, 1 medium, 2 common
        u8 type; //0 grass, 1 water, 2 rod, 3 radar
    } pokedex_habitat_pair;

#define HABITAT_TYPE_GRASS 0
#define HABITAT_TYPE_WATER 1
#define HABITAT_TYPE_ROD 2
#define HABITAT_TYPE_RADAR 3

    typedef struct {
        bool from_outdoor;
        bool in_list;
        u8 current_group;
        u8 group_fading_index;
        bool group_fading_mode;
        u8 sorting;
        u16 current_species;
        u16 current_list_index;
        u8 current_comparator;
        bool cursor_anchor;
        //for list
        u8 list_mode; //0 = none, 1 = down, 2 = up, 3=right, 4=left
        bool list_fast_mode;
        u8 list_countdown;
        //for sortings
        u8 oam_sort_cursor;
        u8 sort_cursor_pos;
        bool resorting;
        bool reverse_req;
        pokedex_list_element *list;
        //for entry
        u16 tile_pokepic;
        u16 tile_form;
        u8 pal_pokepic;
        u8 pal_form;
        u8 oam_pokepic;
        u8 oam_form;
        bool entry_fade;
        bool entry_skip_cry;
        //for habitats
        pokedex_habitat_pair *habitats;
        int habitat_size;
        u8 oam_habitat_cursor;
        u8 oam_habitat_head;
        u8 habitat_cursor_x;
        u8 habitat_cursor_y;
        u8 habitat_oams_rarity[4]; // 3 for rod is not used
        bool habitat_cursor_is_moving;
        u8 habitat_fading_mode;
        u8 habitat_fading_index;
        u8 habitat_fading_countdown;
        u8 habitat_oams_rod[3];
        u8 current_worldmap;
        bool habitat_found;
        bool from_battle;
    } pokedex_memory;

    typedef struct {
        u8 category[12];
        u16 height;
        u16 weight;
        u8 *page0;
        u8 *page1;
        u16 unused;
        u16 poke_scale;
        u16 poke_displace;
        u16 trainer_scale;
        u16 trainer_displace;
        u16 unused_2;
    } pokedex_data;

    typedef struct {
        u16 *data;
        int page_size;
    } pokedex_page;

    typedef struct {
        pokedex_page *pages;
        int page_cnt;
    } pokedex_habitat;


    int pokedex_get_namespaces_of_species(pokedex_habitat_pair *dst, u16 species);
    int pokedex_get_namespace_of_species_add_pair_if_not_present(pokedex_habitat_pair *dst, int cnt, u8 namespace, u8 propability, u8 type);

    void pokedex_init_components();
    void pokedex_callback_init();
    void pokedex_init(bool from_outdoor);
    void pokedex_show_components();
    void pokedex_build_list();
    void pokedex_quicksort_list(u8 comparator, int l, int r); //0 := nr, 1 := name, 2 := size, 3 := weight
    int pokedex_quicksort_list_compare(u8 comparator, int a, int b);
    void pokedex_quicksort_list_swap(int a, int b);
    void pokedex_group_window_set();
    void pokedex_callback_group_selection();
    void pokedex_callback_return();
    void pokedex_free_maps();
    int pokedex_get_first_seen();
    int pokedex_get_last_seen();
    void pokedex_update_list();
    void pokedex_callback_list();
    void pokedex_callback_list_enter_mode(u8 mode);
    bool pokedex_callback_list_mode_proceed();
    void pokedex_sort_locate_cursor();
    void pokedex_callback_sort();
    void pokedex_big_callback_quicksort_parallel(u8 self);
    void pokedex_quicksort_revert(int from, int to);
    void pokedex_callback_init_entry();
    void pokedex_entry_load_strings();
    void pokedex_entry_load_pokepic();
    void pokedex_entry_update();
    void pokedex_callback_entry_idle();
    void pokedex_callback_entry_back();
    bool pokedex_operator(u16 val, u8 op, bool is_species_id);
    u8* pokedex_flag_access(u16 flag, bool seen);
    u16 pokedex_get_number_seen_or_caught(bool caught);
    void pokedex_init_habitat();
    void pokedex_habitats_load_for_species(u16 *unpacked_map);
    void pokedex_habitats_load_namespace();
    void pokedex_habitats_update();
    void pokedex_habitat_callback_idle();
    //Romfuncs
    u16 pokedex_get_id(u16 species);
    bool pokedex_operator_by_dex_id(u16 dex_id, u8 op); //0 := is_seen, 1 := is_caught, 2 := set_seen, 3 := set_caught4
    pokedex_data *pokedex_get_data(u16 dex_id);
    bool national_dex_is_achieved();
    u16 pokemon_get_display_number(u16 species);
    u16 pokedex_get_species_by_dex_id(u16 dex_id);
    void pokedex_habitat_big_callback_cursor_movement(u8 self);

    u16 pokedex_order[POKEMON_CNT - 1];
    pokedex_data dex_data[POKEDEX_CNT + 1];

    extern const unsigned short gfx_worldmapTiles[];
    extern const unsigned short gfx_worldmapPal[];
    u8 pokedex_fontcolmap[4];

    int *worldmap_tilemaps[4];
    u8 *namespace_worldmap_associations;
    
extern u8 str_pokedex_data_0_page_0[];
extern u8 str_pokedex_data_0_page_1[];
extern u8 str_pokedex_data_1_page_0[];
extern u8 str_pokedex_data_1_page_1[];
extern u8 str_pokedex_data_2_page_0[];
extern u8 str_pokedex_data_2_page_1[];
extern u8 str_pokedex_data_3_page_0[];
extern u8 str_pokedex_data_3_page_1[];
extern u8 str_pokedex_data_4_page_0[];
extern u8 str_pokedex_data_4_page_1[];
extern u8 str_pokedex_data_5_page_0[];
extern u8 str_pokedex_data_5_page_1[];
extern u8 str_pokedex_data_6_page_0[];
extern u8 str_pokedex_data_6_page_1[];
extern u8 str_pokedex_data_7_page_0[];
extern u8 str_pokedex_data_7_page_1[];
extern u8 str_pokedex_data_8_page_0[];
extern u8 str_pokedex_data_8_page_1[];
extern u8 str_pokedex_data_9_page_0[];
extern u8 str_pokedex_data_9_page_1[];
extern u8 str_pokedex_data_10_page_0[];
extern u8 str_pokedex_data_10_page_1[];
extern u8 str_pokedex_data_11_page_0[];
extern u8 str_pokedex_data_11_page_1[];
extern u8 str_pokedex_data_12_page_0[];
extern u8 str_pokedex_data_12_page_1[];
extern u8 str_pokedex_data_13_page_0[];
extern u8 str_pokedex_data_13_page_1[];
extern u8 str_pokedex_data_14_page_0[];
extern u8 str_pokedex_data_14_page_1[];
extern u8 str_pokedex_data_15_page_0[];
extern u8 str_pokedex_data_15_page_1[];
extern u8 str_pokedex_data_16_page_0[];
extern u8 str_pokedex_data_16_page_1[];
extern u8 str_pokedex_data_17_page_0[];
extern u8 str_pokedex_data_17_page_1[];
extern u8 str_pokedex_data_18_page_0[];
extern u8 str_pokedex_data_18_page_1[];
extern u8 str_pokedex_data_19_page_0[];
extern u8 str_pokedex_data_19_page_1[];
extern u8 str_pokedex_data_20_page_0[];
extern u8 str_pokedex_data_20_page_1[];
extern u8 str_pokedex_data_21_page_0[];
extern u8 str_pokedex_data_21_page_1[];
extern u8 str_pokedex_data_22_page_0[];
extern u8 str_pokedex_data_22_page_1[];
extern u8 str_pokedex_data_23_page_0[];
extern u8 str_pokedex_data_23_page_1[];
extern u8 str_pokedex_data_24_page_0[];
extern u8 str_pokedex_data_24_page_1[];
extern u8 str_pokedex_data_25_page_0[];
extern u8 str_pokedex_data_25_page_1[];
extern u8 str_pokedex_data_26_page_0[];
extern u8 str_pokedex_data_26_page_1[];
extern u8 str_pokedex_data_27_page_0[];
extern u8 str_pokedex_data_27_page_1[];
extern u8 str_pokedex_data_28_page_0[];
extern u8 str_pokedex_data_28_page_1[];
extern u8 str_pokedex_data_29_page_0[];
extern u8 str_pokedex_data_29_page_1[];
extern u8 str_pokedex_data_30_page_0[];
extern u8 str_pokedex_data_30_page_1[];
extern u8 str_pokedex_data_31_page_0[];
extern u8 str_pokedex_data_31_page_1[];
extern u8 str_pokedex_data_32_page_0[];
extern u8 str_pokedex_data_32_page_1[];
extern u8 str_pokedex_data_33_page_0[];
extern u8 str_pokedex_data_33_page_1[];
extern u8 str_pokedex_data_34_page_0[];
extern u8 str_pokedex_data_34_page_1[];
extern u8 str_pokedex_data_35_page_0[];
extern u8 str_pokedex_data_35_page_1[];
extern u8 str_pokedex_data_36_page_0[];
extern u8 str_pokedex_data_36_page_1[];
extern u8 str_pokedex_data_37_page_0[];
extern u8 str_pokedex_data_37_page_1[];
extern u8 str_pokedex_data_38_page_0[];
extern u8 str_pokedex_data_38_page_1[];
extern u8 str_pokedex_data_39_page_0[];
extern u8 str_pokedex_data_39_page_1[];
extern u8 str_pokedex_data_40_page_0[];
extern u8 str_pokedex_data_40_page_1[];
extern u8 str_pokedex_data_41_page_0[];
extern u8 str_pokedex_data_41_page_1[];
extern u8 str_pokedex_data_42_page_0[];
extern u8 str_pokedex_data_42_page_1[];
extern u8 str_pokedex_data_43_page_0[];
extern u8 str_pokedex_data_43_page_1[];
extern u8 str_pokedex_data_44_page_0[];
extern u8 str_pokedex_data_44_page_1[];
extern u8 str_pokedex_data_45_page_0[];
extern u8 str_pokedex_data_45_page_1[];
extern u8 str_pokedex_data_46_page_0[];
extern u8 str_pokedex_data_46_page_1[];
extern u8 str_pokedex_data_47_page_0[];
extern u8 str_pokedex_data_47_page_1[];
extern u8 str_pokedex_data_48_page_0[];
extern u8 str_pokedex_data_48_page_1[];
extern u8 str_pokedex_data_49_page_0[];
extern u8 str_pokedex_data_49_page_1[];
extern u8 str_pokedex_data_50_page_0[];
extern u8 str_pokedex_data_50_page_1[];
extern u8 str_pokedex_data_51_page_0[];
extern u8 str_pokedex_data_51_page_1[];
extern u8 str_pokedex_data_52_page_0[];
extern u8 str_pokedex_data_52_page_1[];
extern u8 str_pokedex_data_53_page_0[];
extern u8 str_pokedex_data_53_page_1[];
extern u8 str_pokedex_data_54_page_0[];
extern u8 str_pokedex_data_54_page_1[];
extern u8 str_pokedex_data_55_page_0[];
extern u8 str_pokedex_data_55_page_1[];
extern u8 str_pokedex_data_56_page_0[];
extern u8 str_pokedex_data_56_page_1[];
extern u8 str_pokedex_data_57_page_0[];
extern u8 str_pokedex_data_57_page_1[];
extern u8 str_pokedex_data_58_page_0[];
extern u8 str_pokedex_data_58_page_1[];
extern u8 str_pokedex_data_59_page_0[];
extern u8 str_pokedex_data_59_page_1[];
extern u8 str_pokedex_data_60_page_0[];
extern u8 str_pokedex_data_60_page_1[];
extern u8 str_pokedex_data_61_page_0[];
extern u8 str_pokedex_data_61_page_1[];
extern u8 str_pokedex_data_62_page_0[];
extern u8 str_pokedex_data_62_page_1[];
extern u8 str_pokedex_data_63_page_0[];
extern u8 str_pokedex_data_63_page_1[];
extern u8 str_pokedex_data_64_page_0[];
extern u8 str_pokedex_data_64_page_1[];
extern u8 str_pokedex_data_65_page_0[];
extern u8 str_pokedex_data_65_page_1[];
extern u8 str_pokedex_data_66_page_0[];
extern u8 str_pokedex_data_66_page_1[];
extern u8 str_pokedex_data_67_page_0[];
extern u8 str_pokedex_data_67_page_1[];
extern u8 str_pokedex_data_68_page_0[];
extern u8 str_pokedex_data_68_page_1[];
extern u8 str_pokedex_data_69_page_0[];
extern u8 str_pokedex_data_69_page_1[];
extern u8 str_pokedex_data_70_page_0[];
extern u8 str_pokedex_data_70_page_1[];
extern u8 str_pokedex_data_71_page_0[];
extern u8 str_pokedex_data_71_page_1[];
extern u8 str_pokedex_data_72_page_0[];
extern u8 str_pokedex_data_72_page_1[];
extern u8 str_pokedex_data_73_page_0[];
extern u8 str_pokedex_data_73_page_1[];
extern u8 str_pokedex_data_74_page_0[];
extern u8 str_pokedex_data_74_page_1[];
extern u8 str_pokedex_data_75_page_0[];
extern u8 str_pokedex_data_75_page_1[];
extern u8 str_pokedex_data_76_page_0[];
extern u8 str_pokedex_data_76_page_1[];
extern u8 str_pokedex_data_77_page_0[];
extern u8 str_pokedex_data_77_page_1[];
extern u8 str_pokedex_data_78_page_0[];
extern u8 str_pokedex_data_78_page_1[];
extern u8 str_pokedex_data_79_page_0[];
extern u8 str_pokedex_data_79_page_1[];
extern u8 str_pokedex_data_80_page_0[];
extern u8 str_pokedex_data_80_page_1[];
extern u8 str_pokedex_data_81_page_0[];
extern u8 str_pokedex_data_81_page_1[];
extern u8 str_pokedex_data_82_page_0[];
extern u8 str_pokedex_data_82_page_1[];
extern u8 str_pokedex_data_83_page_0[];
extern u8 str_pokedex_data_83_page_1[];
extern u8 str_pokedex_data_84_page_0[];
extern u8 str_pokedex_data_84_page_1[];
extern u8 str_pokedex_data_85_page_0[];
extern u8 str_pokedex_data_85_page_1[];
extern u8 str_pokedex_data_86_page_0[];
extern u8 str_pokedex_data_86_page_1[];
extern u8 str_pokedex_data_87_page_0[];
extern u8 str_pokedex_data_87_page_1[];
extern u8 str_pokedex_data_88_page_0[];
extern u8 str_pokedex_data_88_page_1[];
extern u8 str_pokedex_data_89_page_0[];
extern u8 str_pokedex_data_89_page_1[];
extern u8 str_pokedex_data_90_page_0[];
extern u8 str_pokedex_data_90_page_1[];
extern u8 str_pokedex_data_91_page_0[];
extern u8 str_pokedex_data_91_page_1[];
extern u8 str_pokedex_data_92_page_0[];
extern u8 str_pokedex_data_92_page_1[];
extern u8 str_pokedex_data_93_page_0[];
extern u8 str_pokedex_data_93_page_1[];
extern u8 str_pokedex_data_94_page_0[];
extern u8 str_pokedex_data_94_page_1[];
extern u8 str_pokedex_data_95_page_0[];
extern u8 str_pokedex_data_95_page_1[];
extern u8 str_pokedex_data_96_page_0[];
extern u8 str_pokedex_data_96_page_1[];
extern u8 str_pokedex_data_97_page_0[];
extern u8 str_pokedex_data_97_page_1[];
extern u8 str_pokedex_data_98_page_0[];
extern u8 str_pokedex_data_98_page_1[];
extern u8 str_pokedex_data_99_page_0[];
extern u8 str_pokedex_data_99_page_1[];
extern u8 str_pokedex_data_100_page_0[];
extern u8 str_pokedex_data_100_page_1[];
extern u8 str_pokedex_data_101_page_0[];
extern u8 str_pokedex_data_101_page_1[];
extern u8 str_pokedex_data_102_page_0[];
extern u8 str_pokedex_data_102_page_1[];
extern u8 str_pokedex_data_103_page_0[];
extern u8 str_pokedex_data_103_page_1[];
extern u8 str_pokedex_data_104_page_0[];
extern u8 str_pokedex_data_104_page_1[];
extern u8 str_pokedex_data_105_page_0[];
extern u8 str_pokedex_data_105_page_1[];
extern u8 str_pokedex_data_106_page_0[];
extern u8 str_pokedex_data_106_page_1[];
extern u8 str_pokedex_data_107_page_0[];
extern u8 str_pokedex_data_107_page_1[];
extern u8 str_pokedex_data_108_page_0[];
extern u8 str_pokedex_data_108_page_1[];
extern u8 str_pokedex_data_109_page_0[];
extern u8 str_pokedex_data_109_page_1[];
extern u8 str_pokedex_data_110_page_0[];
extern u8 str_pokedex_data_110_page_1[];
extern u8 str_pokedex_data_111_page_0[];
extern u8 str_pokedex_data_111_page_1[];
extern u8 str_pokedex_data_112_page_0[];
extern u8 str_pokedex_data_112_page_1[];
extern u8 str_pokedex_data_113_page_0[];
extern u8 str_pokedex_data_113_page_1[];
extern u8 str_pokedex_data_114_page_0[];
extern u8 str_pokedex_data_114_page_1[];
extern u8 str_pokedex_data_115_page_0[];
extern u8 str_pokedex_data_115_page_1[];
extern u8 str_pokedex_data_116_page_0[];
extern u8 str_pokedex_data_116_page_1[];
extern u8 str_pokedex_data_117_page_0[];
extern u8 str_pokedex_data_117_page_1[];
extern u8 str_pokedex_data_118_page_0[];
extern u8 str_pokedex_data_118_page_1[];
extern u8 str_pokedex_data_119_page_0[];
extern u8 str_pokedex_data_119_page_1[];
extern u8 str_pokedex_data_120_page_0[];
extern u8 str_pokedex_data_120_page_1[];
extern u8 str_pokedex_data_121_page_0[];
extern u8 str_pokedex_data_121_page_1[];
extern u8 str_pokedex_data_122_page_0[];
extern u8 str_pokedex_data_122_page_1[];
extern u8 str_pokedex_data_123_page_0[];
extern u8 str_pokedex_data_123_page_1[];
extern u8 str_pokedex_data_124_page_0[];
extern u8 str_pokedex_data_124_page_1[];
extern u8 str_pokedex_data_125_page_0[];
extern u8 str_pokedex_data_125_page_1[];
extern u8 str_pokedex_data_126_page_0[];
extern u8 str_pokedex_data_126_page_1[];
extern u8 str_pokedex_data_127_page_0[];
extern u8 str_pokedex_data_127_page_1[];
extern u8 str_pokedex_data_128_page_0[];
extern u8 str_pokedex_data_128_page_1[];
extern u8 str_pokedex_data_129_page_0[];
extern u8 str_pokedex_data_129_page_1[];
extern u8 str_pokedex_data_130_page_0[];
extern u8 str_pokedex_data_130_page_1[];
extern u8 str_pokedex_data_131_page_0[];
extern u8 str_pokedex_data_131_page_1[];
extern u8 str_pokedex_data_132_page_0[];
extern u8 str_pokedex_data_132_page_1[];
extern u8 str_pokedex_data_133_page_0[];
extern u8 str_pokedex_data_133_page_1[];
extern u8 str_pokedex_data_134_page_0[];
extern u8 str_pokedex_data_134_page_1[];
extern u8 str_pokedex_data_135_page_0[];
extern u8 str_pokedex_data_135_page_1[];
extern u8 str_pokedex_data_136_page_0[];
extern u8 str_pokedex_data_136_page_1[];
extern u8 str_pokedex_data_137_page_0[];
extern u8 str_pokedex_data_137_page_1[];
extern u8 str_pokedex_data_138_page_0[];
extern u8 str_pokedex_data_138_page_1[];
extern u8 str_pokedex_data_139_page_0[];
extern u8 str_pokedex_data_139_page_1[];
extern u8 str_pokedex_data_140_page_0[];
extern u8 str_pokedex_data_140_page_1[];
extern u8 str_pokedex_data_141_page_0[];
extern u8 str_pokedex_data_141_page_1[];
extern u8 str_pokedex_data_142_page_0[];
extern u8 str_pokedex_data_142_page_1[];
extern u8 str_pokedex_data_143_page_0[];
extern u8 str_pokedex_data_143_page_1[];
extern u8 str_pokedex_data_144_page_0[];
extern u8 str_pokedex_data_144_page_1[];
extern u8 str_pokedex_data_145_page_0[];
extern u8 str_pokedex_data_145_page_1[];
extern u8 str_pokedex_data_146_page_0[];
extern u8 str_pokedex_data_146_page_1[];
extern u8 str_pokedex_data_147_page_0[];
extern u8 str_pokedex_data_147_page_1[];
extern u8 str_pokedex_data_148_page_0[];
extern u8 str_pokedex_data_148_page_1[];
extern u8 str_pokedex_data_149_page_0[];
extern u8 str_pokedex_data_149_page_1[];
extern u8 str_pokedex_data_150_page_0[];
extern u8 str_pokedex_data_150_page_1[];
extern u8 str_pokedex_data_151_page_0[];
extern u8 str_pokedex_data_151_page_1[];
extern u8 str_pokedex_data_152_page_0[];
extern u8 str_pokedex_data_152_page_1[];
extern u8 str_pokedex_data_153_page_0[];
extern u8 str_pokedex_data_153_page_1[];
extern u8 str_pokedex_data_154_page_0[];
extern u8 str_pokedex_data_154_page_1[];
extern u8 str_pokedex_data_155_page_0[];
extern u8 str_pokedex_data_155_page_1[];
extern u8 str_pokedex_data_156_page_0[];
extern u8 str_pokedex_data_156_page_1[];
extern u8 str_pokedex_data_157_page_0[];
extern u8 str_pokedex_data_157_page_1[];
extern u8 str_pokedex_data_158_page_0[];
extern u8 str_pokedex_data_158_page_1[];
extern u8 str_pokedex_data_159_page_0[];
extern u8 str_pokedex_data_159_page_1[];
extern u8 str_pokedex_data_160_page_0[];
extern u8 str_pokedex_data_160_page_1[];
extern u8 str_pokedex_data_161_page_0[];
extern u8 str_pokedex_data_161_page_1[];
extern u8 str_pokedex_data_162_page_0[];
extern u8 str_pokedex_data_162_page_1[];
extern u8 str_pokedex_data_163_page_0[];
extern u8 str_pokedex_data_163_page_1[];
extern u8 str_pokedex_data_164_page_0[];
extern u8 str_pokedex_data_164_page_1[];
extern u8 str_pokedex_data_165_page_0[];
extern u8 str_pokedex_data_165_page_1[];
extern u8 str_pokedex_data_166_page_0[];
extern u8 str_pokedex_data_166_page_1[];
extern u8 str_pokedex_data_167_page_0[];
extern u8 str_pokedex_data_167_page_1[];
extern u8 str_pokedex_data_168_page_0[];
extern u8 str_pokedex_data_168_page_1[];
extern u8 str_pokedex_data_169_page_0[];
extern u8 str_pokedex_data_169_page_1[];
extern u8 str_pokedex_data_170_page_0[];
extern u8 str_pokedex_data_170_page_1[];
extern u8 str_pokedex_data_171_page_0[];
extern u8 str_pokedex_data_171_page_1[];
extern u8 str_pokedex_data_172_page_0[];
extern u8 str_pokedex_data_172_page_1[];
extern u8 str_pokedex_data_173_page_0[];
extern u8 str_pokedex_data_173_page_1[];
extern u8 str_pokedex_data_174_page_0[];
extern u8 str_pokedex_data_174_page_1[];
extern u8 str_pokedex_data_175_page_0[];
extern u8 str_pokedex_data_175_page_1[];
extern u8 str_pokedex_data_176_page_0[];
extern u8 str_pokedex_data_176_page_1[];
extern u8 str_pokedex_data_177_page_0[];
extern u8 str_pokedex_data_177_page_1[];
extern u8 str_pokedex_data_178_page_0[];
extern u8 str_pokedex_data_178_page_1[];
extern u8 str_pokedex_data_179_page_0[];
extern u8 str_pokedex_data_179_page_1[];
extern u8 str_pokedex_data_180_page_0[];
extern u8 str_pokedex_data_180_page_1[];
extern u8 str_pokedex_data_181_page_0[];
extern u8 str_pokedex_data_181_page_1[];
extern u8 str_pokedex_data_182_page_0[];
extern u8 str_pokedex_data_182_page_1[];
extern u8 str_pokedex_data_183_page_0[];
extern u8 str_pokedex_data_183_page_1[];
extern u8 str_pokedex_data_184_page_0[];
extern u8 str_pokedex_data_184_page_1[];
extern u8 str_pokedex_data_185_page_0[];
extern u8 str_pokedex_data_185_page_1[];
extern u8 str_pokedex_data_186_page_0[];
extern u8 str_pokedex_data_186_page_1[];
extern u8 str_pokedex_data_187_page_0[];
extern u8 str_pokedex_data_187_page_1[];
extern u8 str_pokedex_data_188_page_0[];
extern u8 str_pokedex_data_188_page_1[];
extern u8 str_pokedex_data_189_page_0[];
extern u8 str_pokedex_data_189_page_1[];
extern u8 str_pokedex_data_190_page_0[];
extern u8 str_pokedex_data_190_page_1[];
extern u8 str_pokedex_data_191_page_0[];
extern u8 str_pokedex_data_191_page_1[];
extern u8 str_pokedex_data_192_page_0[];
extern u8 str_pokedex_data_192_page_1[];
extern u8 str_pokedex_data_193_page_0[];
extern u8 str_pokedex_data_193_page_1[];
extern u8 str_pokedex_data_194_page_0[];
extern u8 str_pokedex_data_194_page_1[];
extern u8 str_pokedex_data_195_page_0[];
extern u8 str_pokedex_data_195_page_1[];
extern u8 str_pokedex_data_196_page_0[];
extern u8 str_pokedex_data_196_page_1[];
extern u8 str_pokedex_data_197_page_0[];
extern u8 str_pokedex_data_197_page_1[];
extern u8 str_pokedex_data_198_page_0[];
extern u8 str_pokedex_data_198_page_1[];
extern u8 str_pokedex_data_199_page_0[];
extern u8 str_pokedex_data_199_page_1[];
extern u8 str_pokedex_data_200_page_0[];
extern u8 str_pokedex_data_200_page_1[];
extern u8 str_pokedex_data_201_page_0[];
extern u8 str_pokedex_data_201_page_1[];
extern u8 str_pokedex_data_202_page_0[];
extern u8 str_pokedex_data_202_page_1[];
extern u8 str_pokedex_data_203_page_0[];
extern u8 str_pokedex_data_203_page_1[];
extern u8 str_pokedex_data_204_page_0[];
extern u8 str_pokedex_data_204_page_1[];
extern u8 str_pokedex_data_205_page_0[];
extern u8 str_pokedex_data_205_page_1[];
extern u8 str_pokedex_data_206_page_0[];
extern u8 str_pokedex_data_206_page_1[];
extern u8 str_pokedex_data_207_page_0[];
extern u8 str_pokedex_data_207_page_1[];
extern u8 str_pokedex_data_208_page_0[];
extern u8 str_pokedex_data_208_page_1[];
extern u8 str_pokedex_data_209_page_0[];
extern u8 str_pokedex_data_209_page_1[];
extern u8 str_pokedex_data_210_page_0[];
extern u8 str_pokedex_data_210_page_1[];
extern u8 str_pokedex_data_211_page_0[];
extern u8 str_pokedex_data_211_page_1[];
extern u8 str_pokedex_data_212_page_0[];
extern u8 str_pokedex_data_212_page_1[];
extern u8 str_pokedex_data_213_page_0[];
extern u8 str_pokedex_data_213_page_1[];
extern u8 str_pokedex_data_214_page_0[];
extern u8 str_pokedex_data_214_page_1[];
extern u8 str_pokedex_data_215_page_0[];
extern u8 str_pokedex_data_215_page_1[];
extern u8 str_pokedex_data_216_page_0[];
extern u8 str_pokedex_data_216_page_1[];
extern u8 str_pokedex_data_217_page_0[];
extern u8 str_pokedex_data_217_page_1[];
extern u8 str_pokedex_data_218_page_0[];
extern u8 str_pokedex_data_218_page_1[];
extern u8 str_pokedex_data_219_page_0[];
extern u8 str_pokedex_data_219_page_1[];
extern u8 str_pokedex_data_220_page_0[];
extern u8 str_pokedex_data_220_page_1[];
extern u8 str_pokedex_data_221_page_0[];
extern u8 str_pokedex_data_221_page_1[];
extern u8 str_pokedex_data_222_page_0[];
extern u8 str_pokedex_data_222_page_1[];
extern u8 str_pokedex_data_223_page_0[];
extern u8 str_pokedex_data_223_page_1[];
extern u8 str_pokedex_data_224_page_0[];
extern u8 str_pokedex_data_224_page_1[];
extern u8 str_pokedex_data_225_page_0[];
extern u8 str_pokedex_data_225_page_1[];
extern u8 str_pokedex_data_226_page_0[];
extern u8 str_pokedex_data_226_page_1[];
extern u8 str_pokedex_data_227_page_0[];
extern u8 str_pokedex_data_227_page_1[];
extern u8 str_pokedex_data_228_page_0[];
extern u8 str_pokedex_data_228_page_1[];
extern u8 str_pokedex_data_229_page_0[];
extern u8 str_pokedex_data_229_page_1[];
extern u8 str_pokedex_data_230_page_0[];
extern u8 str_pokedex_data_230_page_1[];
extern u8 str_pokedex_data_231_page_0[];
extern u8 str_pokedex_data_231_page_1[];
extern u8 str_pokedex_data_232_page_0[];
extern u8 str_pokedex_data_232_page_1[];
extern u8 str_pokedex_data_233_page_0[];
extern u8 str_pokedex_data_233_page_1[];
extern u8 str_pokedex_data_234_page_0[];
extern u8 str_pokedex_data_234_page_1[];
extern u8 str_pokedex_data_235_page_0[];
extern u8 str_pokedex_data_235_page_1[];
extern u8 str_pokedex_data_236_page_0[];
extern u8 str_pokedex_data_236_page_1[];
extern u8 str_pokedex_data_237_page_0[];
extern u8 str_pokedex_data_237_page_1[];
extern u8 str_pokedex_data_238_page_0[];
extern u8 str_pokedex_data_238_page_1[];
extern u8 str_pokedex_data_239_page_0[];
extern u8 str_pokedex_data_239_page_1[];
extern u8 str_pokedex_data_240_page_0[];
extern u8 str_pokedex_data_240_page_1[];
extern u8 str_pokedex_data_241_page_0[];
extern u8 str_pokedex_data_241_page_1[];
extern u8 str_pokedex_data_242_page_0[];
extern u8 str_pokedex_data_242_page_1[];
extern u8 str_pokedex_data_243_page_0[];
extern u8 str_pokedex_data_243_page_1[];
extern u8 str_pokedex_data_244_page_0[];
extern u8 str_pokedex_data_244_page_1[];
extern u8 str_pokedex_data_245_page_0[];
extern u8 str_pokedex_data_245_page_1[];
extern u8 str_pokedex_data_246_page_0[];
extern u8 str_pokedex_data_246_page_1[];
extern u8 str_pokedex_data_247_page_0[];
extern u8 str_pokedex_data_247_page_1[];
extern u8 str_pokedex_data_248_page_0[];
extern u8 str_pokedex_data_248_page_1[];
extern u8 str_pokedex_data_249_page_0[];
extern u8 str_pokedex_data_249_page_1[];
extern u8 str_pokedex_data_250_page_0[];
extern u8 str_pokedex_data_250_page_1[];
extern u8 str_pokedex_data_251_page_0[];
extern u8 str_pokedex_data_251_page_1[];
extern u8 str_pokedex_data_252_page_0[];
extern u8 str_pokedex_data_252_page_1[];
extern u8 str_pokedex_data_253_page_0[];
extern u8 str_pokedex_data_253_page_1[];
extern u8 str_pokedex_data_254_page_0[];
extern u8 str_pokedex_data_254_page_1[];
extern u8 str_pokedex_data_255_page_0[];
extern u8 str_pokedex_data_255_page_1[];
extern u8 str_pokedex_data_256_page_0[];
extern u8 str_pokedex_data_256_page_1[];
extern u8 str_pokedex_data_257_page_0[];
extern u8 str_pokedex_data_257_page_1[];
extern u8 str_pokedex_data_258_page_0[];
extern u8 str_pokedex_data_258_page_1[];
extern u8 str_pokedex_data_259_page_0[];
extern u8 str_pokedex_data_259_page_1[];
extern u8 str_pokedex_data_260_page_0[];
extern u8 str_pokedex_data_260_page_1[];
extern u8 str_pokedex_data_261_page_0[];
extern u8 str_pokedex_data_261_page_1[];
extern u8 str_pokedex_data_262_page_0[];
extern u8 str_pokedex_data_262_page_1[];
extern u8 str_pokedex_data_263_page_0[];
extern u8 str_pokedex_data_263_page_1[];
extern u8 str_pokedex_data_264_page_0[];
extern u8 str_pokedex_data_264_page_1[];
extern u8 str_pokedex_data_265_page_0[];
extern u8 str_pokedex_data_265_page_1[];
extern u8 str_pokedex_data_266_page_0[];
extern u8 str_pokedex_data_266_page_1[];
extern u8 str_pokedex_data_267_page_0[];
extern u8 str_pokedex_data_267_page_1[];
extern u8 str_pokedex_data_268_page_0[];
extern u8 str_pokedex_data_268_page_1[];
extern u8 str_pokedex_data_269_page_0[];
extern u8 str_pokedex_data_269_page_1[];
extern u8 str_pokedex_data_270_page_0[];
extern u8 str_pokedex_data_270_page_1[];
extern u8 str_pokedex_data_271_page_0[];
extern u8 str_pokedex_data_271_page_1[];
extern u8 str_pokedex_data_272_page_0[];
extern u8 str_pokedex_data_272_page_1[];
extern u8 str_pokedex_data_273_page_0[];
extern u8 str_pokedex_data_273_page_1[];
extern u8 str_pokedex_data_274_page_0[];
extern u8 str_pokedex_data_274_page_1[];
extern u8 str_pokedex_data_275_page_0[];
extern u8 str_pokedex_data_275_page_1[];
extern u8 str_pokedex_data_276_page_0[];
extern u8 str_pokedex_data_276_page_1[];
extern u8 str_pokedex_data_277_page_0[];
extern u8 str_pokedex_data_277_page_1[];
extern u8 str_pokedex_data_278_page_0[];
extern u8 str_pokedex_data_278_page_1[];
extern u8 str_pokedex_data_279_page_0[];
extern u8 str_pokedex_data_279_page_1[];
extern u8 str_pokedex_data_280_page_0[];
extern u8 str_pokedex_data_280_page_1[];
extern u8 str_pokedex_data_281_page_0[];
extern u8 str_pokedex_data_281_page_1[];
extern u8 str_pokedex_data_282_page_0[];
extern u8 str_pokedex_data_282_page_1[];
extern u8 str_pokedex_data_283_page_0[];
extern u8 str_pokedex_data_283_page_1[];
extern u8 str_pokedex_data_284_page_0[];
extern u8 str_pokedex_data_284_page_1[];
extern u8 str_pokedex_data_285_page_0[];
extern u8 str_pokedex_data_285_page_1[];
extern u8 str_pokedex_data_286_page_0[];
extern u8 str_pokedex_data_286_page_1[];
extern u8 str_pokedex_data_287_page_0[];
extern u8 str_pokedex_data_287_page_1[];
extern u8 str_pokedex_data_288_page_0[];
extern u8 str_pokedex_data_288_page_1[];
extern u8 str_pokedex_data_289_page_0[];
extern u8 str_pokedex_data_289_page_1[];
extern u8 str_pokedex_data_290_page_0[];
extern u8 str_pokedex_data_290_page_1[];
extern u8 str_pokedex_data_291_page_0[];
extern u8 str_pokedex_data_291_page_1[];
extern u8 str_pokedex_data_292_page_0[];
extern u8 str_pokedex_data_292_page_1[];
extern u8 str_pokedex_data_293_page_0[];
extern u8 str_pokedex_data_293_page_1[];
extern u8 str_pokedex_data_294_page_0[];
extern u8 str_pokedex_data_294_page_1[];
extern u8 str_pokedex_data_295_page_0[];
extern u8 str_pokedex_data_295_page_1[];
extern u8 str_pokedex_data_296_page_0[];
extern u8 str_pokedex_data_296_page_1[];
extern u8 str_pokedex_data_297_page_0[];
extern u8 str_pokedex_data_297_page_1[];
extern u8 str_pokedex_data_298_page_0[];
extern u8 str_pokedex_data_298_page_1[];
extern u8 str_pokedex_data_299_page_0[];
extern u8 str_pokedex_data_299_page_1[];
extern u8 str_pokedex_data_300_page_0[];
extern u8 str_pokedex_data_300_page_1[];
extern u8 str_pokedex_data_301_page_0[];
extern u8 str_pokedex_data_301_page_1[];
extern u8 str_pokedex_data_302_page_0[];
extern u8 str_pokedex_data_302_page_1[];
extern u8 str_pokedex_data_303_page_0[];
extern u8 str_pokedex_data_303_page_1[];
extern u8 str_pokedex_data_304_page_0[];
extern u8 str_pokedex_data_304_page_1[];
extern u8 str_pokedex_data_305_page_0[];
extern u8 str_pokedex_data_305_page_1[];
extern u8 str_pokedex_data_306_page_0[];
extern u8 str_pokedex_data_306_page_1[];
extern u8 str_pokedex_data_307_page_0[];
extern u8 str_pokedex_data_307_page_1[];
extern u8 str_pokedex_data_308_page_0[];
extern u8 str_pokedex_data_308_page_1[];
extern u8 str_pokedex_data_309_page_0[];
extern u8 str_pokedex_data_309_page_1[];
extern u8 str_pokedex_data_310_page_0[];
extern u8 str_pokedex_data_310_page_1[];
extern u8 str_pokedex_data_311_page_0[];
extern u8 str_pokedex_data_311_page_1[];
extern u8 str_pokedex_data_312_page_0[];
extern u8 str_pokedex_data_312_page_1[];
extern u8 str_pokedex_data_313_page_0[];
extern u8 str_pokedex_data_313_page_1[];
extern u8 str_pokedex_data_314_page_0[];
extern u8 str_pokedex_data_314_page_1[];
extern u8 str_pokedex_data_315_page_0[];
extern u8 str_pokedex_data_315_page_1[];
extern u8 str_pokedex_data_316_page_0[];
extern u8 str_pokedex_data_316_page_1[];
extern u8 str_pokedex_data_317_page_0[];
extern u8 str_pokedex_data_317_page_1[];
extern u8 str_pokedex_data_318_page_0[];
extern u8 str_pokedex_data_318_page_1[];
extern u8 str_pokedex_data_319_page_0[];
extern u8 str_pokedex_data_319_page_1[];
extern u8 str_pokedex_data_320_page_0[];
extern u8 str_pokedex_data_320_page_1[];
extern u8 str_pokedex_data_321_page_0[];
extern u8 str_pokedex_data_321_page_1[];
extern u8 str_pokedex_data_322_page_0[];
extern u8 str_pokedex_data_322_page_1[];
extern u8 str_pokedex_data_323_page_0[];
extern u8 str_pokedex_data_323_page_1[];
extern u8 str_pokedex_data_324_page_0[];
extern u8 str_pokedex_data_324_page_1[];
extern u8 str_pokedex_data_325_page_0[];
extern u8 str_pokedex_data_325_page_1[];
extern u8 str_pokedex_data_326_page_0[];
extern u8 str_pokedex_data_326_page_1[];
extern u8 str_pokedex_data_327_page_0[];
extern u8 str_pokedex_data_327_page_1[];
extern u8 str_pokedex_data_328_page_0[];
extern u8 str_pokedex_data_328_page_1[];
extern u8 str_pokedex_data_329_page_0[];
extern u8 str_pokedex_data_329_page_1[];
extern u8 str_pokedex_data_330_page_0[];
extern u8 str_pokedex_data_330_page_1[];
extern u8 str_pokedex_data_331_page_0[];
extern u8 str_pokedex_data_331_page_1[];
extern u8 str_pokedex_data_332_page_0[];
extern u8 str_pokedex_data_332_page_1[];
extern u8 str_pokedex_data_333_page_0[];
extern u8 str_pokedex_data_333_page_1[];
extern u8 str_pokedex_data_334_page_0[];
extern u8 str_pokedex_data_334_page_1[];
extern u8 str_pokedex_data_335_page_0[];
extern u8 str_pokedex_data_335_page_1[];
extern u8 str_pokedex_data_336_page_0[];
extern u8 str_pokedex_data_336_page_1[];
extern u8 str_pokedex_data_337_page_0[];
extern u8 str_pokedex_data_337_page_1[];
extern u8 str_pokedex_data_338_page_0[];
extern u8 str_pokedex_data_338_page_1[];
extern u8 str_pokedex_data_339_page_0[];
extern u8 str_pokedex_data_339_page_1[];
extern u8 str_pokedex_data_340_page_0[];
extern u8 str_pokedex_data_340_page_1[];
extern u8 str_pokedex_data_341_page_0[];
extern u8 str_pokedex_data_341_page_1[];
extern u8 str_pokedex_data_342_page_0[];
extern u8 str_pokedex_data_342_page_1[];
extern u8 str_pokedex_data_343_page_0[];
extern u8 str_pokedex_data_343_page_1[];
extern u8 str_pokedex_data_344_page_0[];
extern u8 str_pokedex_data_344_page_1[];
extern u8 str_pokedex_data_345_page_0[];
extern u8 str_pokedex_data_345_page_1[];
extern u8 str_pokedex_data_346_page_0[];
extern u8 str_pokedex_data_346_page_1[];
extern u8 str_pokedex_data_347_page_0[];
extern u8 str_pokedex_data_347_page_1[];
extern u8 str_pokedex_data_348_page_0[];
extern u8 str_pokedex_data_348_page_1[];
extern u8 str_pokedex_data_349_page_0[];
extern u8 str_pokedex_data_349_page_1[];
extern u8 str_pokedex_data_350_page_0[];
extern u8 str_pokedex_data_350_page_1[];
extern u8 str_pokedex_data_351_page_0[];
extern u8 str_pokedex_data_351_page_1[];
extern u8 str_pokedex_data_352_page_0[];
extern u8 str_pokedex_data_352_page_1[];
extern u8 str_pokedex_data_353_page_0[];
extern u8 str_pokedex_data_353_page_1[];
extern u8 str_pokedex_data_354_page_0[];
extern u8 str_pokedex_data_354_page_1[];
extern u8 str_pokedex_data_355_page_0[];
extern u8 str_pokedex_data_355_page_1[];
extern u8 str_pokedex_data_356_page_0[];
extern u8 str_pokedex_data_356_page_1[];
extern u8 str_pokedex_data_357_page_0[];
extern u8 str_pokedex_data_357_page_1[];
extern u8 str_pokedex_data_358_page_0[];
extern u8 str_pokedex_data_358_page_1[];
extern u8 str_pokedex_data_359_page_0[];
extern u8 str_pokedex_data_359_page_1[];
extern u8 str_pokedex_data_360_page_0[];
extern u8 str_pokedex_data_360_page_1[];
extern u8 str_pokedex_data_361_page_0[];
extern u8 str_pokedex_data_361_page_1[];
extern u8 str_pokedex_data_362_page_0[];
extern u8 str_pokedex_data_362_page_1[];
extern u8 str_pokedex_data_363_page_0[];
extern u8 str_pokedex_data_363_page_1[];
extern u8 str_pokedex_data_364_page_0[];
extern u8 str_pokedex_data_364_page_1[];
extern u8 str_pokedex_data_365_page_0[];
extern u8 str_pokedex_data_365_page_1[];
extern u8 str_pokedex_data_366_page_0[];
extern u8 str_pokedex_data_366_page_1[];
extern u8 str_pokedex_data_367_page_0[];
extern u8 str_pokedex_data_367_page_1[];
extern u8 str_pokedex_data_368_page_0[];
extern u8 str_pokedex_data_368_page_1[];
extern u8 str_pokedex_data_369_page_0[];
extern u8 str_pokedex_data_369_page_1[];
extern u8 str_pokedex_data_370_page_0[];
extern u8 str_pokedex_data_370_page_1[];
extern u8 str_pokedex_data_371_page_0[];
extern u8 str_pokedex_data_371_page_1[];
extern u8 str_pokedex_data_372_page_0[];
extern u8 str_pokedex_data_372_page_1[];
extern u8 str_pokedex_data_373_page_0[];
extern u8 str_pokedex_data_373_page_1[];
extern u8 str_pokedex_data_374_page_0[];
extern u8 str_pokedex_data_374_page_1[];
extern u8 str_pokedex_data_375_page_0[];
extern u8 str_pokedex_data_375_page_1[];
extern u8 str_pokedex_data_376_page_0[];
extern u8 str_pokedex_data_376_page_1[];
extern u8 str_pokedex_data_377_page_0[];
extern u8 str_pokedex_data_377_page_1[];
extern u8 str_pokedex_data_378_page_0[];
extern u8 str_pokedex_data_378_page_1[];
extern u8 str_pokedex_data_379_page_0[];
extern u8 str_pokedex_data_379_page_1[];
extern u8 str_pokedex_data_380_page_0[];
extern u8 str_pokedex_data_380_page_1[];
extern u8 str_pokedex_data_381_page_0[];
extern u8 str_pokedex_data_381_page_1[];
extern u8 str_pokedex_data_382_page_0[];
extern u8 str_pokedex_data_382_page_1[];
extern u8 str_pokedex_data_383_page_0[];
extern u8 str_pokedex_data_383_page_1[];
extern u8 str_pokedex_data_384_page_0[];
extern u8 str_pokedex_data_384_page_1[];
extern u8 str_pokedex_data_385_page_0[];
extern u8 str_pokedex_data_385_page_1[];
extern u8 str_pokedex_data_386_page_0[];
extern u8 str_pokedex_data_386_page_1[];



#ifdef	__cplusplus
}
#endif

#endif	/* POKEDEX_H */

