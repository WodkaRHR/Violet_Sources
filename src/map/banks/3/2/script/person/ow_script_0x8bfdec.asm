.include "items.s"
.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x8bfdec
ow_script_0x8bfdec:
copyvarifnotzero 0x8000 ITEM_SUPERBALL
copyvarifnotzero 0x8001 1
callstd ITEM_FIND
end
