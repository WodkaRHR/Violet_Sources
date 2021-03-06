"""
This module holds additional pokemon and data updates
for the movesets.
"""

from . import pokemon_crawler as crawler
from . import move_tutor

# Defintions for additional moves on pokemon

# Lockschal
pokemon_lockschal = crawler.Pokemon(attacks_lvlup=[
        (1, "Pfund"),
        (1, "Härtner"),
        (7, "Rasierblatt"),
        (12, "Natur-Kraft"),
        (15, "Zornklinge"),
        (19, "Energiefokus"),
        (23, "Laubklinge"),
        (27, "Eisenabwehr"),
        (33, "Schwerttanz"),
        (35, "Schlitzer"),
        (39, "Klingensturm"),
        (44, "Wirbelwind")
    ],
    attacks_tm=[
        ("TM05", "Brüller"),
        ("TM06", "Toxin"),
        ("TM08", "Protzer"),
        ("TM09", "Kugelsaat"),
        ("TM10", "Kraftreserve"),
        ("TM11", "Sonnentag"),
        ("TM12", "Verhöhner"),
        ("TM16", "Lichtschild"),
        ("TM17", "Schutzschild"),
        ("TM19", "Gigasauger"),
        ("TM21", "Frustration"),
        ("TM22", "Solarstrahl"),
        ("TM27", "Rückkehr"),
        ("TM28", "Schaufler"),
        ("TM31", "Durchbruch"),
        ("TM32", "Doppelteam"),
        ("TM33", "Reflektor"),
        ("TM39", "Felsgrab"),
        ("TM40", "Aero-Ass"),
        ("TM42", "Fassade"),
        ("TM43", "Geheimpower"),
        ("TM44", "Erhohlung"),
        ("TM45", "Anziehung"),
        ("TM46", "Raub"),
        ("VM01", "Zerschneider"),
        ("VM04", "Stärke"),
        ("VM06", "Zertrümmerer")
    ],
    attacks_tutor=move_tutor.pkmn_get_move_tutor_compatibility(set([
        "Fokusstoß",
        "Gifthieb",
        "Kreuzschere",
        "Steinkante",
        "Lichtkanone",
        "Energieball",
        "Steinhagel",
        "Delegator"
    ]))
    )

pokemon_stichschal = crawler.Pokemon(attacks_lvlup=[
        (1, "Pfund"),
        (1, "Härtner"),
        (1, "Rasierblatt"),
        (1, "Natur-Kraft"),
        (1, "Zornklinge"),
        (14, "Energiefokus"),
        (19, "Geduld"),
        (24, "Laubklinge"),
        (29, "Eisenabwehr"),
        (34, "Schwerttanz"),
        (37, "Schlitzer"),
        (42, "Klingensturm"),
        (48, "Wirbelwind")
    ],
    attacks_tm=[
        ("TM05", "Brüller"),
        ("TM06", "Toxin"),
        ("TM08", "Protzer"),
        ("TM09", "Kugelsaat"),
        ("TM10", "Kraftreserve"),
        ("TM11", "Sonnentag"),
        ("TM12", "Verhöhner"),
        ("TM16", "Lichtschild"),
        ("TM17", "Schutzschild"),
        ("TM19", "Gigasauger"),
        ("TM21", "Frustration"),
        ("TM22", "Solarstrahl"),
        ("TM27", "Rückkehr"),
        ("TM28", "Schaufler"),
        ("TM31", "Durchbruch"),
        ("TM32", "Doppelteam"),
        ("TM33", "Reflektor"),
        ("TM39", "Felsgrab"),
        ("TM40", "Aero-Ass"),
        ("TM42", "Fassade"),
        ("TM43", "Geheimpower"),
        ("TM44", "Erhohlung"),
        ("TM45", "Anziehung"),
        ("TM46", "Raub"),
        ("VM01", "Zerschneider"),
        ("VM04", "Stärke"),
        ("VM06", "Zertrümmerer")
    ],
    attacks_tutor=move_tutor.pkmn_get_move_tutor_compatibility(set([
        "Fokusstoß",
        "Gifthieb",
        "Kreuzschere",
        "Steinkante",
        "Lichtkanone",
        "Energieball",
        "Steinhagel",
        "Delegator",
    ]))
    )

pokemon_stahlstich = crawler.Pokemon(attacks_lvlup=[
        (1, "Pfund"),
        (1, "Härtner"),
        (1, "Geduld"),
        (1, "Rasierblatt"),
        (1, "Natur-Kraft"),
        (1, "Zornklinge"),
        (14, "Energiefokus"),
        (24, "Laubklinge"),
        (29, "Eisenabwehr"),
        (34, "Schwerttanz"),
        (36, "Stahlstreich"),
        (40, "Schlitzer"),
        (43, "Klingensturm"),
        (49, "Nahkampf"),
        (55, "Wirbelwind"),
        (61, "Schallstich")
    ],
    attacks_tm=[
        ("TM01", "Power-Punch"),
        ("TM05", "Brüller"),
        ("TM06", "Toxin"),
        ("TM08", "Protzer"),
        ("TM09", "Kugelsaat"),
        ("TM10", "Kraftreserve"),
        ("TM11", "Sonnentag"),
        ("TM12", "Verhöhner"),
        ("TM15", "Hyperstrahl"),
        ("TM16", "Lichtschild"),
        ("TM17", "Schutzschild"),
        ("TM19", "Gigasauger"),
        ("TM21", "Frustration"),
        ("TM22", "Solarstrahl"),
        ("TM27", "Rückkehr"),
        ("TM28", "Schaufler"),
        ("TM31", "Durchbruch"),
        ("TM32", "Doppelteam"),
        ("TM33", "Reflektor"),
        ("TM39", "Felsgrab"),
        ("TM40", "Aero-Ass"),
        ("TM42", "Fassade"),
        ("TM43", "Geheimpower"),
        ("TM44", "Erhohlung"),
        ("TM45", "Anziehung"),
        ("TM46", "Raub"),
        ("VM01", "Zerschneider"),
        ("VM04", "Stärke"),
        ("VM06", "Zertrümmerer")
    ],
    attacks_tutor=move_tutor.pkmn_get_move_tutor_compatibility(set([
        "Fokusstoß",
        "Gifthieb",
        "Kreuzschere",
        "Steinkante",
        "Lichtkanone",
        "Energieball",
        "Steinhagel",
        "Delegator",
        "Flora-Statue"
    ]))
    )


pokemon_weluno = crawler.Pokemon(attacks_lvlup=[
    (1, "Kratzer"),
    (1, "Jauler"),
    (7, "Glut"),
    (11, "Biss"),
    (19, "Schnüffler"),
    (23, "Brüller"),
    (27, "Flammenrad"),
    (31, "Kopfnuss"),
    (34, "Bodycheck"),
    (38, "Knirscher"),
    (44, "Flammenblitz")
    ],
    attacks_tm=[
        ("TM04", "Gedankengut"),
        ("TM05", "Brüller"),
        ("TM06", "Toxin"),
        ("TM10", "Kraftreserve"),
        ("TM11", "Sonnentag"),
        ("TM12", "Verhöhner"),
        ("TM17", "Schutzschild"),
        ("TM21", "Frustration"),
        ("TM22", "Solarstrahl"),
        ("TM23", "Eisenschweif"),
        ("TM27", "Rückkehr"),
        ("TM28", "Schaufler"),
        ("TM29", "Psychokinese"),
        ("TM30", "Spukball"),
        ("TM32", "Doppelteam"),
        ("TM35", "Flammenwurf"),
        ("TM38", "Feuersturm"),
        ("TM39", "Felsgrab"),
        ("TM40", "Aero-Ass"),
        ("TM41", "Folterknecht"),
        ("TM42", "Fassade"),
        ("TM43", "Geheimpower"),
        ("TM44", "Erholung"),
        ("TM45", "Anziehung"),
        ("TM46", "Raub"),
        ("TM48", "Wertewechsel"),
        ("TM49", "Übernahme"),
        ("TM50", "Hitzekoller"),
        ("VM01", "Zerschneider"),
        ("VM04", "Stärke"),
        ("VM05", "Blitz"),
        ("VM06", "Zertrümmerer")
    ],
    attacks_tutor=move_tutor.pkmn_get_move_tutor_compatibility(set([
        "Fokusstoß",
        "Finsteraura",
        "Donnerzahn",
        "Feuerzahn",
        "Lichtkanone",
        "Delegator",
        "Steinhagel"
    ]))
)


pokemon_orthodos = crawler.Pokemon(attacks_lvlup=[
    (1, "Kratzer"),
    (1, "Jauler"),
    (7, "Glut"),
    (11, "Biss"),
    (16, "Feuerzahn"),
    (19, "Schnüffler"),
    (23, "Brüller"),
    (27, "Flammenrad"),
    (31, "Kopfnuss"),
    (34, "Bodycheck"),
    (39, "Knirscher"),
    (43, "Knuddler"),
    (48, "Finsteraura"),
    (53, "Flammenblitz")
    ],
    attacks_tm=[
        ("TM04", "Gedankengut"),
        ("TM05", "Brüller"),
        ("TM06", "Toxin"),
        ("TM10", "Kraftreserve"),
        ("TM11", "Sonnentag"),
        ("TM12", "Verhöhner"),
        ("TM17", "Schutzschild"),
        ("TM21", "Frustration"),
        ("TM22", "Solarstrahl"),
        ("TM23", "Eisenschweif"),
        ("TM27", "Rückkehr"),
        ("TM28", "Schaufler"),
        ("TM29", "Psychokinese"),
        ("TM30", "Spukball"),
        ("TM32", "Doppelteam"),
        ("TM35", "Flammenwurf"),
        ("TM38", "Feuersturm"),
        ("TM39", "Felsgrab"),
        ("TM40", "Aero-Ass"),
        ("TM41", "Folterknecht"),
        ("TM42", "Fassade"),
        ("TM43", "Geheimpower"),
        ("TM44", "Erholung"),
        ("TM45", "Anziehung"),
        ("TM46", "Raub"),
        ("TM48", "Wertewechsel"),
        ("TM49", "Übernahme"),
        ("TM50", "Hitzekoller"),
        ("VM01", "Zerschneider"),
        ("VM04", "Stärke"),
        ("VM05", "Blitz"),
        ("VM06", "Zertrümmerer")
    ],
    attacks_tutor=move_tutor.pkmn_get_move_tutor_compatibility(set([
        "Fokusstoß",
        "Finsteraura",
        "Donnerzahn",
        "Feuerzahn",
        "Lichtkanone",
        "Delegator",
        "Steinhagel"
    ]))
)


pokemon_zerbertres = crawler.Pokemon(attacks_lvlup=[
    (1, "Kratzer"),
    (1, "Jauler"),
    (1, "Donnerzahn"),
    (1, "Feuersturm"),
    (1, "Raub"),
    (7, "Glut"),
    (11, "Biss"),
    (16, "Feuerzahn"),
    (19, "Schnüffler"),
    (23, "Brüller"),
    (27, "Flammenrad"),
    (31, "Kopfnuss"),
    (34, "Bodycheck"),
    (36, "Zornfeuer"),
    (41, "Knirscher"),
    (45, "Knuddler"),
    (51, "Finsteraura"),
    (56, "Flammenblitz"),
    (60, "Supernova")
    ],
    attacks_tm=[
        ("TM04", "Gedankengut"),
        ("TM05", "Brüller"),
        ("TM06", "Toxin"),
        ("TM10", "Kraftreserve"),
        ("TM11", "Sonnentag"),
        ("TM12", "Verhöhner"),
        ("TM15", "Hyperstrahl"),
        ("TM17", "Schutzschild"),
        ("TM21", "Frustration"),
        ("TM22", "Solarstrahl"),
        ("TM23", "Eisenschweif"),
        ("TM26", "Erdbeben"),
        ("TM27", "Rückkehr"),
        ("TM28", "Schaufler"),
        ("TM29", "Psychokinese"),
        ("TM30", "Spukball"),
        ("TM32", "Doppelteam"),
        ("TM35", "Flammenwurf"),
        ("TM38", "Feuersturm"),
        ("TM39", "Felsgrab"),
        ("TM40", "Aero-Ass"),
        ("TM41", "Folterknecht"),
        ("TM42", "Fassade"),
        ("TM43", "Geheimpower"),
        ("TM44", "Erholung"),
        ("TM45", "Anziehung"),
        ("TM46", "Raub"),
        ("TM48", "Wertewechsel"),
        ("TM49", "Übernahme"),
        ("TM50", "Hitzekoller"),
        ("VM01", "Zerschneider"),
        ("VM04", "Stärke"),
        ("VM05", "Blitz"),
        ("VM06", "Zertrümmerer")
    ],
    attacks_tutor=move_tutor.pkmn_get_move_tutor_compatibility(set([
        "Fokusstoß",
        "Finsteraura",
        "Donnerzahn",
        "Feuerzahn",
        "Lichtkanone",
        "Steinhagel",
        "Delegator",
        "Lohekanonade"
    ]))
) 

pokemon_seekid = crawler.Pokemon(attacks_lvlup=[
    (1, "Pfund"),
    (1, "Silberblick"),
    (7, "Aquaknarre"),
    (11, "Ruckzuckhieb"),
    (17, "Konfustrahl"),
    (21, "Wickel"),
    (24, "Windhose"),
    (29, "Finte"),
    (31, "Feuerodem"),
    (35, "Hypnose"),
    (44, "Hydropumpe")
    ],
    attacks_tm=[
        ("TM04", "Gedankengut"),
        ("TM05", "Brüller"),
        ("TM06", "Toxin"),
        ("TM07", "Hagelsturm"),
        ("TM10", "Kraftreserve"),
        ("TM12", "Verhöhner"),
        ("TM13", "Eisstrahl"),
        ("TM14", "Blizzard"),
        ("TM16", "Lichtschild"),
        ("TM17", "Schutzschild"),
        ("TM18", "Regentanz"),
        ("TM20", "Bodyguard"),
        ("TM21", "Frustration"),
        ("TM27", "Rückkehr"),
        ("TM32", "Doppelteam"),
        ("TM33", "Reflektor"),
        ("TM39", "Felsgrab"),
        ("TM41", "Folterknecht"),
        ("TM42", "Fassade"),
        ("TM43", "Geheimpower"),
        ("TM44", "Erholung"),
        ("TM45", "Anziehung"),
        ("TM46", "Raub"),
        ("TM48", "Wertewechsel"),
        ("TM49", "Übernahme"),
        ("VM03", "Surfer"),
        ("VM04", "Stärke"),
        ("VM05", "Blitz"),
        ("VM06", "Zertrümmerer"),
        ("VM07", "Kaskade"),
        ("VM08", "Taucher")
    ],
    attacks_tutor=move_tutor.pkmn_get_move_tutor_compatibility(set([
        "Fokusstoß",
        "Finsteraura",
        "Lichtkanone",
        "Draco-Meteor",
        "Drachenpuls",
        "Delegator"
    ]))
)


pokemon_seeskull = crawler.Pokemon(attacks_lvlup=[
    (1, "Pfund"),
    (1, "Silberblick"),
    (7, "Aquaknarre"),
    (11, "Ruckzuckhieb"),
    (16, "Aquawelle"),
    (19, "Konfustrahl"),
    (23, "Wickel"),
    (26, "Windhose"),
    (31, "Finte"),
    (33, "Feuerodem"),
    (37, "Nassschweif"),
    (41, "Hypnose"),
    (47, "Drachenpuls"),
    (51, "Hydropumpe")
    ],
    attacks_tm=[
        ("TM04", "Gedankengut"),
        ("TM05", "Brüller"),
        ("TM06", "Toxin"),
        ("TM07", "Hagelsturm"),
        ("TM10", "Kraftreserve"),
        ("TM12", "Verhöhner"),
        ("TM13", "Eisstrahl"),
        ("TM14", "Blizzard"),
        ("TM16", "Lichtschild"),
        ("TM17", "Schutzschild"),
        ("TM18", "Regentanz"),
        ("TM20", "Bodyguard"),
        ("TM21", "Frustration"),
        ("TM23", "Eisenschweif"),
        ("TM27", "Rückkehr"),
        ("TM29", "Psychokinese"),
        ("TM30", "Spukball"),
        ("TM32", "Doppelteam"),
        ("TM33", "Reflektor"),
        ("TM39", "Felsgrab"),
        ("TM41", "Folterknecht"),
        ("TM42", "Fassade"),
        ("TM43", "Geheimpower"),
        ("TM44", "Erholung"),
        ("TM45", "Anziehung"),
        ("TM46", "Raub"),
        ("TM48", "Wertewechsel"),
        ("TM49", "Übernahme"),
        ("VM03", "Surfer"),
        ("VM04", "Stärke"),
        ("VM05", "Blitz"),
        ("VM06", "Zertrümmerer"),
        ("VM07", "Kaskade"),
        ("VM08", "Taucher")
    ],
    attacks_tutor=move_tutor.pkmn_get_move_tutor_compatibility(set([
        "Fokusstoß",
        "Finsteraura",
        "Lichtkanone",
        "Draco-Meteor",
        "Drachenpuls",
        "Delegator",
        "Aquahaubitze"
    ]))
)


pokemon_skullydra = crawler.Pokemon(attacks_lvlup=[
    (1, "Pfund"),
    (1, "Silberblick"),
    (1, "Drachentanz"),
    (1, "Genesung"),
    (7, "Aquaknarre"),
    (11, "Ruckzuckhieb"),
    (16, "Aquawelle"),
    (19, "Konfustrahl"),
    (23, "Wickel"),
    (26, "Windhose"),
    (31, "Finte"),
    (33, "Feuerodem"),
    (36, "Tsunami"),
    (41, "Drachenpuls"),
    (46, "Nassschweif"),
    (51, "Hypnose"),
    (55, "Hydropumpe"),
    (62, "Wasserspalt")
    ],
    attacks_tm=[
        ("TM04", "Gedankengut"),
        ("TM05", "Brüller"),
        ("TM06", "Toxin"),
        ("TM07", "Hagelsturm"),
        ("TM10", "Kraftreserve"),
        ("TM12", "Verhöhner"),
        ("TM13", "Eisstrahl"),
        ("TM14", "Blizzard"),
        ("TM15", "Hyperstrahl"),
        ("TM16", "Lichtschild"),
        ("TM17", "Schutzschild"),
        ("TM18", "Regentanz"),
        ("TM20", "Bodyguard"),
        ("TM21", "Frustration"),
        ("TM23", "Eisenschweif"),
        ("TM27", "Rückkehr"),
        ("TM29", "Psychokinese"),
        ("TM30", "Spukball"),
        ("TM32", "Doppelteam"),
        ("TM33", "Reflektor"),
        ("TM39", "Felsgrab"),
        ("TM41", "Folterknecht"),
        ("TM42", "Fassade"),
        ("TM43", "Geheimpower"),
        ("TM44", "Erholung"),
        ("TM45", "Anziehung"),
        ("TM46", "Raub"),
        ("TM48", "Wertewechsel"),
        ("TM49", "Übernahme"),
        ("VM03", "Surfer"),
        ("VM04", "Stärke"),
        ("VM05", "Blitz"),
        ("VM06", "Zertrümmerer"),
        ("VM07", "Kaskade"),
        ("VM08", "Taucher")
    ],
    attacks_tutor=move_tutor.pkmn_get_move_tutor_compatibility(set([
        "Fokusstoß",
        "Finsteraura",
        "Lichtkanone",
        "Draco-Meteor",
        "Drachenpuls",
        "Delegator",
        "Aquahaubitze"
    ]))
)

pokemon_altaria = crawler.Pokemon(attacks_lvlup=[
        (40, "Donnerblitz"),
        (60, "Himmelsfeger")
    ]
    )

pokemon_geowaz = crawler.Pokemon(attacks_lvlup=[
    (25, "Glut"),
    (35, "Heißstein"),
    (45, "Eruption")
    ],
    attacks_tm=[
        ("TM35", "Flammenwurf"),
        ("TM38", "Feuersturm"),
        ("TM50", "Hitzekoller")
    ])

pokemon_viptis = crawler.Pokemon(attacks_tutor=move_tutor.pkmn_get_move_tutor_compatibility(set(["Nassschweif"])))

# Local pokemon data pool
local_pkmn = {
    277 : pokemon_lockschal,
    278 : pokemon_stichschal,
    279 : pokemon_stahlstich,
    280 : pokemon_weluno,
    281 : pokemon_orthodos,
    282 : pokemon_zerbertres,
    283 : pokemon_seekid,
    284 : pokemon_seeskull,
    285 : pokemon_skullydra,
}

# Updates for each pokemon
updates = {
    0x4c : pokemon_geowaz,
    0x167 : pokemon_altaria,
    0x17b : pokemon_viptis
}