.include "overworld_script.s"

.include "std.s"

.global ow_script_0x917148
ow_script_0x917148:
trainerbattlestd 0x0 0x76 0x0 str_0x935bdc str_0x935c48
loadpointer 0x0 str_0x935c48
callstd MSG_FACE
end
