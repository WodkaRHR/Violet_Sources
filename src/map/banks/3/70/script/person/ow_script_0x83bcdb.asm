.include "items.s"
.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x83bcdb
ow_script_0x83bcdb:
copyvarifnotzero 0x8000 ITEM_SONDERBONBON
copyvarifnotzero 0x8001 1
callstd ITEM_FIND
end
