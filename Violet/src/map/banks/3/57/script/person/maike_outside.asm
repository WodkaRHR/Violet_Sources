.include "callstds.s"
.include "movements.s"
.include "overworld_script.s"
.include "vars.s"
.include "ordinals.s"
.include "flags.s"
.include "mugshot.s"

.global ow_script_trainerschool_maike_outside
ow_script_trainerschool_maike_outside:
compare TRAINERSCHOOL_PROGRESS 3
gotoif EQUAL make_felix_and_blaise_appear
compare TRAINERSCHOOL_PROGRESS 4
gotoif EQUAL will_receive_pkmn
compare TRAINERSCHOOL_PROGRESS 5
gotoif EQUAL catch_pkmn
compare TRAINERSCHOOL_PROGRESS 6
gotoif EQUAL catch_pkmn
compare TRAINERSCHOOL_PROGRESS 7
gotoif EQUAL battle
compare TRAINERSCHOOL_PROGRESS 8
gotoif EQUAL results
compare TRAINERSCHOOL_PROGRESS 8
gotoif HIGHER goodbye
end

goodbye:
lock
faceplayer
loadpointer 0 str_goodbye
show_mugshot MUGSHOT_MAY MUGSHOT_RIGHT
setvar 0x8004 5
setvar 0x8005 0x29
setvar 0x8006 0x14
special 0x24
waitmovement 0
applymovement 5 mov_face_down
waitmovement 0
sound 9
hidesprite 5
checksound
pause 32
addvar TRAINERSCHOOL_GOODBYE_CNT 1
release
goto ow_script_trainerschool_finish

results:
loadpointer 0 str_results
show_mugshot MUGSHOT_MAY MUGSHOT_RIGHT MSG_FACE
end

battle:
loadpointer 0 str_battle
show_mugshot MUGSHOT_MAY MUGSHOT_RIGHT MSG_FACE
end

make_felix_and_blaise_appear:
@ Check if may already appeared
checkflag TRAINERSCHOOL_FELIX_OUTSIDE
gotoif EQUAL felix_already_appeared
lock
faceplayer
loadpointer 0 str_make_both_appear
show_mugshot MUGSHOT_MAY MUGSHOT_RIGHT
sound 0x9
checksound
showsprite 0x7
showsprite 0x6
setflag TRAINERSCHOOL_BLAISE_INSIDE
setflag TRAINERSCHOOL_BLAISE_OUTSIDE
setflag TRAINERSCHOOL_FELIX_INSIDE
setflag TRAINERSCHOOL_FELIX_OUTSIDE
sound 0x15
applymovement 0xFF mov_exclam
applymovement 0x3 mov_exclam
applymovement 0x5 mov_exclam
waitmovement 0
pause 16
loadpointer 0 str_after_both_appeared
show_mugshot MUGSHOT_MAY MUGSHOT_RIGHT

applymovement 0x6 mov_1u
applymovement 0x7 mov_1u
waitmovement 0
release
end

mov_1u:
	.byte STEP_UP, STEP_UP, STOP

felix_already_appeared:
loadpointer 0 str_after_both_appeared_2
show_mugshot MUGSHOT_MAY MUGSHOT_RIGHT MSG_FACE
releaseall
end

will_receive_pkmn:
loadpointer 0 str_will_receive_pkmn
show_mugshot MUGSHOT_MAY MUGSHOT_RIGHT MSG_FACE
end

catch_pkmn:
loadpointer 0 str_catch_pkmn
show_mugshot MUGSHOT_MAY MUGSHOT_RIGHT MSG_FACE
end

mov_face_down:
	.byte LOOK_DOWN, STOP

mov_exclam:
	.byte LOOK_DOWN, SAY_EXCLAM, STOP

.ifdef LANG_GER
str_make_both_appear:
	.autostring 35 2 "Oh, hallo PLAYERDOTS\nIch bin immer noch am Boden zerstört wegen dieses schriftlichen TestsDOTS\pWeißt du, mein Freund aus Hoenn, er ist so ein talentierter Trainer und ich bin dagegenDOTS"

str_after_both_appeared:
	.autostring 35 2 "Also sind jetzt auch Felix und Blaise auf dem Hof, fehlt nur noch Herr FaunDOTS"

str_after_both_appeared_2:
	.autostring 35 2 "Wenn ich diesen Test heute vergeige, kann ich meinem Freund nicht mehr unter die Augen tretenDOTS"

str_will_receive_pkmn:
	.autostring 35 2 "Ich bin schon ganz gespannt, welches Pokémon ich bekomme!\pIch will ein so starker Trainer werden, wie mein Freund aus Hoenn."

str_catch_pkmn:
	.autostring 35 2 "Dass man mir das letzte Pokémon einfach aufzwingt, gefällt mir nicht, PLAYER.\pVielleicht kann ich ja ein anderes Pokémon einfangen, das mir gefälltDOTS"

str_battle:
	.autostring 35 2 "AchDOTS ich will eigentlich gar nicht kämpfenDOTS\pWeißt du, PLAYER, ich traue mir das ganze Trainer-Sein ehrlich gesagt noch nicht zuDOTS"

str_results:
	.autostring 35 2 "Ich bin sehr nervösDOTS\pImmerhin konnte ich Felix nicht besiegen.\pIch hoffe nur, dass ich nicht durch die Prüfung gefallen bin!"

str_goodbye:
	.autostring 35 2 "PLAYERDOTS\nIch bin glücklich und ängstlich zugleich.\pDer Schatten meines Freundes aus Hoenn reicht sehr weitDOTS\pOb ich jemals mit ihm auf Augenhöhe sein werde?\pIch frage mich, ob ich dem gewachsen bin, was vor mir liegt.\pAber ich muss mein Leben allein bewältigen, meinst du nicht, PLAYER?\pJa, Verantwortung, die muss ich jetzt übernehmen.\pWir werden uns sicher wiedersehen.\pLebe wohl, bis dahin, PLAYER!"

.elseif LANG_EN

.endif
