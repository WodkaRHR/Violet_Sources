.include "overworld_script.s"

.include "std.s"

.global ow_script_0x8e098d
ow_script_0x8e098d:
trainerbattlestd 0x0 0x2f 0x0 str_0x8e10e9 str_0x8e18e8
loadpointer 0x0 str_0x8e18e8
callstd MSG_FACE
end
