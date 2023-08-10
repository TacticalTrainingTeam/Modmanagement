/*
	author = Reimchen
	description = n.a.
*/

if (!hasInterface) exitWith {};

private _vehicle = vehicle player;
if ((_vehicle == player) || !(player isEqualTo commander _vehicle)) exitWith {};
if (objNull isEqualTo gunner _vehicle) exitWith {hintSilent "Du brauchst auch einen Richtschützen"};

private _varDir = eyeDirection _vehicle; 
_vehicle setVariable ["reim_hunterKiller_varDir",_varDir,true];
{
	private _vehicle = vehicle player;
	private _dir = _vehicle getVariable "reim_hunterKiller_varDir";
	private _lookTo = eyePos _vehicle vectorAdd (_dir vectorMultiply 1000);
	_vehicle setVariable ["reim_hunterKiller_varLookTo",_lookTo,false];
	
	_vehicle lockCameraTo [
		_lookTo,
		_vehicle unitTurret player,
		true
	];
} remoteExec ["call",(gunner _vehicle),false]; 
