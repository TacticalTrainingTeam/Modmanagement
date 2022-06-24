

If !(V1_Saline_toggle) exitWith {};
_fnc_condition = {
    params ["", "", "_arguments"];
    _arguments params ["_from", "_fromAmount"];
    private _count = {_x == _from} count items player;

    _count >= _fromAmount && [player] call ace_common_fnc_isMedic
};

_fnc_covert = {
    params ["", "", "_arguments"];
    _arguments params ["_from", "_fromAmount", "_to", "_toAmount"];
    private _count = { _x == _from } count items player;

    if (_count >= _fromAmount) then {

        for "_i" from 0 to _fromAmount - 1 do { player removeItem _from; };

        for "_i" from 0 to _toAmount - 1 do { player addItem _to; };

        private _fnc_getVolume = {
            switch (_this) do {
                case "ACE_salineIV": { 1000 };
                case "ACE_salineIV_500": { 500 };
                case "ACE_salineIV_250": { 250 };
                default {0};
            };
        };

        hint format [localize "STR_V1_Saline_feedback", _from call _fnc_getVolume, _toAmount, _to call _fnc_getVolume];
        
    } else {
        hint "no item";
    };
}; 



_action = ["V1_S_Main",localize "STR_V1_Saline_main","",{},{}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["V1_S_U1",localize "STR_V1_Saline_U1","",{},{}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","V1_S_Main"], _action] call ace_interact_menu_fnc_addActionToObject; 

_action = ["V1_S_U2",localize "STR_V1_Saline_U2","",{},{}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","V1_S_Main"], _action] call ace_interact_menu_fnc_addActionToObject; 

_action = ["V1_S_R1",localize "STR_V1_Saline_R1", "", _fnc_covert, _fnc_condition, {}, ["ACE_salineIV", 1, "ACE_salineIV_500", 2]] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","V1_S_Main","V1_S_U2"], _action] call ace_interact_menu_fnc_addActionToObject; 

_action = ["V1_S_R2",localize "STR_V1_Saline_R2","",_fnc_covert, _fnc_condition, {}, ["ACE_salineIV_500", 1, "ACE_salineIV_250", 2]] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","V1_S_Main","V1_S_U2"], _action] call ace_interact_menu_fnc_addActionToObject; 

_action = ["V1_S_R3",localize "STR_V1_Saline_R3","",_fnc_covert, _fnc_condition, {}, ["ACE_salineIV", 1, "ACE_salineIV_250", 4]] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","V1_S_Main","V1_S_U2"], _action] call ace_interact_menu_fnc_addActionToObject; 

_action = ["V1_S_R4",localize "STR_V1_Saline_R4","",_fnc_covert, _fnc_condition, {}, ["ACE_salineIV_500", 2, "ACE_salineIV", 1]] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","V1_S_Main","V1_S_U1"], _action] call ace_interact_menu_fnc_addActionToObject; 

_action = ["V1_S_R5",localize "STR_V1_Saline_R5","",_fnc_covert, _fnc_condition, {}, ["ACE_salineIV_250", 4, "ACE_salineIV", 1]] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","V1_S_Main","V1_S_U1"], _action] call ace_interact_menu_fnc_addActionToObject; 

_action = ["V1_S_R6",localize "STR_V1_Saline_R6","",_fnc_covert, _fnc_condition, {}, ["ACE_salineIV_250", 2, "ACE_salineIV_500", 1]] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","V1_S_Main","V1_S_U1"], _action] call ace_interact_menu_fnc_addActionToObject; 
