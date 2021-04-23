LilycoveCity_MelkorHouse_MapScripts::
	.byte 0

LilycoveCity_MelkorHouse_EventScript_Alliare::
	lock
	faceplayer
	msgbox LilycoveCity_MelkorHouse_EventScript_Alliare_Text_0
	release
	return


LilycoveCity_MelkorHouse_EventScript_DataminingBook::
	lock
	msgbox LilycoveCity_MelkorHouse_EventScript_DataminingBook_Text_0
	release
	return


LilycoveCity_MelkorHouse_EventScript_Melkor::
	lock
	compare VAR_MELKOR_STATE, 0
	goto_if_eq LilycoveCity_MelkorHouse_EventScript_Melkor_2
	compare VAR_MELKOR_STATE, 1
	goto_if_eq LilycoveCity_MelkorHouse_EventScript_Melkor_3
	faceplayer
	msgbox LilycoveCity_MelkorHouse_EventScript_Melkor_Text_4
LilycoveCity_MelkorHouse_EventScript_Melkor_1:
	release
	return

LilycoveCity_MelkorHouse_EventScript_Melkor_2:
	msgbox LilycoveCity_MelkorHouse_EventScript_Melkor_Text_0
	playse SE_PIN
	applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 5, Common_Movement_FaceDown
	waitmovement 0
	msgbox LilycoveCity_MelkorHouse_EventScript_Melkor_Text_1
	msgbox LilycoveCity_MelkorHouse_EventScript_Melkor_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_MelkorHouse_EventScript_Melkor_7
	setvar VAR_MELKOR_STATE, 1
	msgbox LilycoveCity_MelkorHouse_EventScript_Melkor_Text_5
	goto LilycoveCity_MelkorHouse_EventScript_Melkor_1

LilycoveCity_MelkorHouse_EventScript_Melkor_3:
	faceplayer
	msgbox LilycoveCity_MelkorHouse_EventScript_Melkor_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_MelkorHouse_EventScript_Melkor_10
	setvar VAR_MELKOR_STATE, 1
	msgbox LilycoveCity_MelkorHouse_EventScript_Melkor_Text_5
	goto LilycoveCity_MelkorHouse_EventScript_Melkor_1

LilycoveCity_MelkorHouse_EventScript_Melkor_7:
	setvar VAR_TEMP_1, SPECIES_RIOLU
	givemon SPECIES_RIOLU, 5, ITEM_SOOTHE_BELL, TRUE
	compare VAR_RESULT, 0
	goto_if_ne LilycoveCity_MelkorHouse_EventScript_Melkor_15
LilycoveCity_MelkorHouse_EventScript_Melkor_13:
	playfanfare MUS_FANFA4
	message LilycoveCity_MelkorHouse_EventScript_Melkor_Text_3
	waitmessage
	waitfanfare
	setvar VAR_MELKOR_STATE, 2
	msgbox LilycoveCity_MelkorHouse_EventScript_Melkor_Text_4
	goto LilycoveCity_MelkorHouse_EventScript_Melkor_1

LilycoveCity_MelkorHouse_EventScript_Melkor_10:
	setvar VAR_TEMP_1, SPECIES_RIOLU
	givemon SPECIES_RIOLU, 5, ITEM_SOOTHE_BELL, TRUE
	compare VAR_RESULT, 0
	goto_if_ne LilycoveCity_MelkorHouse_EventScript_Melkor_20
LilycoveCity_MelkorHouse_EventScript_Melkor_18:
	playfanfare MUS_FANFA4
	message LilycoveCity_MelkorHouse_EventScript_Melkor_Text_3
	waitmessage
	waitfanfare
	setvar VAR_MELKOR_STATE, 2
	msgbox LilycoveCity_MelkorHouse_EventScript_Melkor_Text_4
	goto LilycoveCity_MelkorHouse_EventScript_Melkor_1

LilycoveCity_MelkorHouse_EventScript_Melkor_14:
	goto Common_EventScript_NoMoreRoomForPokemon
	goto LilycoveCity_MelkorHouse_EventScript_Melkor_13

LilycoveCity_MelkorHouse_EventScript_Melkor_15:
	compare VAR_RESULT, 1
	goto_if_ne LilycoveCity_MelkorHouse_EventScript_Melkor_14
	goto LilycoveCity_MelkorHouse_EventScript_Melkor_13

LilycoveCity_MelkorHouse_EventScript_Melkor_19:
	goto Common_EventScript_NoMoreRoomForPokemon
	goto LilycoveCity_MelkorHouse_EventScript_Melkor_18

LilycoveCity_MelkorHouse_EventScript_Melkor_20:
	compare VAR_RESULT, 1
	goto_if_ne LilycoveCity_MelkorHouse_EventScript_Melkor_19
	goto LilycoveCity_MelkorHouse_EventScript_Melkor_18


LilycoveCity_MelkorHouse_EventScript_Alliare_Text_0:
	.string "ALLIARE: Los foros están pasados de\n"
	.string "moda... eso es lo que dice MELKOR.\p"
	.string "No es que no esté de acuerdo, pero, ¿no\n"
	.string "podría hacer algo más que no sea\l"
	.string "pasarse todo el día en TWITTR?\p"
	.string "No sé, cosas como ocuparse de la\n"
	.string "familia, limpiar la casa...\p"
	.string "¡o mover de sitio esas malditas cajas!$"

LilycoveCity_MelkorHouse_EventScript_DataminingBook_Text_0:
	.string "Hay un libro sobre la mesa. El título\n"
	.string "es...\p"
	.string "“DATAMINING DE POKéMON GO: GUÍA PARA\n"
	.string "NOVATOS”$"

LilycoveCity_MelkorHouse_EventScript_Melkor_Text_0:
	.string "Estos de CP son unos tóxicos... ¿Cómo\n"
	.string "son capaces de publicar los leaks de\l"
	.string "Game Freak?...\p"
	.string "Bueno, hora de tweetear sobre el\n"
	.string "datamining de POKéMON GO...$"

LilycoveCity_MelkorHouse_EventScript_Melkor_Text_1:
	.string "¿Eh? ¿Quién eres? ¿Alguien de la MAFIA?\n"
	.string "¿Uno de mis haters? Que sepas que soy\l"
	.string "abogado, y no me hagas la rima que ya\l"
	.string "somos mayorcitos, podría llevarte a los\l"
	.string "tribunales por allanamiento de morada\l"
	.string "y tráfico de POKéMON en peligro...\p"
	.string "...\p"
	.string "...Ah, solo eres un entrenador que\n"
	.string "pasaba por aquí... Mmm... en ese caso...\l"
	.string "¿podrías hacer como que no has oído\l"
	.string "nada?\p"
	.string "MELKOR: soy MELKOR, administrador de\n"
	.string "PxP. Hace tiempo que dejé el antiguo\l"
	.string "PxP y me mudé aquí, a mi nuevo hogar.\l"
	.string "Desde entonces me dedico a publicar\l"
	.string "noticias de POKéMON GO en TWITTR. Ya\l"
	.string "sabes, los foros están muertos y eso.\p"
	.string "El problema es que hay ciertas personas\n"
	.string "que no se han tomado bien esto... he\l"
	.string "oído que la MAFIA ha venido a HOENN y\l"
	.string "temo que estén buscándome para\l"
	.string "vengarse.$"

LilycoveCity_MelkorHouse_EventScript_Melkor_Text_2:
	.string "Hagamos un trato. Si no le dices a nadie\n"
	.string "que vivo aquí, te regalaré un\l"
	.string "fantástico POKéMON. ¿Qué te parece?$"

LilycoveCity_MelkorHouse_EventScript_Melkor_Text_3:
	.string "¡{PLAYER} obtuvo a RIOLU!$"

LilycoveCity_MelkorHouse_EventScript_Melkor_Text_4:
	.string "Un placer hacer negocios contigo.\n"
	.string "Ahora, si me disculpas, TWITTR me llama.$"

LilycoveCity_MelkorHouse_EventScript_Melkor_Text_5:
	.string "Entonces será mejor que te largues de\n"
	.string "aquí antes de que te lleve a los\l"
	.string "tribunales.$"