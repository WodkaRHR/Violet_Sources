.include "overworld_script.s"


.global ow_script_0x8f60f9
ow_script_0x8f60f9:
lockall
trainerbattlecont 0x1 0x2b7 0x0 str_0x8f610c str_0x8f610c ow_script_0x8f6111


.global ow_script_0x8f6111
ow_script_0x8f6111:
releaseall
end


.ifdef LANG_GER
.global str_0x8f610c

str_0x8f610c:
    .string "hi"
        
        
.elseif LANG_EN

.endif
