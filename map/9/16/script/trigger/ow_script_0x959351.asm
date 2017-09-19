.include "overworld_script.s"

.include "std.s"

.global ow_script_movs_0x959dfe
ow_script_movs_0x959dfe:
.byte FACE_DOWN
.byte SAY_EXCLAM
.byte STOP


.global ow_script_movs_0x959a08
ow_script_movs_0x959a08:
.byte LOOK_UP
.byte STOP


.global ow_script_0x959351
ow_script_0x959351:
lockall
fadesong MUS_0
call ow_script_0x936c1c
loadpointer 0x0 str_0x959e02
callstd MSG
special 0x7
sound 0x15
applymovement 0xff ow_script_movs_0x959dfe
waitmovement 0x0
checksound
clearflag PKMNMENU
showsprite 0xd
showsprite 0xe
setflag PKMNMENU
setvar 0x8004 0xd
special 0x1b
setvar 0x8004 0xe
setvar 0x8005 0x9
setvar 0x8006 0x8
special 0x24
waitmovement 0x0
applymovement 0xd ow_script_movs_0x959a08
applymovement 0xe ow_script_movs_0x959a08
waitmovement 0x0
playsong MUS_MISTRAL 0x0
call ow_script_0x936c1c
loadpointer 0x0 str_0x959af2
callstd MSG
special 0x7
setvar 0x8004 0xd
setvar 0x8005 0x9
setvar 0x8006 0x4
special 0x24
waitmovement 0x0
applymovement 0xd ow_script_movs_0x959a08
waitmovement 0x0
setvar 0x8004 0xe
special 0x1b
waitmovement 0x0
setvar LASTTALKED 0xe
trainerbattlecont 0x1 0x91 0x0 str_0x959a4a str_0x959abd ow_script_0x959e29


.global ow_script_movs_0x959a0b
ow_script_movs_0x959a0b:
.byte FACE_DOWN
.byte STOP


.global ow_script_0x959e29
ow_script_0x959e29:
playsong MUS_MISTRAL 0x0
loadpointer 0x0 str_0x959a0e
callstd MSG
applymovement 0xff ow_script_movs_0x959a08
applymovement 0xd ow_script_movs_0x959a0b
waitmovement 0x0
call ow_script_0x936c1c
loadpointer 0x0 str_0x9599ae
callstd MSG
special 0x7
applymovement 0xd ow_script_movs_0x959a08
waitmovement 0x0
sound 0x14
setmaptile 0x9 0x2 0x2d2 0x1
setmaptile 0xa 0x2 0x2d3 0x1
setmaptile 0x9 0x3 0x2da 0x1
setmaptile 0xa 0x3 0x2db 0x1
special 0x8e
pause 0x1c
call ow_script_0x936c1c
loadpointer 0x0 str_0x959981
callstd MSG
special 0x7
setvar 0x8004 0xd
special 0x1b
waitmovement 0x0
faceplayer
call ow_script_0x936c1c
loadpointer 0x0 str_0x959853
callstd MSG
special 0x7
fadescreen 0x1
hidesprite 0xd
hidesprite 0xe
hidesprite 0x9
hidesprite 0xa
hidesprite 0xb
hidesprite 0xc
applymovement 0xff ow_script_movs_0x959a0b
waitmovement 0x0
fadesong MUS_AZURIA_CITY_AND_FEUERHOHLE_AND_FUCHSANIA_CITY
fadescreen 0x0
clearflag PKMNMENU
showsprite 0xf
setvar 0x8004 0xf
special 0x1b
waitmovement 0x0
faceplayer
loadpointer 0x0 str_0x9595b1
callstd MSG_KEEPOPEN
fanfare 0x13e
loadpointer 0x0 str_0x95957f
callstd MSG_KEEPOPEN
waitfanfare
loadpointer 0x0 str_0x9594d2
callstd MSG
setflag PKMNMENU
setflag ORINA_CITY_VIOLET_GRUNTS
addvar STORY_PROGRESS 0x1
warpmuted 0x3 0x5 0x2 0x0 0x0
waitstate
releaseall
end
