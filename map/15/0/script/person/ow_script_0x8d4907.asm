.include "overworld_script.s"

.include "std.s"

.global ow_script_0x8d4907
ow_script_0x8d4907:
trainerbattlestd 0x0 0x20 0x0 str_0x8d491f str_0x8d494b
loadpointer 0x0 str_0x8d494b
callstd MSG_FACE
end
