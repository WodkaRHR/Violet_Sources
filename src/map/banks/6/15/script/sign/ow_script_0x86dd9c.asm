.include "flags.s"
.include "movements.s"
.include "items.s"
.include "callstds.s"
.include "species.s"
.include "vars.s"
.include "ordinals.s"
.include "overworld_script.s"


.global ow_script_0x86dd9c
ow_script_0x86dd9c:
checkflag AKTANIA_GEODUDE_DONE
gotoif LESS ow_script_0x87afc7
end


.global ow_script_0x87afc7
ow_script_0x87afc7:
checkflag AKTANIA_GEODUDE_ACCEPTED
gotoif EQUAL ow_script_0x87c9f4
loadpointer 0x0 str_0x87cae0
callstd MSG
end


.global ow_script_movs_0x87cadd
ow_script_movs_0x87cadd:
.byte SAY_EXCLAM
.byte STOP


.global ow_script_0x87c9f4
ow_script_0x87c9f4:
checkflag AKTANIA_GEODUDE_FOUGHT
gotoif EQUAL ow_script_0x87ca4c
loadpointer 0x0 str_0x87caba
callstd MSG
pause 0x40
sound 0x15
applymovement 0xff ow_script_movs_0x87cadd
waitmovement 0x0
loadpointer 0x0 str_0x87ca86
callstd MSG
cry POKEMON_KLEINSTEIN 0x0
loadpointer 0x0 str_0x87ca4e
callstd MSG
waitcry
setvar NEXT_POKEMON_SHINY 0x1
setwildbattle POKEMON_KLEINSTEIN 0xc ITEM_NUGGET
dowildbattle
setmaptile 0x7 0x7 0x2fc 0x0
fadescreen 0x1
special 0x8e
fadescreen 0x0
setflag AKTANIA_GEODUDE_FOUGHT
end


.global ow_script_0x87ca4c
ow_script_0x87ca4c:
end


.ifdef LANG_GER
.global str_0x87cae0

str_0x87cae0:
    .string "Ein seltsamer Stein, der golden\nschimmert. Ab und an wirkt es so,\lals würde er sich bewegenDOTS"
        
        
.global str_0x87caba

str_0x87caba:
    .string "PLAYER untersucht den Stein näherDOTS"
        
        
.global str_0x87ca86

str_0x87ca86:
    .string "Auf einmal springt der goldene\nStein in die Höhe!"
        
        
.global str_0x87ca4e

str_0x87ca4e:
    .string "Der Stein entpuppt sich als\nKleinstein!\lEs greift an!"
        
        
.elseif LANG_EN

.endif
