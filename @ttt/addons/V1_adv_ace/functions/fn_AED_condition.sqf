params [
	"_caller",
	"_target"
];

private _medicLevel = _caller getVariable ["ace_medical_medicClass", getNumber (configFile >> "CfgVehicles" >> typeOf _caller >> "attendant")];
private _requiredLevel = missionNamespace getVariable ["V1_adv_ace_onlyDoctors", 0];

_medicLevel >= _requiredLevel
&& { missionNamespace getVariable ['V1_adv_ace_enable', true] }
&& { !([_target] call ace_common_fnc_isAwake) }
