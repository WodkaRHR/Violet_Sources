#ifndef H_ITEM
#define H_ITEM

#include "stdbool.h"

#define ITEM_NONE 0
#define ITEM_MEISTERBALL 0x1
#define ITEM_HYPERBALL 0x2
#define ITEM_SUPERBALL 0x3
#define ITEM_POKEBALL 0x4
#define ITEM_SAFARIBALL 0x5
#define ITEM_NETZBALL 0x6
#define ITEM_TAUCHBALL 0x7
#define ITEM_NESTBALL 0x8
#define ITEM_WIEDERBALL 0x9
#define ITEM_TIMERBALL 0xa
#define ITEM_LUXUSBALL 0xb
#define ITEM_PREMIERBALL 0xc
#define ITEM_TRANK 0xd
#define ITEM_GEGENGIFT 0xe
#define ITEM_FEUERHEILER 0xf
#define ITEM_EISHEILER 0x10
#define ITEM_AUFWECKER 0x11
#define ITEM_PARA_HEILER 0x12
#define ITEM_TOP_GENESUNG 0x13
#define ITEM_TOP_TRANK 0x14
#define ITEM_HYPERTRANK 0x15
#define ITEM_SUPERTRANK 0x16
#define ITEM_HYPERHEILER 0x17
#define ITEM_BELEBER 0x18
#define ITEM_TOP_BELEBER 0x19
#define ITEM_TAFELWASSER 0x1a
#define ITEM_SPRUDEL 0x1b
#define ITEM_LIMONADE 0x1c
#define ITEM_KUHMUH_MILCH 0x1d
#define ITEM_ENERGIESTAUB 0x1e
#define ITEM_KRAFTWURZEL 0x1f
#define ITEM_HEILPUDER 0x20
#define ITEM_VITALKRAUT 0x21
#define ITEM_AETHER 0x22
#define ITEM_TOP_AETHER 0x23
#define ITEM_ELIXIER 0x24
#define ITEM_TOP_ELIXIER 0x25
#define ITEM_LAVAKEKS 0x26
#define ITEM_BLAUE_FLOETE 0x27
#define ITEM_GELBE_FLOETE 0x28
#define ITEM_ROTE_FLOETE 0x29
#define ITEM_SCHW_FLOETE 0x2a
#define ITEM_WEISSE_FLOETE 0x2b
#define ITEM_BEERENSAFT 0x2c
#define ITEM_ZAUBERASCHE 0x2d
#define ITEM_KUESTENSALZ 0x2e
#define ITEM_KUESTENSCHALE 0x2f
#define ITEM_PURPURSTUECK 0x30
#define ITEM_INDIGOSTUECK 0x31
#define ITEM_GELBSTUECK 0x32
#define ITEM_GRUENSTUECK 0x33
#define ITEM_MAGMAISIERER 0x34
#define ITEM_STROMISIERER 0x35
#define ITEM_SCHOENSCHUPPE 0x36
#define ITEM_DUBIOSDISK 0x37
#define ITEM_DUESTERUMHANG 0x38
#define ITEM_SCHUETZER 0x39
#define ITEM_LEBEN_ORB 0x3a
#define ITEM_EVOLITH 0x3b
#define ITEM_ITEM_3C 0x3c
#define ITEM_ITEM_3D 0x3d
#define ITEM_ITEM_3E 0x3e
#define ITEM_KP_PLUS 0x3f
#define ITEM_PROTEIN 0x40
#define ITEM_EISEN 0x41
#define ITEM_CARBON 0x42
#define ITEM_KALZIUM 0x43
#define ITEM_SONDERBONBON 0x44
#define ITEM_AP_PLUS 0x45
#define ITEM_ZINK 0x46
#define ITEM_AP_TOP 0x47
#define ITEM_ITEM_48 0x48
#define ITEM_MEGABLOCK 0x49
#define ITEM_ANGRIFFPLUS 0x4a
#define ITEM_X_ANGRIFF 0x4b
#define ITEM_X_ABWEHR 0x4c
#define ITEM_X_TEMPO 0x4d
#define ITEM_X_TREFFER 0x4e
#define ITEM_X_SPEZIAL 0x4f
#define ITEM_POKEPUPPE 0x50
#define ITEM_ENECO_RUTE 0x51
#define ITEM_ITEM_52 0x52
#define ITEM_SUPERSCHUTZ 0x53
#define ITEM_TOP_SCHUTZ 0x54
#define ITEM_FLUCHTSEIL 0x55
#define ITEM_SCHUTZ 0x56
#define ITEM_ITEM_57 0x57
#define ITEM_ITEM_58 0x58
#define ITEM_ITEM_59 0x59
#define ITEM_ITEM_5A 0x5a
#define ITEM_ITEM_5B 0x5b
#define ITEM_ITEM_5C 0x5c
#define ITEM_SONNENSTEIN 0x5d
#define ITEM_MONDSTEIN 0x5e
#define ITEM_FEUERSTEIN 0x5f
#define ITEM_DONNERSTEIN 0x60
#define ITEM_WASSERSTEIN 0x61
#define ITEM_BLATTSTEIN 0x62
#define ITEM_LINKKABEL 0x63
#define ITEM_FINSTERSTEIN 0x64
#define ITEM_LEUCHTSTEIN 0x65
#define ITEM_FUNKELSTEIN 0x66
#define ITEM_MINIPILZ 0x67
#define ITEM_RIESENPILZ 0x68
#define ITEM_SPV_ORB_N 0x69
#define ITEM_PERLE 0x6a
#define ITEM_RIESENPERLE 0x6b
#define ITEM_STERNENSTAUB 0x6c
#define ITEM_STERNENSTUECK 0x6d
#define ITEM_NUGGET 0x6e
#define ITEM_HERZSCHUPPE 0x6f
#define ITEM_ANGR_ORB_P 0x70
#define ITEM_ANGR_ORB_N 0x71
#define ITEM_VERT_ORB_P 0x72
#define ITEM_VERT_ORB_N 0x73
#define ITEM_INIT_ORB_P 0x74
#define ITEM_INIT_ORB_N 0x75
#define ITEM_SPA_ORB_P 0x76
#define ITEM_SPA_ORB_N 0x77
#define ITEM_SPV_ORB_P 0x78
#define ITEM_79 0x79
#define ITEM_HAFENBRIEF 0x7a
#define ITEM_GLITZERBRIEF 0x7b
#define ITEM_EILBRIEF 0x7c
#define ITEM_WALDBRIEF 0x7d
#define ITEM_WELLENBRIEF 0x7e
#define ITEM_PERLENBRIEF 0x7f
#define ITEM_DUNKELBRIEF 0x80
#define ITEM_TROPENBRIEF 0x81
#define ITEM_TRAUMBRIEF 0x82
#define ITEM_EDELBRIEF 0x83
#define ITEM_RETROBRIEF 0x84
#define ITEM_AMRENABEERE 0x85
#define ITEM_MARONBEERE 0x86
#define ITEM_PIRSIFBEERE 0x87
#define ITEM_FRAGIABEERE 0x88
#define ITEM_WILBIRBEERE 0x89
#define ITEM_JONAGOBEERE 0x8a
#define ITEM_SINELBEERE 0x8b
#define ITEM_PERSIMBEERE 0x8c
#define ITEM_PRUNUSBEERE 0x8d
#define ITEM_TSITRUBEERE 0x8e
#define ITEM_GIEFEBEERE 0x8f
#define ITEM_WIKIBEERE 0x90
#define ITEM_MAGOBEERE 0x91
#define ITEM_GAUVEBEERE 0x92
#define ITEM_YAPABEERE 0x93
#define ITEM_HIMMIHBEERE 0x94
#define ITEM_MORBBEERE 0x95
#define ITEM_NANABBEERE 0x96
#define ITEM_NIRBEBEERE 0x97
#define ITEM_SANANABEERE 0x98
#define ITEM_GRANABEERE 0x99
#define ITEM_SETANGBEERE 0x9a
#define ITEM_QUALOTBEERE 0x9b
#define ITEM_HONMELBEERE 0x9c
#define ITEM_LABRUSBEERE 0x9d
#define ITEM_TAMOTBEERE 0x9e
#define ITEM_SAIMBEERE 0x9f
#define ITEM_MAGOSTBEERE 0xa0
#define ITEM_RABUTABEERE 0xa1
#define ITEM_TRONZIBEERE 0xa2
#define ITEM_KIWANBEERE 0xa3
#define ITEM_PALLMBEERE 0xa4
#define ITEM_WASMELBEERE 0xa5
#define ITEM_DURINBEERE 0xa6
#define ITEM_MYRTILBEERE 0xa7
#define ITEM_LYDZIBEERE 0xa8
#define ITEM_LINGANBEERE 0xa9
#define ITEM_SALKABEERE 0xaa
#define ITEM_TAHAYBEERE 0xab
#define ITEM_APIKOBEERE 0xac
#define ITEM_LANSATBEERE 0xad
#define ITEM_KRAMBOBEERE 0xae
#define ITEM_ENIGMABEERE 0xaf
#define ITEM_ITEM_B0 0xb0
#define ITEM_WAHLGLAS 0xb1
#define ITEM_WAHLSCHAL 0xb2
#define ITEM_BLENDPUDER 0xb3
#define ITEM_SCHLOHKRAUT 0xb4
#define ITEM_MACHOBAND 0xb5
#define ITEM_EP_TEILER 0xb6
#define ITEM_FLINKKLAUE 0xb7
#define ITEM_SANFTGLOCKE 0xb8
#define ITEM_MENTALKRAUT 0xb9
#define ITEM_WAHLBAND 0xba
#define ITEM_KING_STEIN 0xbb
#define ITEM_SILBERSTAUB 0xbc
#define ITEM_MUENZAMULETT 0xbd
#define ITEM_SCHUTZBAND 0xbe
#define ITEM_SEELENTAU 0xbf
#define ITEM_ABYSSZAHN 0xc0
#define ITEM_ABYSSPLATTE 0xc1
#define ITEM_RAUCHBALL 0xc2
#define ITEM_EWIGSTEIN 0xc3
#define ITEM_FOKUS_BAND 0xc4
#define ITEM_GLUECKS_EI 0xc5
#define ITEM_SCOPE_LINSE 0xc6
#define ITEM_METALLMANTEL 0xc7
#define ITEM_UEBERRESTE 0xc8
#define ITEM_DRACHENHAUT 0xc9
#define ITEM_KUGELBLITZ 0xca
#define ITEM_PUDERSAND 0xcb
#define ITEM_GRANITSTEIN 0xcc
#define ITEM_WUNDERSAAT 0xcd
#define ITEM_SCHATTENGLAS 0xce
#define ITEM_SCHWARZGURT 0xcf
#define ITEM_MAGNET 0xd0
#define ITEM_ZAUBERWASSER 0xd1
#define ITEM_HACKATTACK 0xd2
#define ITEM_GIFTSTICH 0xd3
#define ITEM_EWIGES_EIS 0xd4
#define ITEM_BANNSTICKER 0xd5
#define ITEM_KRUEMMLOEFFEL 0xd6
#define ITEM_HOLZKOHLE 0xd7
#define ITEM_DRACHENZAHN 0xd8
#define ITEM_SEIDENSCHAL 0xd9
#define ITEM_UP_GRADE 0xda
#define ITEM_SEEGESANG 0xdb
#define ITEM_SEERAUCH 0xdc
#define ITEM_LAXRAUCH 0xdd
#define ITEM_LUCKY_PUNCH 0xde
#define ITEM_METALLSTAUB 0xdf
#define ITEM_KAMPFKNOCHEN 0xe0
#define ITEM_LAUCHSTANGE 0xe1
#define ITEM_BISAFLORNIT 0xe2
#define ITEM_GLURAKNIT 0xe3
#define ITEM_TURTOKNIT 0xe4
#define ITEM_TERRASORNIT 0xe5
#define ITEM_ZERBERNIT 0xe6
#define ITEM_SKULLYDRANIT 0xe7
#define ITEM_AQUANANIT 0xe8
#define ITEM_FLAMARANIT 0xe9
#define ITEM_BLITZANIT 0xea
#define ITEM_AMPHAROSNIT 0xeb
#define ITEM_GENGARNIT 0xec
#define ITEM_BIBORNIT 0xed
#define ITEM_ITEM_EE 0xee
#define ITEM_ITEM_EF 0xef
#define ITEM_ITEM_F0 0xf0
#define ITEM_ITEM_F1 0xf1
#define ITEM_ITEM_F2 0xf2
#define ITEM_ITEM_F3 0xf3
#define ITEM_ITEM_F4 0xf4
#define ITEM_ITEM_F5 0xf5
#define ITEM_ITEM_F6 0xf6
#define ITEM_ITEM_F7 0xf7
#define ITEM_ITEM_F8 0xf8
#define ITEM_ITEM_F9 0xf9
#define ITEM_ITEM_FA 0xfa
#define ITEM_ITEM_FB 0xfb
#define ITEM_ITEM_FC 0xfc
#define ITEM_ITEM_FD 0xfd
#define ITEM_ROTER_SCHAL 0xfe
#define ITEM_BLAUER_SCHAL 0xff
#define ITEM_ROSA_SCHAL 0x100
#define ITEM_GRUENER_SCHAL 0x101
#define ITEM_GELBER_SCHAL 0x102
#define ITEM_EILRAD 0x103
#define ITEM_MUENZKORB 0x104
#define ITEM_DETEKTOR 0x105
#define ITEM_ANGEL 0x106
#define ITEM_PROFIANGEL 0x107
#define ITEM_SUPERANGEL 0x108
#define ITEM_BOOTSTICKET 0x109
#define ITEM_WETTB_KARTE 0x10a
#define ITEM_WOLKENHERZ 0x10b
#define ITEM_WAILMERKANNE 0x10c
#define ITEM_DEVON_WAREN 0x10d
#define ITEM_ASCHETASCHE 0x10e
#define ITEM_KELLEROEFFNER 0x10f
#define ITEM_KUNSTRAD 0x110
#define ITEM_BOX 0x111
#define ITEM_BRIEF 0x112
#define ITEM_AEON_TICKET 0x113
#define ITEM_SPIRITKERN 0x114
#define ITEM_BLAUE_KUGEL 0x115
#define ITEM_SCANNER 0x116
#define ITEM_WUESTENGLAS 0x117
#define ITEM_METEORIT 0x118
#define ITEM_K1_SCHLUESSEL 0x119
#define ITEM_K2_SCHLUESSEL 0x11a
#define ITEM_K4_SCHLUESSEL 0x11b
#define ITEM_K6_SCHLUESSEL 0x11c
#define ITEM_L_SCHLUESSEL 0x11d
#define ITEM_WURZELFOSSIL 0x11e
#define ITEM_KLAUENFOSSIL 0x11f
#define ITEM_DEVON_SCOPE 0x120
#define ITEM_TM01 0x121
#define ITEM_TM02 0x122
#define ITEM_TM03 0x123
#define ITEM_TM04 0x124
#define ITEM_TM05 0x125
#define ITEM_TM06 0x126
#define ITEM_TM07 0x127
#define ITEM_TM08 0x128
#define ITEM_TM09 0x129
#define ITEM_TM10 0x12a
#define ITEM_TM11 0x12b
#define ITEM_TM12 0x12c
#define ITEM_TM13 0x12d
#define ITEM_TM14 0x12e
#define ITEM_TM15 0x12f
#define ITEM_TM16 0x130
#define ITEM_TM17 0x131
#define ITEM_TM18 0x132
#define ITEM_TM19 0x133
#define ITEM_TM20 0x134
#define ITEM_TM21 0x135
#define ITEM_TM22 0x136
#define ITEM_TM23 0x137
#define ITEM_TM24 0x138
#define ITEM_TM25 0x139
#define ITEM_TM26 0x13a
#define ITEM_TM27 0x13b
#define ITEM_TM28 0x13c
#define ITEM_TM29 0x13d
#define ITEM_TM30 0x13e
#define ITEM_TM31 0x13f
#define ITEM_TM32 0x140
#define ITEM_TM33 0x141
#define ITEM_TM34 0x142
#define ITEM_TM35 0x143
#define ITEM_TM36 0x144
#define ITEM_TM37 0x145
#define ITEM_TM38 0x146
#define ITEM_TM39 0x147
#define ITEM_TM40 0x148
#define ITEM_TM41 0x149
#define ITEM_TM42 0x14a
#define ITEM_TM43 0x14b
#define ITEM_TM44 0x14c
#define ITEM_TM45 0x14d
#define ITEM_TM46 0x14e
#define ITEM_TM47 0x14f
#define ITEM_TM48 0x150
#define ITEM_TM49 0x151
#define ITEM_TM50 0x152
#define ITEM_VM01 0x153
#define ITEM_VM02 0x154
#define ITEM_VM03 0x155
#define ITEM_VM04 0x156
#define ITEM_VM05 0x157
#define ITEM_VM06 0x158
#define ITEM_VM07 0x159
#define ITEM_VM08 0x15a
#define ITEM_ITEM_15B 0x15b
#define ITEM_ITEM_15C 0x15c
#define ITEM_ZUGANGSKARTE 0x15d
#define ITEM_POKEFLOETE 0x15e
#define ITEM__OEFFNER 0x15f
#define ITEM_RAD_COUPON 0x160
#define ITEM_PKMCORDER 0x161
#define ITEM_ALTBERNSTEIN 0x162
#define ITEM_TUEROEFFNER 0x163
#define ITEM_LIFTOEFFNER 0x164
#define ITEM_HELIXFOSSIL 0x165
#define ITEM_DOMFOSSIL 0x166
#define ITEM_SILPH_SCOPE 0x167
#define ITEM_FAHRRAD 0x168
#define ITEM_KARTE 0x169
#define ITEM_KAMPFFAHNDER 0x16a
#define ITEM_RUHMESDATEI 0x16b
#define ITEM_VMTM_BOX 0x16c
#define ITEM_BEERENTUETE 0x16d
#define ITEM_LEHRKANAL 0x16e
#define ITEM_TRI_PASS 0x16f
#define ITEM_BUNT_PASS 0x170
#define ITEM_MEGA_AMULETT 0x171
#define ITEM_GEHEIMTICKET 0x172
#define ITEM_AURORATICKET 0x173
#define ITEM_PUDERDOESCHEN 0x174
#define ITEM_RUBIN 0x175
#define ITEM_SAPHIR 0x176

typedef struct item {
    u8 name[14];
    u16 index;
    u16 price;
    u8 holding_effect_id;
    u8 holding_effect_param;
    u8 *description_ptr;
    u16 field_18;
    u8 pocket;
    u8 type;
    void *field_usage;
    void *battle_usage_1;
    void *battle_usage_2;
    void *field_28;
} item;

typedef struct{
    u16 flag;
    u16 item;
}mart_item;

typedef struct{
    void (*end_callback)();
    u16 *item_list;
}mart_state;

item* items = (item*) 0x083DA518;
mart_state *mstate = (mart_state*)0x02039934;

void item_field_nature_stone(u8 self);

void item_nature_stone(u8 self, void (*failure_func)(u8));

bool script_cmd_x86_pokemart(void *script_state);


#endif