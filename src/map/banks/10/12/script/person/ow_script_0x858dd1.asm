.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x858dd1
ow_script_0x858dd1:
loadpointer 0x0 str_0x965f0a
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x965f0a

str_0x965f0a:
    .string "Das Sortiment in den\nVerkaufsabteilungen der Pokéstops\lwird laufend erweitert.\pSo haben sich nun auch Hyperbälle\ndort eingefunden.\pEin Glück, dass diese\nhochentwickelten Pokébälle nun für\ldie Masse verfügbar sind."
        
        
.elseif LANG_EN

.endif
