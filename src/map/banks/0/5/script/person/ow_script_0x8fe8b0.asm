.include "items.s"
.include "callstds.s"
.include "abilities.s"
.include "overworld_script.s"


.global ow_script_0x8fe8b0
ow_script_0x8fe8b0:
copyvarifnotzero 0x8000 ITEM_AP_PLUS
copyvarifnotzero 0x8001 1
callstd ITEM_FIND
end
