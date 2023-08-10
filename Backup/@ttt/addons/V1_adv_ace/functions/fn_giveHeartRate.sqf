

params [
	"_unit"
];

private _currentState = [_unit, ace_medical_STATE_MACHINE] call CBA_statemachine_fnc_getCurrentState;
[_unit, ace_medical_STATE_MACHINE, _currentState, "Unconscious", {}, "MANUAL"] call CBA_statemachine_fnc_manualTransition;
