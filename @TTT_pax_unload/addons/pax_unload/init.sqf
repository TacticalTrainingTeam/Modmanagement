//by Nobody ©

waituntil {!isnil "bis_fnc_init"};

["ace_unloadPersonEvent", {
    params ["_target", "_vehicle"];
    if (player == _target) then {
        moveOut player;
    };
}] call CBA_fnc_addEventHandler;