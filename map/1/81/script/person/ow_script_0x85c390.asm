.include "overworld_script.s"

.include "std.s"

.global ow_script_0x85c390
ow_script_0x85c390:
trainerbattlestd 0x0 0xa6 0x0 str_0x8643bf str_0x9660f5
loadpointer 0x0 str_0x9660f5
callstd MSG_FACE
end
