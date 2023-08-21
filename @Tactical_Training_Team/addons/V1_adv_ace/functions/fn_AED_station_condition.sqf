

params [
	"_caller"
	,"_target"
];

private _items = missionNamespace getVariable ["V1_adv_ace_AED_stationType","Land_Defibrillator_F"];
private _items_array = [_items,"CfgVehicles"] call V1_adv_ace_fnc_getList;

private _return = !([_target] call ace_common_fnc_isAwake) && {missionNamespace getVariable ['V1_adv_ace_enable',true] && count (_target nearEntities [_items_array, 5]) > 0 && _caller getVariable ['V1_adv_ace_usedAEDStation',false]};

_return
