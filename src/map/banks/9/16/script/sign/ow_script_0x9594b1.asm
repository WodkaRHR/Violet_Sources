.include "callstds.s"
.include "flags.s"
.include "ordinals.s"
.include "overworld_script.s"


.global ow_script_0x9594b1
ow_script_0x9594b1:
checkflag ORINA_CITY_WOLKENHERZ_STOLEN
gotoif EQUAL ow_script_0x95a5a3
loadpointer 0x0 str_0x95a5b5
callstd MSG_SIGN
end


.global ow_script_0x95a5a3
ow_script_0x95a5a3:
loadpointer 0x0 str_0x95a5b5
callstd MSG_SIGN
loadpointer 0x0 str_0x959487
callstd MSG_SIGN
end


.ifdef LANG_GER
.global str_0x95a5b5

str_0x95a5b5:
    .string "QUOTE_STARTDas Wolkenherz - es glitzert in\nden Regenbogenfarben im LichtQUOTE_END"
        
        

.elseif LANG_EN

.endif
