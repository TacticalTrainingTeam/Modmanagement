

(_this select 0) params [
	"_caller"
	,"_target"
	,"_selectionName"
	,"_className"
	,"_items"
];

_target setVariable ["ace_medical_CPR_provider", _caller, true];
_caller setVariable ["V1_adv_ace_var_soundHandle", (_this select 0) spawn {
	params [
		"_caller"
		,"_target"
		,"_selectionName"
		,"_className"
		,"_items"
	];
	sleep 5.4;
	playsound3d ["V1_adv_ace\ui\defib.ogg", _caller, false, getPosASL _caller, 5, 1, 15];
	_caller setVariable ["V1_adv_ace_var_soundHandle", nil];
}];
