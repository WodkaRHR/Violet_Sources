.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x958361
ow_script_0x958361:
loadpointer 0x0 str_0x958fef
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x958fef

str_0x958fef:
    .string "Die Steine in den Vitrinen sind\njahrtausende alt.\pAllein der Gedanke an solch imense\nZeitintervalle ist erschreckend."
        
        
.elseif LANG_EN

.endif
