
params [
	"_target"
	,"_log"
];

//exit if diagnostics is not activated:
if !(missionNamespace getVariable ["V1_adv_ace_diag",false]) exitWith {false};

//log event local to the caller:
private _str = format ["V1_adv_ace - %1",_log];
systemChat _str;
if !(player diarySubjectExists "V1_adv_ace_log") then {
	player createDiarySubject ["V1_adv_ace_log","ADV - ACE CPR"];
};
player createDiaryRecord ["V1_adv_ace_log", ["Log", _str]];
call {
	if (local _target) exitWith {
		["V1_adv_ace_evh_log", [_str]] call CBA_fnc_localEvent;
	};
	["V1_adv_ace_evh_log", [_str]] call CBA_fnc_localEvent;
	["V1_adv_ace_evh_log", [_str], _target] call CBA_fnc_targetEvent;
};

true;