.include "overworld_script.s"

.include "std.s"

.global ow_script_0x735291
ow_script_0x735291:
trainerbattlestd 0x0 0x63 0x0 str_0x73cdd2 str_0x73ce20
loadpointer 0x0 str_0x73ce20
callstd MSG_FACE
end