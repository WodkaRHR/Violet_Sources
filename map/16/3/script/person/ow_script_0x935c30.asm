.include "overworld_script.s"

.include "std.s"

.global ow_script_0x935c30
ow_script_0x935c30:
copyvarifnotzero 0x8000 ITEM_SONDERBONBON
copyvarifnotzero 0x8001 ITEM_MEISTERBALL
callstd ITEM_FIND
end
