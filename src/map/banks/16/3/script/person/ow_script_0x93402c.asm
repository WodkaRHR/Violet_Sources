.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x93402c
ow_script_0x93402c:
loadpointer 0x0 str_0x93bcb5
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x93bcb5

str_0x93bcb5:
    .string "Manus wird von vielen für einen\ngroßen Mann gehaltenDOTS\lIch vertrete eine andere\lAuffassung, aber derartiges sollte\lman nicht zu laut sagen."
        
        
.elseif LANG_EN

.endif
