.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x95e6a9
ow_script_0x95e6a9:
loadpointer 0x0 str_0x95ed28
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x95ed28

str_0x95ed28:
    .string "Inferior ist lange umkämpft\ngewesen unter den Top Vier.\pNun, da der Champion Lucius fort\nist, weiß man nie genau, ob der\lSchwarze Devin erneut einen\lVersuch unternimmt, dieses Gebiet\lzu unterwerfenDOTS"
        
        
.elseif LANG_EN

.endif
