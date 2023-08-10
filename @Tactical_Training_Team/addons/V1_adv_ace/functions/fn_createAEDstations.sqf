

waitUntil {!isNil "V1_adv_ace_AED_stationType" && time > 1};
//getting V1_adv_ace_AED_stationType:
private _items = missionNamespace getVariable ["V1_adv_ace_AED_stationType","""Land_Defibrillator_F"""];
private _items_array = [_items,"CfgVehicles"] call V1_adv_ace_fnc_getList;
private _useOwnObject = {_x == "Land_Defibrillator_F"} count _items_array > 0;
if ( _useOwnObject ) then {
	_items_array pushBackUnique "V1_adv_ace_AEDItem";
};

//create action for V1_adv_ace_AED_stationType
V1_adv_ace_aed_stationAction = [
	"V1_adv_ace_AED_stationary",
	localize "STR_V1_adv_ace_AED_STATION_ACTION",
	"\V1_adv_ace\ui\defib_action.paa",
	{
		params ["_target","_caller","_arguments"];
		[_caller,_target] call V1_adv_ace_fnc_useAEDStation
	},
	{
		params ["_target","_caller"];
		missionNamespace getVariable ['V1_adv_ace_enable',true] && {!(_caller getVariable ['V1_adv_ace_usedAEDStation',false]) && (_caller call ace_common_fnc_isMedic)}
	},
	nil,[],[0,0,0]
] call ace_interact_menu_fnc_createAction;

//adding the action to all V1_adv_ace_AED_stationType:
{
	[_x , 0, ["ACE_MainActions"],V1_adv_ace_aed_stationAction,false] call ace_interact_menu_fnc_addActionToClass;
	nil
} count _items_array;
/*
{
	[_x, "InitPost", {
		[(_this select 0) , 0, ["ACE_MainActions"],V1_adv_ace_aed_stationAction] call ace_interact_menu_fnc_addActionToObject;
	}, false, nil, true] call CBA_fnc_addClassEventHandler;
	nil
} count _items_array;
*/

//adding a put evh, so carryable AED get's action as well:
if ( hasInterface && _useOwnObject ) then {
	V1_adv_ace_EVH_aed_station = player addEventHandler ["Put", {
		params ["_unit", "_container", "_item"];
		if (typeOf _container == "GroundWeaponHolder" && _item == "V1_adv_ace_AED") exitWith {
			[_container,0,["ACE_MainActions","V1_adv_ace_AED_stationary"]] call ace_interact_menu_fnc_removeActionFromObject;
			
			[_container , 0, ["ACE_MainActions"],V1_adv_ace_aed_stationAction] call ace_interact_menu_fnc_addActionToObject;
			_container addEventHandler ["ContainerClosed", {
				params ["_container", "_unit"];
				if ( {_x == "V1_adv_ace_AED"} count (itemCargo _container) isEqualTo 0 ) exitWith {
					[_container,0,["ACE_MainActions","V1_adv_ace_AED_stationary"]] call ace_interact_menu_fnc_removeActionFromObject;
				};
			}];
		};
	}];
};

nil
