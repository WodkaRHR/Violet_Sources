.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x8fe4f6
ow_script_0x8fe4f6:
loadpointer 0x0 str_0x92dce2
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x92dce2

str_0x92dce2:
    .string "Ein Blick aufs Meer genügt, mein\nHerz mit Sehensucht zu erfüllen.\pWie gerne ich doch auf einem\nLapras in den Sonnenunterang\lsegeln würdeDOTS"
        
        
.elseif LANG_EN

.endif
