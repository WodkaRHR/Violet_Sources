.include "callstds.s"
.include "species.s"
.include "overworld_script.s"


.global ow_script_0x816c6f
ow_script_0x816c6f:
cry POKEMON_PIKACHU 0x0
loadpointer 0x0 str_0x817948
callstd MSG_FACE
waitcry
end


.ifdef LANG_GER
.global str_0x817948

str_0x817948:
    .string "Pikachuuu!!!"
        
        
.elseif LANG_EN

.endif
