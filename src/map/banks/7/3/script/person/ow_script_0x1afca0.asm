.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x1afca0
ow_script_0x1afca0:
lock
faceplayer
setvar 0x8004 0x3
setvar 0x8005 0x5
special 0x173
textcolor 0x3
loadpointer 0x0 str_0x1b46c9
callstd MSG_KEEPOPEN
release
end


.ifdef LANG_GER
.global str_0x1b46c9

str_0x1b46c9:
    .string "Pokémon Journal\pSonderreportage: Arenaleiterin\nMisty aus Azuria City!\pMisty vergöttert angeblich\nLorelei von den Top Vier."
        
        
.elseif LANG_EN

.endif
