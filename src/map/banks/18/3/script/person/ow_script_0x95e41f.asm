.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x95e41f
ow_script_0x95e41f:
trainerbattlestd 0x0 0x95 0x0 str_0x95e437 str_0x95e496
loadpointer 0x0 str_0x95e496
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x95e437

str_0x95e437:
    .string "Was hat mich nur geritten, einen\nCampingsauflug in diese\lweltgewordene Hölle zu\lunternehmen?"
        
        
.global str_0x95e496

str_0x95e496:
    .string "Überall nur Asche und FeuerDOTS"
        
        
.elseif LANG_EN

.endif
