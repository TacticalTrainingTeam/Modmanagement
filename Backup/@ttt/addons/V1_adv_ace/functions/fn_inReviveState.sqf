
params [
	"_unit"
];

private _currentState = [_unit, ace_medical_STATE_MACHINE] call CBA_statemachine_fnc_getCurrentState;
_currentState == "Unconscious"
