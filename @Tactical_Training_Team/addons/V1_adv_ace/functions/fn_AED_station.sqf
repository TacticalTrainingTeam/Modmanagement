

params [
	"_caller"
	,"_target"
	,"_selectionName"
	,"_className"
	,"_items"
];

playsound3d ["V1_adv_ace\ui\bump.ogg", _caller,false,getPosASL _caller,8,1,15];	

_this call V1_adv_ace_fnc_AED_action;

_caller setVariable ["V1_adv_ace_usedAEDStation",false];

nil