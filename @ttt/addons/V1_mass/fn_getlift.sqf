/*
	author = V1irus
	description = Gets liftcapability of Helicopters
*/



V1_Get_Lift_Capability = {
    params ["_target","_caller","_arguments"];
    private _slingLoadMaxCargoMass = getNumber (configOf _target >> "slingLoadMaxCargoMass"); // TODO replace configFile >> "CfgVehicles" >> typeOf with configOf 
    hint format ["%1 KG",_slingLoadMaxCargoMass];
};


_V1_action = ["getLift",localize "STR_V1_Mass_GetLift","",V1_Get_Lift_Capability,{true}] call ace_interact_menu_fnc_createAction;  
["Helicopter", 0, ["ACE_MainActions"], _V1_action, true] call ace_interact_menu_fnc_addActionToClass;