.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x8f6459
ow_script_0x8f6459:
loadpointer 0x0 str_0x8fb1c7
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x8fb1c7

str_0x8fb1c7:
    .string "Warum muss es hier auch so\nverflucht dunkel sein?\pStändig stolpere ich über ein\nKleinsteinDOTS"
        
        
.elseif LANG_EN

.endif
