.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x801426
ow_script_0x801426:
trainerbattlestd 0x0 0x1 0x0 str_0x8040c2 str_0x804122
loadpointer 0x0 str_0x804122
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x8040c2

str_0x8040c2:
    .string "Wenn sich die Blicke zweier Trainer\ntreffen, kommt es unweigerlich zu\leinem Kampf. Los!"
        
        
.global str_0x804122

str_0x804122:
    .string "Verliert ein Trainer gegen einen\nanderen, so muss er ihm Preisgeld\lgeben. Das sind die Regeln!"
        
        
.elseif LANG_EN

.endif
