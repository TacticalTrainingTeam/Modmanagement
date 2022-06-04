/*
	author = V1irus
	description = Gets mass of Objects and Vehicles
*/



If !(V1_mass_toggle) exitWith {};


V1_Get_Mass = {
    params ["_target","_caller","_arguments"];
    private ["_mass"]; 
    _mass = getmass _target;
    hint format ["%1 KG",_mass];
};



_V1_action_mass_things = ["getmassmax",localize "STR_V1_Mass_GetMass","",V1_Get_Mass,{true}] call ace_interact_menu_fnc_createAction;  
["ReammoBox_F", 0, ["ACE_MainActions"], _V1_action_mass_things, true] call ace_interact_menu_fnc_addActionToClass;

_V1_action_mass_vehicles = ["getmassmax",localize "STR_V1_Mass_GetMass","",V1_Get_Mass,{true}] call ace_interact_menu_fnc_createAction;  
["LandVehicle", 0, ["ACE_MainActions"], _V1_action_mass_vehicles, true] call ace_interact_menu_fnc_addActionToClass;