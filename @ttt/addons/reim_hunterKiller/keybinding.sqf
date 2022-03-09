/*
	author = Reimchen
	description = n.a.
*/

#include "\a3\editor_f\Data\Scripts\dikCodes.h"

[
	"Reim Hunter Killer System",
	"reim_hunerKiller_key", 
	["Aktiviere Hunter Killer System", "Geht nur als Kommandant / benötigt einen aktiven Richtschützen"], 
	{[]spawn reim_hunterKiller_fnc_hunterKiller}, 
	{}, 
	[DIK_Q, [false, true, false]],
	true
] call CBA_fnc_addKeybind;
