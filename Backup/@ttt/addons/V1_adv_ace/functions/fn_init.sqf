

//register the eventhandlers:
//evh for the CPR:
["V1_adv_ace_evh_CPR_local", { _this call V1_adv_ace_fnc_CPR_local }] call CBA_fnc_addEventHandler;
//evh for the addition of revive time:
["V1_adv_ace_evh_addTime", { _this call V1_adv_ace_fnc_addTime }] call CBA_fnc_addEventHandler;
//evh for showing the pulse after AED:
["V1_adv_ace_evh_showPulse", { (_this + ["Head"]) call ace_medical_treatment_fnc_checkPulse }] call CBA_fnc_addEventHandler;
//evh for the AED:
["V1_adv_ace_evh_AED_local", { _this call V1_adv_ace_fnc_AED_local }] call CBA_fnc_addEventHandler;

["ace_cardiacArrest", {
	params ["_unit", "_active"];

	if (_active) then {
		_unit setVariable ["V1_adv_ace_cardiacArrestStart", CBA_missionTime, true];
	};
}] call CBA_fnc_addEventHandler;

/*
if (isServer) then {
	missionNamespace setVariable ["V1_adv_ace_hostVersion", getText (configFile >> "CfgPatches" >> "V1_adv_ace" >> "versionStr"), true];
	missionNamespace setVariable ["V1_adv_ace_isDedicated", isDedicated, true];

	{
		private _localVersion = getText (configFile >> "CfgPatches" >> "V1_adv_ace" >> "versionStr");
		private _hostVersion = missionNamespace getVariable ["V1_adv_ace_hostVersion", ""];

		if !(_localVersion isEqualTo _hostVersion) then {
			private warningStr = format ["Warning - V1_adv_ace version mismatch: player '%1' uses v%2, while host uses v%3",
				name player,
				_localVersion,
				_hostVersion
			];
			
			diag_log _warningStr;

			_warningStr remoteExec ["systemChat", [0,-2] select (missionNamespace getVariable ["V1_adv_ace_isDedicated", false])];
			_warningStr remoteExec ["diag_log", 2];
		};
	} remoteExec ["call", -2, true];
}
*/

//for diagnostic purposes only:
["V1_adv_ace_evh_log", { diag_Log (format ["%1",_this]) }] call CBA_fnc_addEventHandler;

missionNamespace setVariable ["V1_adv_ace_diag",false];

nil
