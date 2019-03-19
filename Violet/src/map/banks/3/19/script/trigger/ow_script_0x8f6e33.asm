.include "callstds.s"
.include "movements.s"
.include "overworld_script.s"
.include "mugshot.s"


.global ow_script_movs_0x8a09c6
ow_script_movs_0x8a09c6:
.byte SAY_EXCLAM
.byte STOP


.global ow_script_movs_0x8a09c9
ow_script_movs_0x8a09c9:
.byte STEP_LEFT
.byte STOP


.global ow_script_0x8f6e33
ow_script_0x8f6e33:
lockall
sound 0x15
applymovement 0xff ow_script_movs_0x8a09c6
waitmovement 0x0
loadpointer 0x0 str_0x8a0956
show_mugshot MUGSHOT_PLAYER
applymovement 0xff ow_script_movs_0x8a09c9
waitmovement 0x0
end


.ifdef LANG_GER
.global str_0x8a0956

str_0x8a0956:
    .string "Die Trainerschule liegt westlich\nvon Route 1. Ich sollte mich\lbeeilen, sonst verpasse ich noch\ldie Prüfungen!"
        
        
.elseif LANG_EN

.endif
