.include "overworld_script.s"

.include "std.s"

.global ow_script_0x83f7e8
ow_script_0x83f7e8:
bufferattack 0x0 ATTACK_FASSADE
checkattack ATTACK_FASSADE
compare LASTRESULT 0x6
callif EQUAL ow_script_0x83f924
loadpointer 0x0 str_0x83f8bf
callstd MSG_YES_NO
compare LASTRESULT 0x0
callif EQUAL ow_script_0x83f8bb
setanimation 0x0 0x800d
bufferpartypokemon 0x1 0x800d
loadpointer 0x0 str_0x83f89b
callstd MSG_KEEPOPEN
closeonkeypress
doanimation 0x2
nop
waitstate
goto ow_script_0x83f829


.global ow_script_0x83f829
ow_script_0x83f829:
compare PLAYERFACING 0x1
callif EQUAL ow_script_0x83f864
compare PLAYERFACING 0x2
callif EQUAL ow_script_0x83f857
compare PLAYERFACING 0x3
callif EQUAL ow_script_0x83f87e
compare PLAYERFACING 0x4
callif EQUAL ow_script_0x83f871
end


.global ow_script_movs_0x83f88f
ow_script_movs_0x83f88f:
.byte STEP_RIGHT_FAST
.byte STEP_RIGHT_FAST
.byte STOP


.global ow_script_0x83f871
ow_script_0x83f871:
applymovement 0xff ow_script_movs_0x83f88f
waitmovement 0x0
releaseall
end


.global ow_script_movs_0x83f893
ow_script_movs_0x83f893:
.byte STEP_LEFT_FAST
.byte STEP_LEFT_FAST
.byte STOP


.global ow_script_0x83f87e
ow_script_0x83f87e:
applymovement 0xff ow_script_movs_0x83f893
waitmovement 0x0
releaseall
end


.global ow_script_movs_0x83f88b
ow_script_movs_0x83f88b:
.byte STEP_UP_FAST
.byte STEP_UP_FAST
.byte STOP


.global ow_script_0x83f857
ow_script_0x83f857:
applymovement 0xff ow_script_movs_0x83f88b
waitmovement 0x0
releaseall
end


.global ow_script_movs_0x83f897
ow_script_movs_0x83f897:
.byte STEP_DOWN_FAST
.byte STEP_DOWN_FAST
.byte STOP


.global ow_script_0x83f864
ow_script_0x83f864:
applymovement 0xff ow_script_movs_0x83f897
waitmovement 0x0
releaseall
end


.global ow_script_0x83f8bb
ow_script_0x83f8bb:
closeonkeypress
releaseall
end


.global ow_script_0x83f924
ow_script_0x83f924:
loadpointer 0x0 str_0x83f92e
callstd MSG
end
