.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x87e9ee
ow_script_0x87e9ee:
loadpointer 0x0 str_0x92723b
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x92723b

str_0x92723b:
    .string "Ich habe miterlebt, wie die drei\ngrößten Trainer ihrer Zeit die Top\lVier ins Leben riefen.\pIhre Wege mögen sich getrennt\nhaben, ihr Vermächtnis aber ist\lnoch immer standhaft."
        
        
.elseif LANG_EN

.endif
