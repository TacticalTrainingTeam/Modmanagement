//by V1irus
//note: Ai never tries to overkill someone. Set unconscious players as captive. 
waituntil {!isnil "bis_fnc_init"};

["ace_unconscious", {
    (_this select 0) setCaptive (_this select 1);
}] call CBA_fnc_addEventHandler;