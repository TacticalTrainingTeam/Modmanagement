

params [
	"_caller"
];

if (!isNil {_caller getVariable ["V1_adv_ace_var_soundHandle", nil]}) then {
	private _handle = _caller getVariable ["V1_adv_ace_var_soundHandle", nil];

	if (!isNil "_handle") then {
		terminate _handle;
		_caller setVariable ["V1_adv_ace_var_soundplayed", false];
		_caller setVariable ["V1_adv_ace_var_soundHandle", nil];
	};
};
