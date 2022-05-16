/*
	author = V1irus
	description = Gets liftcapability of Helicopters
*/



V1_Get_Lift_Capability = {
    params ["_target","_caller","_arguments"];
    private ["_slingLoadMaxCargoMass"]; 
    _slingLoadMaxCargoMass = getNumber (configFile >> "CfgVehicles" >> typeOf _target >> "slingLoadMaxCargoMass");
    hint format ["%1 KG",_slingLoadMaxCargoMass];
};


_V1_action = ["getLift",localize "STR_V1_Mass_GetLift","",V1_Get_Lift_Capability,{true}] call ace_interact_menu_fnc_createAction;  
["Helicopter", 0, ["ACE_MainActions"],str _V1_action, true] call ace_interact_menu_fnc_addActionToClass;