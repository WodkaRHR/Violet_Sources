.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x95a9da
ow_script_0x95a9da:
loadpointer 0x0 str_0x95a9e4
callstd MSG_SIGN
end


.ifdef LANG_GER
.global str_0x95a9e4

str_0x95a9e4:
    .string "Viele bunt funkelnde Steine und\nBodenproben sind hier ausgestellt.\pKaum vorstellbar, dass derart alte\nDinge noch immer erhalten sind."
        
        
.elseif LANG_EN

.endif
