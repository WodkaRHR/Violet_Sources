.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x85cbb9
ow_script_0x85cbb9:
loadpointer 0x0 str_0x9663ca
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x9663ca

str_0x9663ca:
    .string "Ich habe das Magmaherz an diesem\nOrt gefunden, aber Archäologen\lhaben es sofort beschlagnahmt und\lin das Orina City Museum gebracht.\pWo liegt da die Gerechtigkeit?"
        
        
.elseif LANG_EN

.endif
