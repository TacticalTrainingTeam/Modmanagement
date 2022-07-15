

params [
	["_target", objNull, [objNull]]
];

private _inRevive = _target call V1_adv_ace_fnc_inReviveState;
private _inCardiac = _target getVariable ["ace_medical_inCardiacArrest",false];

if !(alive _target && (_inRevive || _inCardiac)) exitWith { true };
if (!_inRevive && _inCardiac) exitWith { true };

private _startTime = _target getVariable ["V1_adv_ace_cardiacArrestStart", CBA_missionTime];
private _cprMaxTime = missionNamespace getVariable ["V1_adv_ace_maxTime", 900];

CBA_missionTime < _startTime + _cprMaxTime
