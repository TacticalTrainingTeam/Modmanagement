//by Nobody ©
//V 0.2023.08081924
//TTT automate Teleport, Streamator & Spectator

//Clib (Streamator)
if !(isNil "CLib_fnc_loadModules") then { call CLib_fnc_loadModules;};


// set 'ttt_teleport_logic = false;' to deaktiveate logic
// waituntil {!isnil "bis_fnc_init"};
// waituntil {time > 1;};

//willcreate flag & menü
 if(!isNil"ttt_teleport_logic") exitWith {};

if (isServer or !isMultiplayer) then {
	private ["_count"];
	//check "respawn" marker or create
	ttt_respawn_pos = getMarkerPos "respawn";
	_count = 0;
	{
		_count = _count + _x;
	} foreach ttt_respawn_pos;

	if (_count == 0) then {
		ttt_respawn_pos = [0,0,0];
		_markerrespawn = createMarker ["respawn", ttt_respawn_pos];
		_markerrespawn setMarkerShape "RECTANGLE";
		_markerrespawn setMarkerSize [10, 10];
	};
	//check "teleport" obj or create
	if (isNil"ttt_teleporter") then {
		ttt_teleporter = "TTT_Flag_Logo" createVehicle ttt_respawn_pos;
	};
};

if (hasInterface) then {
	//check "teleport" obj and wait
	if (isNil"ttt_teleporter") then {
		waitUntil {!isNil"ttt_teleporter"};
	};
	// add spectator cam
	ttt_teleporter addAction ["Zuschauermodus", {
		params ["_target","_caller"];
		["Initialize", [_caller, [], true]] call BIS_fnc_EGSpectator;
		[_caller,true] remoteExecCall ["hideObjectGlobal", 2];
	},[],0.5,false,true,"","",5];
	//add teleporter Menü
	[ttt_teleporter] call FETT_fnc_W_addTeleport;

	//close spectator on respawn
	player addMPEventHandler ["MPRespawn", { 
		["Terminate"] call BIS_fnc_EGSpectator; 
	}];
};
if(true) exitwith{};