.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x72b101
ow_script_0x72b101:
trainerbattlestd 0x0 0x60 0x0 str_0x743970 str_0x8ede0e
loadpointer 0x0 str_0x8ede0e
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x743970

str_0x743970:
    .string "Ich habe meine Pokémon gerade am\nBrunnen erfrischt! Ich bin so gut\lgestärkt, ich kann nicht verliern!"
        
        
.global str_0x8ede0e

str_0x8ede0e:
    .string "Am Brunnen konnte ich meine\nPokémon heilenDOTS\pVielleicht war es aber auch bloß\neine Fata Morgana."
        
        
.elseif LANG_EN

.endif
