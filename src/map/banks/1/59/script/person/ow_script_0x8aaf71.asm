.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x8aaf71
ow_script_0x8aaf71:
loadpointer 0x0 str_0x927f3b
callstd MSG
end


.ifdef LANG_GER
.global str_0x927f3b

str_0x927f3b:
    .string "Du bist stark, aber ich kann dir\nnicht erlauben, zu gewinnen.\pSo viele Menschen verlassen sich\ndarauf, dass wir Frieden wahren."
        
        
.elseif LANG_EN

.endif
