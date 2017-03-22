.include "pstring.s"

.global ability_names


.align 4
ability_names:

@Ability ABILITY_NONE
	.byte 0xae, 0xae, 0xae, 0xae, 0xae, 0xae, 0xae, 0xae, 0xff, 0x0, 0x0, 0x0, 0x0

@Ability DUFTNOTE
	.byte 0xbe, 0xe9, 0xda, 0xe8, 0xe2, 0xe3, 0xe8, 0xd9, 0xff, 0x0, 0x0, 0x0, 0x0

@Ability NIESEL
	.byte 0xc8, 0xdd, 0xd9, 0xe7, 0xd9, 0xe0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0

@Ability TEMPOSCHUB
	.byte 0xce, 0xd9, 0xe1, 0xe4, 0xe3, 0xe7, 0xd7, 0xdc, 0xe9, 0xd6, 0xff, 0x0, 0x0

@Ability KAMPFPANZER
	.byte 0xc5, 0xd5, 0xe1, 0xe4, 0xda, 0xe4, 0xd5, 0xe2, 0xee, 0xd9, 0xe6, 0xff, 0x0

@Ability ROBUSTHEIT
	.byte 0xcc, 0xe3, 0xd6, 0xe9, 0xe7, 0xe8, 0xdc, 0xd9, 0xdd, 0xe8, 0xff, 0x0, 0x0

@Ability FEUCHTIGKEIT
	.byte 0xc0, 0xd9, 0xe9, 0xd7, 0xdc, 0xe8, 0xdd, 0xdb, 0xdf, 0xd9, 0xdd, 0xe8, 0xff

@Ability FLEXIBILITAET
	.byte 0xc0, 0xe0, 0xd9, 0xec, 0xdd, 0xd6, 0xdd, 0xe0, 0xdd, 0xe8, 0xf4, 0xe8, 0xff

@Ability SANDSCHLEIER
	.byte 0xcd, 0xd5, 0xe2, 0xd8, 0xe7, 0xd7, 0xdc, 0xe0, 0xd9, 0xdd, 0xd9, 0xe6, 0xff

@Ability STATIK
	.byte 0xcd, 0xe8, 0xd5, 0xe8, 0xdd, 0xdf, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0

@Ability VOLTABSORBER
	.byte 0xd0, 0xe3, 0xe0, 0xe8, 0xd5, 0xd6, 0xe7, 0xe3, 0xe6, 0xd6, 0xd9, 0xe6, 0xff

@Ability H2O-ABSORBER
	.byte 0xc2, 0xa3, 0xc9, 0xae, 0xbb, 0xd6, 0xe7, 0xe3, 0xe6, 0xd6, 0xd9, 0xe6, 0xff

@Ability DOESIGKEIT
	.byte 0xbe, 0xf5, 0xe7, 0xdd, 0xdb, 0xdf, 0xd9, 0xdd, 0xe8, 0xff, 0x0, 0x0, 0x0

@Ability WOLKE_SIEBEN
	.byte 0xd1, 0xe3, 0xe0, 0xdf, 0xd9, 0x0, 0xcd, 0xdd, 0xd9, 0xd6, 0xd9, 0xe2, 0xff

@Ability FACETTENAUGE
	.byte 0xc0, 0xd5, 0xd7, 0xd9, 0xe8, 0xe8, 0xd9, 0xe2, 0xd5, 0xe9, 0xdb, 0xd9, 0xff

@Ability INSOMNIA
	.byte 0xc3, 0xe2, 0xe7, 0xe3, 0xe1, 0xe2, 0xdd, 0xd5, 0xff, 0x0, 0x0, 0x0, 0x0

@Ability FARBWECHSEL
	.byte 0xc0, 0xd5, 0xe6, 0xd6, 0xeb, 0xd9, 0xd7, 0xdc, 0xe7, 0xd9, 0xe0, 0xff, 0x0

@Ability IMMUNITAET
	.byte 0xc3, 0xe1, 0xe1, 0xe9, 0xe2, 0xdd, 0xe8, 0xf4, 0xe8, 0xff, 0x0, 0x0, 0x0

@Ability FEUERFAENGER
	.byte 0xc0, 0xd9, 0xe9, 0xd9, 0xe6, 0xda, 0xf4, 0xe2, 0xdb, 0xd9, 0xe6, 0xff, 0x0

@Ability PUDERABWEHR
	.byte 0xca, 0xe9, 0xd8, 0xd9, 0xe6, 0xd5, 0xd6, 0xeb, 0xd9, 0xdc, 0xe6, 0xff, 0x0

@Ability TEMPOMACHER
	.byte 0xce, 0xd9, 0xe1, 0xe4, 0xe3, 0xe1, 0xd5, 0xd7, 0xdc, 0xd9, 0xe6, 0xff, 0x0

@Ability SAUGNAPF
	.byte 0xcd, 0xd5, 0xe9, 0xdb, 0xe2, 0xd5, 0xe4, 0xda, 0xff, 0x0, 0x0, 0x0, 0x0

@Ability BEDROHER
	.byte 0xbc, 0xd9, 0xd8, 0xe6, 0xe3, 0xdc, 0xd9, 0xe6, 0xff, 0x0, 0x0, 0x0, 0x0

@Ability WEGSPERRE
	.byte 0xd1, 0xd9, 0xdb, 0xe7, 0xe4, 0xd9, 0xe6, 0xe6, 0xd9, 0xff, 0x0, 0x0, 0x0

@Ability RAUHAUT
	.byte 0xcc, 0xd5, 0xe9, 0xdc, 0xd5, 0xe9, 0xe8, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0

@Ability WUNDERWACHE
	.byte 0xd1, 0xe9, 0xe2, 0xd8, 0xd9, 0xe6, 0xeb, 0xd5, 0xd7, 0xdc, 0xd9, 0xff, 0x0

@Ability SCHWEBE
	.byte 0xcd, 0xd7, 0xdc, 0xeb, 0xd9, 0xd6, 0xd9, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0

@Ability SPORENWIRT
	.byte 0xcd, 0xe4, 0xe3, 0xe6, 0xd9, 0xe2, 0xeb, 0xdd, 0xe6, 0xe8, 0xff, 0x0, 0x0

@Ability SYNCHRO
	.byte 0xcd, 0xed, 0xe2, 0xd7, 0xdc, 0xe6, 0xe3, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0

@Ability NEUTRALTORSO
	.byte 0xc8, 0xd9, 0xe9, 0xe8, 0xe6, 0xd5, 0xe0, 0xe8, 0xe3, 0xe6, 0xe7, 0xe3, 0xff

@Ability INNERE_KRAFT
	.byte 0xc3, 0xe2, 0xe2, 0xd9, 0xe6, 0xd9, 0x0, 0xc5, 0xe6, 0xd5, 0xda, 0xe8, 0xff

@Ability BLITZFAENGER
	.byte 0xbc, 0xe0, 0xdd, 0xe8, 0xee, 0xda, 0xf4, 0xe2, 0xdb, 0xd9, 0xe6, 0xff, 0x0

@Ability EDELMUT
	.byte 0xbf, 0xd8, 0xd9, 0xe0, 0xe1, 0xe9, 0xe8, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0

@Ability WASSERTEMPO
	.byte 0xd1, 0xd5, 0xe7, 0xe7, 0xd9, 0xe6, 0xe8, 0xd9, 0xe1, 0xe4, 0xe3, 0xff, 0x0

@Ability CHLOROPHYLL
	.byte 0xbd, 0xdc, 0xe0, 0xe3, 0xe6, 0xe3, 0xe4, 0xdc, 0xed, 0xe0, 0xe0, 0xff, 0x0

@Ability ERLEUCHTUNG
	.byte 0xbf, 0xe6, 0xe0, 0xd9, 0xe9, 0xd7, 0xdc, 0xe8, 0xe9, 0xe2, 0xdb, 0xff, 0x0

@Ability FAEHRTE
	.byte 0xc0, 0xf4, 0xdc, 0xe6, 0xe8, 0xd9, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0

@Ability KRAFTKOLOSS
	.byte 0xc5, 0xe6, 0xd5, 0xda, 0xe8, 0xdf, 0xe3, 0xe0, 0xe3, 0xe7, 0xe7, 0xff, 0x0

@Ability GIFTDORN
	.byte 0xc1, 0xdd, 0xda, 0xe8, 0xd8, 0xe3, 0xe6, 0xe2, 0xff, 0x0, 0x0, 0x0, 0x0

@Ability KONZENTRATOR
	.byte 0xc5, 0xe3, 0xe2, 0xee, 0xd9, 0xe2, 0xe8, 0xe6, 0xd5, 0xe8, 0xe3, 0xe6, 0xff

@Ability MAGMAPANZER
	.byte 0xc7, 0xd5, 0xdb, 0xe1, 0xd5, 0xe4, 0xd5, 0xe2, 0xee, 0xd9, 0xe6, 0xff, 0x0

@Ability AQUAHUELLE
	.byte 0xbb, 0xe5, 0xe9, 0xd5, 0xdc, 0xf6, 0xe0, 0xe0, 0xd9, 0xff, 0x0, 0x0, 0x0

@Ability MAGNETFALLE
	.byte 0xc7, 0xd5, 0xdb, 0xe2, 0xd9, 0xe8, 0xda, 0xd5, 0xe0, 0xe0, 0xd9, 0xff, 0x0

@Ability LAERMSCHUTZ
	.byte 0xc6, 0xf4, 0xe6, 0xe1, 0xe7, 0xd7, 0xdc, 0xe9, 0xe8, 0xee, 0xff, 0x0, 0x0

@Ability REGENGENUSS
	.byte 0xcc, 0xd9, 0xdb, 0xd9, 0xe2, 0xdb, 0xd9, 0xe2, 0xe9, 0xe7, 0xe7, 0xff, 0x0

@Ability SANDSTURM
	.byte 0xcd, 0xd5, 0xe2, 0xd8, 0xe7, 0xe8, 0xe9, 0xe6, 0xe1, 0xff, 0x0, 0x0, 0x0

@Ability ERZWINGER
	.byte 0xbf, 0xe6, 0xee, 0xeb, 0xdd, 0xe2, 0xdb, 0xd9, 0xe6, 0xff, 0x0, 0x0, 0x0

@Ability SPECKSCHICHT
	.byte 0xcd, 0xe4, 0xd9, 0xd7, 0xdf, 0xe7, 0xd7, 0xdc, 0xdd, 0xd7, 0xdc, 0xe8, 0xff

@Ability FRUEHWECKER
	.byte 0xc0, 0xe6, 0xf6, 0xdc, 0xeb, 0xd9, 0xd7, 0xdf, 0xd9, 0xe6, 0xff, 0x0, 0x0

@Ability FLAMMKOERPER
	.byte 0xc0, 0xe0, 0xd5, 0xe1, 0xe1, 0xdf, 0xf5, 0xe6, 0xe4, 0xd9, 0xe6, 0xff, 0x0

@Ability ANGSTHASE
	.byte 0xbb, 0xe2, 0xdb, 0xe7, 0xe8, 0xdc, 0xd5, 0xe7, 0xd9, 0xff, 0x0, 0x0, 0x0

@Ability ADLERAUGE
	.byte 0xbb, 0xd8, 0xe0, 0xd9, 0xe6, 0xd5, 0xe9, 0xdb, 0xd9, 0xff, 0x0, 0x0, 0x0

@Ability SCHERENMACHT
	.byte 0xcd, 0xd7, 0xdc, 0xd9, 0xe6, 0xd9, 0xe2, 0xe1, 0xd5, 0xd7, 0xdc, 0xe8, 0xff

@Ability MITNAHME
	.byte 0xc7, 0xdd, 0xe8, 0xe2, 0xd5, 0xdc, 0xe1, 0xd9, 0xff, 0x0, 0x0, 0x0, 0x0

@Ability SCHNARCHNASE
	.byte 0xcd, 0xd7, 0xdc, 0xe2, 0xd5, 0xe6, 0xd7, 0xdc, 0xe2, 0xd5, 0xe7, 0xd9, 0xff

@Ability UEBEREIFER
	.byte 0xf3, 0xd6, 0xd9, 0xe6, 0xd9, 0xdd, 0xda, 0xd9, 0xe6, 0xff, 0x0, 0x0, 0x0

@Ability CHARMEBOLZEN
	.byte 0xbd, 0xdc, 0xd5, 0xe6, 0xe1, 0xd9, 0xd6, 0xe3, 0xe0, 0xee, 0xd9, 0xe2, 0xff

@Ability PLUS
	.byte 0xca, 0xe0, 0xe9, 0xe7, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0

@Ability MINUS
	.byte 0xc7, 0xdd, 0xe2, 0xe9, 0xe7, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0

@Ability PROGNOSE
	.byte 0xca, 0xe6, 0xe3, 0xdb, 0xe2, 0xe3, 0xe7, 0xd9, 0xff, 0x0, 0x0, 0x0, 0x0

@Ability WERTEHALTER
	.byte 0xd1, 0xd9, 0xe6, 0xe8, 0xd9, 0xdc, 0xd5, 0xe0, 0xe8, 0xd9, 0xe6, 0xff, 0x0

@Ability EXPIDERMIS
	.byte 0xbf, 0xec, 0xe4, 0xdd, 0xd8, 0xd9, 0xe6, 0xe1, 0xdd, 0xe7, 0xff, 0x0, 0x0

@Ability ADRENALIN
	.byte 0xbb, 0xd8, 0xe6, 0xd9, 0xe2, 0xd5, 0xe0, 0xdd, 0xe2, 0xff, 0x0, 0x0, 0x0

@Ability NOTSCHUTZ
	.byte 0xc8, 0xe3, 0xe8, 0xe7, 0xd7, 0xdc, 0xe9, 0xe8, 0xee, 0xff, 0x0, 0x0, 0x0

@Ability KLOAKENSOSSE
	.byte 0xc5, 0xe0, 0xe3, 0xd5, 0xdf, 0xd9, 0xe2, 0xe7, 0xe3, 0xe7, 0xe7, 0xd9, 0xff

@Ability NOTDUENGER
	.byte 0xc8, 0xe3, 0xe8, 0xd8, 0xf6, 0xe2, 0xdb, 0xd9, 0xe6, 0xff, 0x0, 0x0, 0x0

@Ability GROSSBRAND
	.byte 0xc1, 0xe6, 0xe3, 0xe7, 0xe7, 0xd6, 0xe6, 0xd5, 0xe2, 0xd8, 0xff, 0x0, 0x0

@Ability STURZBACH
	.byte 0xcd, 0xe8, 0xe9, 0xe6, 0xee, 0xd6, 0xd5, 0xd7, 0xdc, 0xff, 0x0, 0x0, 0x0

@Ability HEXAPLAGA
	.byte 0xc2, 0xd9, 0xec, 0xd5, 0xe4, 0xe0, 0xd5, 0xdb, 0xd5, 0xff, 0x0, 0x0, 0x0

@Ability STEINHAUPT
	.byte 0xcd, 0xe8, 0xd9, 0xdd, 0xe2, 0xdc, 0xd5, 0xe9, 0xe4, 0xe8, 0xff, 0x0, 0x0

@Ability DUERRE
	.byte 0xbe, 0xf6, 0xe6, 0xe6, 0xd9, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0

@Ability AUSWEGSLOS
	.byte 0xbb, 0xe9, 0xe7, 0xeb, 0xd9, 0xdb, 0xe7, 0xe0, 0xe3, 0xe7, 0xff, 0x0, 0x0

@Ability MUNTERKEIT
	.byte 0xc7, 0xe9, 0xe2, 0xe8, 0xd9, 0xe6, 0xdf, 0xd9, 0xdd, 0xe8, 0xff, 0x0, 0x0

@Ability PULVERRAUCH
	.byte 0xca, 0xe9, 0xe0, 0xea, 0xd9, 0xe6, 0xe6, 0xd5, 0xe9, 0xd7, 0xdc, 0xff, 0x0

@Ability MENTALKRAFT
	.byte 0xc7, 0xd9, 0xe2, 0xe8, 0xd5, 0xe0, 0xdf, 0xe6, 0xd5, 0xda, 0xe8, 0xff, 0x0

@Ability PANZERHAUT
	.byte 0xca, 0xd5, 0xe2, 0xee, 0xd9, 0xe6, 0xdc, 0xd5, 0xe9, 0xe8, 0xff, 0x0, 0x0

@Ability KAKOPHONY
	.byte 0xc5, 0xd5, 0xdf, 0xe3, 0xe4, 0xdc, 0xe3, 0xe2, 0xed, 0xff, 0x0, 0x0, 0x0

@Ability KLIMASCHUTZ
	.byte 0xc5, 0xe0, 0xdd, 0xe1, 0xd5, 0xe7, 0xd7, 0xdc, 0xe9, 0xe8, 0xee, 0xff, 0x0

@Ability FROSTSCHICHT
	.byte 0xc0, 0xe6, 0xe3, 0xe7, 0xe8, 0xe7, 0xd7, 0xdc, 0xdd, 0xd7, 0xdc, 0xe8, 0xff

@Ability ZENITHAUT
	.byte 0xd4, 0xd9, 0xe2, 0xdd, 0xe8, 0xdc, 0xd5, 0xe9, 0xe8, 0xff, 0xae, 0xae, 0xff

@Ability DONNERAURA
	.byte 0xbe, 0xe3, 0xe2, 0xe2, 0xd9, 0xe6, 0xd5, 0xe9, 0xe6, 0xd5, 0xff, 0xae, 0xff

@Ability MULTISCHUPPE
	.byte 0xc7, 0xe9, 0xe0, 0xe8, 0xdd, 0xe7, 0xd7, 0xdc, 0xe9, 0xe4, 0xe4, 0xd9, 0xff

@Ability KAEMPFERHERZ
	.byte 0xc5, 0xf4, 0xe1, 0xe4, 0xda, 0xd9, 0xe6, 0xdc, 0xd9, 0xe6, 0xee, 0xff, 0xff

@Ability TECHNIKER
	.byte 0xce, 0xd9, 0xd7, 0xdc, 0xe2, 0xdd, 0xdf, 0xd9, 0xe6, 0xff, 0xae, 0xae, 0xff

@Ability SOLARKRAFT
	.byte 0xcd, 0xe3, 0xe0, 0xd5, 0xe6, 0xdf, 0xe6, 0xd5, 0xda, 0xe8, 0xff, 0xae, 0xff

@Ability REGENMUT
	.byte 0xcc, 0xd9, 0xdb, 0xd9, 0xe2, 0xe1, 0xe9, 0xe8, 0xff, 0xae, 0xae, 0xae, 0xff

@Ability KAELTEWAHN
	.byte 0xc5, 0xf4, 0xe0, 0xe8, 0xd9, 0xeb, 0xd5, 0xdc, 0xe2, 0xff, 0xae, 0xae, 0xff

@Ability SANDHERZ
	.byte 0xcd, 0xd5, 0xe2, 0xd8, 0xdc, 0xd9, 0xe6, 0xee, 0xff, 0xae, 0xae, 0xae, 0xff

@Ability WANDLUNGSK.
	.byte 0xd1, 0xd5, 0xe2, 0xd8, 0xe0, 0xe9, 0xe2, 0xdb, 0xe7, 0xdf, 0xad, 0xff, 0xcd

@Ability TOLLWUT
	.byte 0xce, 0xe3, 0xe0, 0xe0, 0xeb, 0xe9, 0xe8, 0xff, 0xce, 0xff, 0xc2, 0xff, 0xcd

@Ability ZEITSPIEL
	.byte 0xd4, 0xd9, 0xdd, 0xe8, 0xe7, 0xe4, 0xdd, 0xd9, 0xe0, 0xff, 0xae, 0xae, 0xff

@Ability STROLCH
	.byte 0xcd, 0xe8, 0xe6, 0xe3, 0xe0, 0xd7, 0xdc, 0xff, 0xae, 0xae, 0xae, 0xae, 0xff

@Ability ORKANSCHW.
	.byte 0xc9, 0xe6, 0xdf, 0xd5, 0xe2, 0xe7, 0xd7, 0xdc, 0xeb, 0xad, 0xff, 0xc1, 0xbf

@Ability DUNKLE_MAGIE
	.byte 0xbe, 0xe9, 0xe2, 0xdf, 0xe0, 0xd9, 0x0, 0xc7, 0xd5, 0xdb, 0xdd, 0xd9, 0xff

@Ability LERNFAEHIG
	.byte 0xc6, 0xd9, 0xe6, 0xe2, 0xda, 0xf4, 0xdc, 0xdd, 0xdb, 0xff, 0xae, 0xae, 0xff

@Ability HAGELALARM
	.byte 0xc2, 0xd5, 0xdb, 0xd9, 0xe0, 0xd5, 0xe0, 0xd5, 0xe6, 0xe1, 0xff, 0xae, 0xff

@Ability HOCHMUT
	.byte 0xc2, 0xe3, 0xd7, 0xdc, 0xe1, 0xe9, 0xe8, 0xff, 0xae, 0xae, 0xae, 0xae, 0xff

@Ability AP-SPARER
	.byte 0xbb, 0xe4, 0xae, 0xcd, 0xe4, 0xd5, 0xe6, 0xd9, 0xe6, 0xff, 0xae, 0xae, 0xff

@Ability TAKTIKWECHS.
	.byte 0xce, 0xd5, 0xdf, 0xe8, 0xdd, 0xdf, 0xeb, 0xd9, 0xd7, 0xdc, 0xe7, 0xad, 0xff

@Ability LUZID
	.byte 0xc6, 0xe9, 0xee, 0xdd, 0xd8, 0xff, 0xae, 0xae, 0xae, 0xae, 0xae, 0xae, 0xff

@Ability UNGEBROCHEN
	.byte 0xcf, 0xe2, 0xdb, 0xd9, 0xd6, 0xe6, 0xe3, 0xd7, 0xdc, 0xd9, 0xe2, 0xff, 0xff

@Ability LEBENSRAEUBER
	.byte 0xc6, 0xd9, 0xd6, 0xd9, 0xe2, 0xe7, 0xe6, 0xf4, 0xe9, 0xd6, 0xd9, 0xe6, 0xff

@Ability FILTER
	.byte 0xc0, 0xdd, 0xe0, 0xe8, 0xd9, 0xe6, 0xff, 0xae, 0xae, 0xae, 0xae, 0xae, 0xff

@Ability FELSENKERN
	.byte 0xc0, 0xd9, 0xe0, 0xe7, 0xd9, 0xe2, 0xdf, 0xd9, 0xe6, 0xe2, 0xff, 0xae, 0xff

@Ability BARRIERE
	.byte 0xbc, 0xd5, 0xe6, 0xe6, 0xdd, 0xd9, 0xe6, 0xd9, 0xff, 0xae, 0xae, 0xae, 0xff

@Ability ANPASSUNG
	.byte 0xbb, 0xe2, 0xe4, 0xd5, 0xe7, 0xe7, 0xe9, 0xe2, 0xdb, 0xff, 0xae, 0xae, 0xff

@Ability AUFWERTUNG
	.byte 0xbb, 0xe9, 0xda, 0xeb, 0xd9, 0xe6, 0xe8, 0xe9, 0xe2, 0xdb, 0xff, 0xae, 0xff

@Ability ALLROUNDER
	.byte 0xbb, 0xe0, 0xe0, 0xe6, 0xe3, 0xe9, 0xe2, 0xd8, 0xd9, 0xe6, 0xff, 0xae, 0xff

@Ability HITZEWAHN
	.byte 0xc2, 0xdd, 0xe8, 0xee, 0xd9, 0xeb, 0xd5, 0xdc, 0xe2, 0xff, 0xae, 0xae, 0xff

@Ability GIFTWAHN
	.byte 0xc1, 0xdd, 0xda, 0xe8, 0xeb, 0xd5, 0xdc, 0xe2, 0xff, 0xae, 0xae, 0xae, 0xff

@Ability R.KAISERAURA
	.byte PCHAR_R, PCHAR_DOT, PCHAR_K, PCHAR_a, PCHAR_i, PCHAR_s, PCHAR_e, PCHAR_r
        .byte PCHAR_a, PCHAR_u, PCHAR_r, PCHAR_a, 0xff

@Ability B.KAISERAURA
	.byte PCHAR_B, PCHAR_DOT, PCHAR_K, PCHAR_a, PCHAR_i, PCHAR_s, PCHAR_e, PCHAR_r
        .byte PCHAR_a, PCHAR_u, PCHAR_r, PCHAR_a, 0xff

@Ability G.KAISERAURA
	.byte PCHAR_G, PCHAR_DOT, PCHAR_K, PCHAR_a, PCHAR_i, PCHAR_s, PCHAR_e, PCHAR_r
        .byte PCHAR_a, PCHAR_u, PCHAR_r, PCHAR_a, 0xff



