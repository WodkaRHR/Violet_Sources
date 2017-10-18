.include "overworld_script.s"

.include "std.s"

.global ow_script_movs_0x899c63
ow_script_movs_0x899c63:
.byte FACE_DOWN
.byte SAY_EXCLAM
.byte STOP


.global ow_script_movs_0x899c67
ow_script_movs_0x899c67:
.byte LOOK_UP
.byte STOP


.global ow_script_0x899c42
ow_script_0x899c42:
playsong MUS_RIVALE_ERSCHEINT_GARY 0x0
sound 0x15
applymovement 0x1 ow_script_movs_0x899c63
applymovement 0xff ow_script_movs_0x899c67
waitmovement 0x0
goto ow_script_0x89c06b


.global ow_script_movs_0x89bfe7
ow_script_movs_0x89bfe7:
.byte STEP_UP_FAST
.byte STEP_UP_FAST
.byte STEP_UP_FAST
.byte STEP_UP_FAST
.byte STOP


.global ow_script_0x89c06b
ow_script_0x89c06b:
call ow_script_0x89ba6e
loadpointer 0x0 str_0x89bfed
callstd MSG
special 0x7
applymovement 0x1 ow_script_movs_0x89bfe7
waitmovement 0x0
sound 0x9
hidesprite 0x1
checksound
fadesong MUS_TRAINERSCHOOL
setflag TRAINERSCHOOL_RIVAL
setvar STORY_PROGRESS 0x5
end