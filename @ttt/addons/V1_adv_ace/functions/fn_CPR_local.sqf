

params ["_caller", "_target"];

//standard variables:
private _inCardiac = _target getVariable ["ace_medical_inCardiacArrest",false];
private _inRevive = _target call V1_adv_ace_fnc_inReviveState;
_target setVariable ["ace_medical_CPR_provider", objNull, true];

//add time if in revive:
if ( _inRevive  || _inCardiac ) then {
	["V1_adv_ace_evh_addTime", [_caller, _target]] call CBA_fnc_localEvent;
};

//minor pain adjustment with each CPR:
[_target, 0.04] call ace_medical_fnc_adjustPainLevel;

//exit if cpr no longer possible:
if !( [_target] call V1_adv_ace_fnc_isResurrectable ) exitWith {
	//diagnostics:
	[_caller,"custom CPR on target no longer possible"] call V1_adv_ace_fnc_diag;
	
	//log the inability for custom CPR to the medic log:
	[_target, "activity", localize "STR_V1_adv_ace_CPR_FATAL", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;
	[_target, "activity_view", localize "STR_V1_adv_ace_CPR_FATAL", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;
};

//what's our probability?
private _probability = ([_caller,_target] call V1_adv_ace_fnc_probability) min 100;

//let's roll the dice:
private _diceRoll = 1+floor(random 100);

//diagnostics:
[_caller,format ["resulting probability was at %1 per-cent, and the dice-roll was %2.",_probability, _diceRoll]] call V1_adv_ace_fnc_diag;

if ( _probability >= _diceRoll ) exitWith {
	/*
	//resetting the values of the target:
	//_target setVariable ["ace_medical_inReviveState",false,true];
	//_target setVariable ["ace_medical_inCardiacArrest",false,true];
	_target setVariable ["ace_medical_inReviveState",nil,true];
	_target setVariable ["ace_medical_inCardiacArrest",nil,true];
	
	private _gotEpi = _target getVariable ["ace_medical_epinephrine_insystem",0];
	
	//if player has a higher bloodvolume, the new heart rate will be lower.
	call {
		if (_target getVariable "ace_medical_bloodVolume" > 60 && !(_gotEpi > 0.5)) exitWith {
			_target setVariable ["ace_medical_heartRate",30, true];
		};
		_target setVariable ["ace_medical_heartRate",40, true];
	};
	
	//if the player's bloodVolume is below the minimal value, it will be reset to 30:
	private _threshold = if (isClass(configFile >> "CfgPatches" >> "diwako_ragdoll")) then {40} else {30};
	if (_target getVariable "ace_medical_bloodVolume" < _threshold) then {
		_target setVariable ["ace_medical_bloodVolume",_threshold, true];
	};
	*/

	[_target] call V1_adv_ace_fnc_giveHeartRate;
	
	//log the custom cpr success to the treatment log:
	[_target, "activity", localize "STR_V1_adv_ace_CPR_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;
	[_target, "activity_view", localize "STR_V1_adv_ace_CPR_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;

	//diagnostics:
	[_caller,"patient has been successfully stabilized"] call V1_adv_ace_fnc_diag;

	//return:
	true;
};

//diagnostics:
[_caller,"patient has not been stabilized"] call V1_adv_ace_fnc_diag;

//log the custom cpr to the treatment log:
[_target, "activity", localize "STR_V1_adv_ace_CPR_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;
[_target, "activity_view", localize "STR_V1_adv_ace_CPR_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;

false;
