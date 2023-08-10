

params ["_caller", "_target"];

//standard variables:
private _inCardiac = _target getVariable ["ace_medical_inCardiacArrest",false];

//backwards compatibility:
private _probabilities = missionNamespace getVariable ["V1_adv_ace_probabilities", [40,15,5,85]];
if (count _probabilities isEqualTo 3) then {
	_probabilities pushBack 85;
};
//what's our probability?
private _probability = (_probabilities select 3) min 100;

//let's roll the dice:
private _diceRoll = 1+floor(random 100);

//diagnostics:
[_caller,format ["probability was at %1 per-cent, and the dice-roll was %2.",_probability, _diceRoll]] call V1_adv_ace_fnc_diag;

//adds pain with each defib use:
[_target, 0.4] call ace_medical_fnc_adjustPainLevel;

if ( _probability >= _diceRoll ) exitWith {
	/*
	//resetting the values of the target:
	//_target setVariable ["ace_medical_inReviveState",false,true];
	//_target setVariable ["ace_medical_inCardiacArrest",false,true];
	 _target setVariable ["ace_medical_inReviveState",nil,true];
	_target setVariable ["ace_medical_inCardiacArrest",nil,true];
	
	//sets the heartrate higher than CPR:
	_target setVariable ["ace_medical_heartRate",40, true];
	
	//if the player's bloodVolume is below the minimal value, it will be reset to 30:
	private _threshold = if (isClass(configFile >> "CfgPatches" >> "diwako_ragdoll")) then {40} else {30};
	if (_target getVariable "ace_medical_bloodVolume" < _threshold) then {
		_target setVariable ["ace_medical_bloodVolume",_threshold, true];
	};
	*/

	[_target] call V1_adv_ace_fnc_giveHeartRate;
	
	//log the custom cpr success to the treatment log:
	[_target, "activity", localize "STR_V1_adv_ace_AED_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;
	[_target, "activity_view", localize "STR_V1_adv_ace_AED_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;

	//diagnostics:
	[_caller,"patient has been succesfully stabilized"] call V1_adv_ace_fnc_diag;
	
	//show pulse after AED:
	if (!local _caller) then {
		["V1_adv_ace_evh_showPulse", [_caller, _target], _caller] call CBA_fnc_targetEvent;
	};
	["V1_adv_ace_evh_showPulse", [_caller, _target]] call CBA_fnc_localEvent;

	//return:
	true;
};

//show pulse after AED:
if (!local _caller) then {
	["V1_adv_ace_evh_showPulse", [_caller, _target], _caller] call CBA_fnc_targetEvent;
};
["V1_adv_ace_evh_showPulse", [_caller, _target]] call CBA_fnc_localEvent;

//diagnostics:
[_caller,"patient has not been stabilized"] call V1_adv_ace_fnc_diag;

//log the AED usage to the treatment log:
[_target, "activity", localize "STR_V1_adv_ace_AED_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;
[_target, "activity_view", localize "STR_V1_adv_ace_AED_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;

false;
