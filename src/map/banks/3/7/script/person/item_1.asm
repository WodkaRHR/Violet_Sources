.include "items.s"
.include "callstds.s"
.include "overworld_script.s"


.global ow_script_route_2_east_item_1
ow_script_route_2_east_item_1:
copyvarifnotzero 0x8000 ITEM_TRANK
copyvarifnotzero 0x8001 1
callstd ITEM_FIND
end
