//by V1irus

waituntil {!isnil "bis_fnc_init"};

["ace_unconscious", {
    (_this select 0) setCaptive (_this select 1);
}] call CBA_fnc_addEventHandler;