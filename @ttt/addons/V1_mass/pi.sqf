/*
	author = V1irus
	description = CBA setting
*/


[
"V1_mass_toggle",
"CHECKBOX",
"STR_V1_Mass_Settings",
["V1 mods", "V1 mass"], 
true,
2,
{},
true
] call CBA_fnc_addSetting;





[
	"V1_mass_toggleACE",
	"LIST",  
	[localize "STR_V1_MassACE_Settings"], 
	["V1 mods", "V1 mass"], 
	[["KG","AMU"], 
	["STR_V1_MassACE_KG","STR_V1_MassACE_AMU"], 0],
	2,{},true
] call cba_settings_fnc_init;
