.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x89ffef
ow_script_0x89ffef:
loadpointer 0x0 str_0x8f6ed0
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x8f6ed0

str_0x8f6ed0:
    .string "Es heißt, dass in Theto einst das\nZeit-Pokémon das Herz der Zeit\lverborgen hat. Solange es schlägt,\lbleibt die Zeit im Fluss."
        
        
.elseif LANG_EN

.endif
