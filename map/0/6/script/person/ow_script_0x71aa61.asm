.include "overworld_script.s"

.include "std.s"

.global ow_script_0x71aa61
ow_script_0x71aa61:
trainerbattlestd 0x0 0x57 0x0 str_0x71ad57 str_0x71b389
loadpointer 0x0 str_0x71b389
callstd MSG_FACE
end