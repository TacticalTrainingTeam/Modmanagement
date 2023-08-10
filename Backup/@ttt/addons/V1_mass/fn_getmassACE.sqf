/*
	author = V1irus
	description = Gets ACE Mass of Objects in a Container
*/

If !(V1_mass_toggle) exitWith {};

private ["_fnc_mass", "_fnc_mass_global", "_key_mass", "_key_mass_global"];

switch (V1_mass_toggleACE) do {
	case "AMU": {
		_fnc_mass = {
			params ["_target","_caller","_arguments"]; 
			private _mass =  _target call ace_dragging_fnc_getWeight;
			hint format ["%1 AMU", _mass];
		};
		_fnc_mass_global = {
			params ["_target","_caller","_arguments"]; 
			private _mass =  ACE_maxWeightCarry;
			hint format ["%1 AMU", _mass];
		};
		_key_mass = "STR_V1_MassACE_Feedback";
		_key_mass_global = "STR_V1_MassACE_global_Feedback";

	};
	case "KG";
	default {
		_fnc_mass = {
			params ["_target","_caller","_arguments"]; 
			private ["_mass","_calc","_final"]; 
			_mass =  _target call ace_dragging_fnc_getWeight;
			_calc = _mass * 2 * 0.453592 / 10;
			_final = _calc toFixed 2;
			hint format ["%1 KG", _final]; 
		};
		_fnc_mass_global = {
			params ["_target","_caller","_arguments"]; 
			private ["_mass","_calc","_final"]; 
			_mass =  ACE_maxWeightCarry;
			_calc = _mass * 2 * 0.453592 / 10;
			_final = _calc toFixed 2;
			hint format ["%1 KG", _final];
		};
		_key_mass = "STR_V1_MassACE_Feedback";
		_key_mass_global = "STR_V1_MassACE_global_Feedback";



	};
};


//Main

private _V1_action_mass_things = ["V1_M_Main",localize "STR_V1_MassACE_Main","",{}, {true}] call ace_interact_menu_fnc_createAction;
["ReammoBox_F", 0, ["ACE_MainActions"], _V1_action_mass_things, true] call ace_interact_menu_fnc_addActionToClass; 

_V1_action_mass_things = ["V1_MA_U1",localize "STR_V1_Mass_GetMassACE_U1","",{call V1_Get_Mass}, {true}] call ace_interact_menu_fnc_createAction;
["ReammoBox_F", 0, ["ACE_MainActions","V1_M_Main"], _V1_action_mass_things, true] call ace_interact_menu_fnc_addActionToClass;

_V1_action_mass_things = ["V1_MA_U2",localize "STR_V1_Mass_GetMassACE_U2","",{}, {true}] call ace_interact_menu_fnc_createAction;
["ReammoBox_F", 0, ["ACE_MainActions","V1_M_Main"], _V1_action_mass_things, true] call ace_interact_menu_fnc_addActionToClass; 



//Action

_V1_action_mass_things = ["V1_MA_RKG1",localize _key_mass,"", _fnc_mass, {true}] call ace_interact_menu_fnc_createAction;  
["ReammoBox_F", 0, ["ACE_MainActions","V1_M_Main","V1_MA_U2"], _V1_action_mass_things, true] call ace_interact_menu_fnc_addActionToClass;

_V1_action_mass_things = ["V1_MA_RKG2",localize _key_mass_global,"", _fnc_mass_global, {true}] call ace_interact_menu_fnc_createAction;  
["ReammoBox_F", 0, ["ACE_MainActions","V1_M_Main","V1_MA_U2"], _V1_action_mass_things, true] call ace_interact_menu_fnc_addActionToClass;
