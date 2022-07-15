

#define CBA_SETTINGS_CAT "V1 ADV ACE14+"

missionNamespace setVariable ["V1_adv_ace_probabilities",[40,15,5,85]];

//Enable ADV ACE14+
[
	"V1_adv_ace_enable"
	,"CHECKBOX"
	,localize "STR_V1_adv_ace_SETTING_ENABLE"
	,CBA_SETTINGS_CAT
	,[true]
	,true
] call CBA_Settings_fnc_init;

//Added time with CPR
[
	"V1_adv_ace_addTime"
	,"SLIDER"
	,localize "STR_V1_adv_ace_SETTING_ADDTIME"
	,CBA_SETTINGS_CAT
	,[15,40,20,0]
	,true
] call CBA_Settings_fnc_init;

//CPR possible until
[
	"V1_adv_ace_maxTime"
	,"SLIDER"
	,localize "STR_V1_adv_ace_SETTING_MAXTIME"
	,CBA_SETTINGS_CAT
	,[0,3600,1200,0]
	,true
] call CBA_Settings_fnc_init;

//Chance for medicClass == 2
[
	"V1_adv_ace_chance_2"
	,"SLIDER"
	,localize "STR_V1_adv_ace_SETTING_CHANCE_2"
	,CBA_SETTINGS_CAT
	,[0,100,40,0]
	,true
    ,{
		params ["_value"];
        V1_adv_ace_probabilities set [0,round _value];
	}
] call CBA_Settings_fnc_init;

//Chance for medicClass == 1
[
	"V1_adv_ace_chance_1"
	,"SLIDER"
	,localize "STR_V1_adv_ace_SETTING_CHANCE_1"
	,CBA_SETTINGS_CAT
	,[0,100,15,0]
	,true
    ,{
		params ["_value"];
        V1_adv_ace_probabilities set [1,round _value];
	}
] call CBA_Settings_fnc_init;

//Chance for medicClass == 0
[
	"V1_adv_ace_chance_0"
	,"SLIDER"
	,localize "STR_V1_adv_ace_SETTING_CHANCE_0"
	,CBA_SETTINGS_CAT
	,[0,100,5,0]
	,true
    ,{
		params ["_value"];
        V1_adv_ace_probabilities set [2,round _value];
	}
] call CBA_Settings_fnc_init;

//Chance for AED
[
	"V1_adv_ace_chance_aed"
	,"SLIDER"
	,localize "STR_V1_adv_ace_SETTING_CHANCE_AED"
	,CBA_SETTINGS_CAT
	,[0,100,85,0]
	,true
    ,{
		params ["_value"];
        V1_adv_ace_probabilities set [3,round _value];
	}
] call CBA_Settings_fnc_init;

//location for AED:
[
	"V1_adv_ace_useLocation_AED",
	"LIST",
	[localize "STR_V1_adv_ace_SETTING_LOCATION_AED",localize "STR_V1_adv_ace_SETTING_LOCATION_AED_DESCRIPTION"],
	CBA_SETTINGS_CAT,
	[[0,1,2,3],["STR_ACE_Common_Anywhere", "STR_ACE_Common_Vehicle", "STR_ACE_Medical_Treatment_MedicalFacilities", "STR_ACE_Medical_Treatment_VehiclesAndFacilities"],0],
	true
] call CBA_Settings_fnc_init;

//stationary AED objects:
missionNamespace setVariable ["V1_adv_ace_AED_stationType",nil];
[
	"V1_adv_ace_AED_stationType"
	,"EDITBOX"
	,[localize "STR_V1_adv_ace_SETTING_STATION",localize "STR_V1_adv_ace_SETTING_STATION_DESCRIPTION"]
	,CBA_SETTINGS_CAT
	,"""Land_Defibrillator_F"""
	,true
] call CBA_Settings_fnc_init;


//Disable for certain classes
[
	"V1_adv_ace_onlyDoctors",
	"LIST",
	[localize "STR_V1_adv_ace_MedicAED", localize "STR_V1_adv_ace_MedicAED_Description"],
	CBA_SETTINGS_CAT,
	[[0,1,2],["STR_ACE_Medical_Treatment_Anyone","STR_ACE_Medical_Treatment_Medics","STR_ACE_Medical_Treatment_Doctors"],0],
	true
] call CBA_Settings_fnc_init;

nil
