.include "flags.s"
.include "ordinals.s"
.include "overworld_script.s"


.global ow_script_0x88b2c5
ow_script_0x88b2c5:
checkflag FRBADGE_1
callif LESS ow_script_0x8f6fce
end


.global ow_script_0x8f6fce
ow_script_0x8f6fce:
setmaptile 0x18 0x20 0xe1 0x1
setmaptile 0x19 0x20 0xe1 0x1
setmaptile 0x1a 0x20 0xe1 0x1
setmaptile 0x18 0x21 0xe1 0x1
setmaptile 0x19 0x21 0xe1 0x1
setmaptile 0x1a 0x21 0xe1 0x1
setmaptile 0x18 0x22 0x1 0x0
setmaptile 0x19 0x22 0x1 0x0
setmaptile 0x1a 0x22 0x1 0x0
return
