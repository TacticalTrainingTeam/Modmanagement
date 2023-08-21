
["ace_unconscious", {
    (_this select 0) setCaptive (_this select 1);
}] call CBA_fnc_addEventHandler;

player addEventHandler ["Respawn", {(_this select 0) setCaptive false}];