.include "flags.s"
.include "items.s"
.include "callstds.s"
.include "vars.s"
.include "ordinals.s"
.include "overworld_script.s"


.global ow_script_0x87f90a
ow_script_0x87f90a:
lock
faceplayer
checkflag MERIANA_CITY_BLACK_BELT
gotoif EQUAL ow_script_0x8a28fd
loadpointer 0x0 str_0x8a29c0
callstd MSG_KEEPOPEN
copyvarifnotzero 0x8000 ITEM_SCHWARZGURT
copyvarifnotzero 0x8001 1
callstd ITEM_OBTAIN
compare LASTRESULT 0x0
gotoif EQUAL ow_script_0x87f3c1
loadpointer 0x0 str_0x8a2922
callstd MSG_KEEPOPEN
closeonkeypress
release
setflag MERIANA_CITY_BLACK_BELT
end


.global ow_script_0x87f3c1
ow_script_0x87f3c1:
lock
faceplayer
loadpointer 0x0 str_0x87f3ce
callstd MSG
release
end


.global ow_script_0x8a28fd
ow_script_0x8a28fd:
loadpointer 0x0 str_0x8a2907
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x8a29c0

str_0x8a29c0:
    .string "Hjaaa! Huuu! Baaa! Kara!\nDiese Kampftechnik habe ich eigens\lentwickelt. Eines Tages werde ich\lsogar Manus damit übertrumpfen!\lDOTS\lHier, nimm das und trainiere deine\lPokémon selbst so wie ich es tue!"
        
        
.global str_0x8a2922

str_0x8a2922:
    .string "Das Item Schwarzgurt verstärkt\nalle Kampf-Angriffe eines\lPokémon. Damit werden seine\lSchläge und Tritte noch viel\leffektiver sein!\lHjaaa! Huuu! Baa! Kara!"
        
        
.global str_0x87f3ce

str_0x87f3ce:
    .string "Sieht so aus, als hättest du für\nBUFFER_2 keinen Platz!\pKomm wieder, wenn du das Item\naufnehmen kannst."
        
        
.global str_0x8a2907

str_0x8a2907:
    .string "Hjaaa! Huuu! Baaa! Kara!"
        
        
.elseif LANG_EN

.endif
