.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x86499c
ow_script_0x86499c:
trainerbattlestd 0x0 0xaf 0x0 str_0x96646f str_0x9664e4
loadpointer 0x0 str_0x9664e4
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x96646f

str_0x96646f:
    .string "Du magst es vielleicht mit unseren\nRüpeln aufnehmen können,\laber wir von der Violet Elite,\lwerden dich vernichten."
        
        
.global str_0x9664e4

str_0x9664e4:
    .string "BeachtlichDOTS\nGegen Mistral hast du letztlich\laber keine ChancenDOTS"
        
        
.elseif LANG_EN

.endif
