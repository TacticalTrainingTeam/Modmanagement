
params [
	"_caller"
	,"_target"
	,"_selectionName"
	,"_className"
	,"_items"
];

private _inCardiac = _target getVariable ["ace_medical_inCardiacArrest",false];
private _inRevive = _target call V1_adv_ace_fnc_inReviveState;

//pain will be added to all units standing too close to caller or target.
if (vehicle _target isEqualTo _target) then {
	private _bystanders = ( allUnits select {_x distance _target < 1.7} ) - [_caller];
	{ [_x, 0.2] remoteExec ["ace_medical_fnc_adjustPainLevel",_x]; nil; } count _bystanders;
};

//get and reduce used variable:
/*
private _uses = _caller getVariable ["V1_adv_ace_aed_usedVar",10];
private _newUses = _uses-1;
if ( _newUses isEqualTo 0 ) then {
	["Your AED's battery is depleted.", 2] call ace_common_fnc_displayTextStructured;
	[localize "STR_V1_adv_ace_SETTING_AED_DEPLETED", 2] call ace_common_fnc_displayTextStructured;
	_caller removeItem "V1_adv_ace_aed";
	_caller addItem "V1_adv_ace_aed_used";
};
_caller setVariable ["V1_adv_ace_aed_usedVar",_newUses];
*/

//if necessary execute the custom cpr action:
if ( _inCardiac || _inRevive ) exitWith {
	//execute aed treatment local to the target:
	if (local _target) exitWith {
		//diagnostics
		[_target,"target is local"] call V1_adv_ace_fnc_diag;
		
		//aed event:
		["V1_adv_ace_evh_AED_local", [_caller, _target]] call CBA_fnc_localEvent;
	};
	
	//diagnostics:
	[_target,"target is not local to the caller"] call V1_adv_ace_fnc_diag;
	
	//aed event:
	["V1_adv_ace_evh_AED_local", [_caller, _target], _target] call CBA_fnc_targetEvent;
};

//log the AED usage to the treatment log:
[_target, "activity", localize "STR_V1_adv_ace_AED_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;
[_target, "activity_view", localize "STR_V1_adv_ace_AED_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;

//return:
false;
