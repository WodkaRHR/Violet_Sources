.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x815b96
ow_script_0x815b96:
loadpointer 0x0 str_0x81c244
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x81c244

str_0x81c244:
    .string "Ich liebe es einen Spaziergang\ndurch den Silvania-Wald zu machen.\lDort sind immer diese leuchtenden\lSteine!"
        
        
.elseif LANG_EN

.endif
