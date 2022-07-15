class CfgPatches
{
    class V1_adv_ace
    {
        units[] = {
			"V1_adv_ace_AEDItem"
			//,"V1_adv_ace_AEDStation"
		};
        weapons[] = {
			"V1_adv_ace_AED"
		};
        requiredVersion = 1.88;
        requiredAddons[] = {
			"ace_medical"
			,"cba_settings"
		};
		version = "2.1.4";
		versionStr = "2.1.4";
    };
};

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}

#define MACRO_AED_STATION class ACE_Actions { \
	class ACE_MainActions { \
		condition = "true"; \
		displayName = "Interactions"; \
		distance = 2; \
		selection = ""; \
		class V1_adv_ace_aed_station { \
			priority = -1; \
			showDisabled = 0; \
			displayName = "$STR_V1_adv_ace_AED_STATION_ACTION"; \
			condition = "missionNamespace getVariable ['V1_adv_ace_enable',true] && !(_player getVariable ['V1_adv_ace_usedAEDStation',false]) && (_player getVariable ['ace_medical_medicClass',0]) > 0"; \
			statement = "[_player,_target] call V1_adv_ace_fnc_useAEDStation"; \
			exceptions[] = {"isNotInside"}; \
			icon = "\V1_adv_ace\ui\defib_action.paa"; \
		};\
	};\
};

class CfgFunctions {
	class V1_adv_ace {
		tag = "V1_adv_ace";
		class init {
			file = "V1_adv_ace\functions";
			class addTime {};
			class AED_action {};
			class AED_condition {};
			class AED_local {};
			class AED_sound {};
			class AED_cancelled {};
			class AED_progress {};
			class AED_station {};
			class AED_station_condition {};
			class CPR_action {};
			class CPR_local {};
			class createAEDstations {};
			class diag {};
			class getBloodLoss {};
			class getList {};
			class init { postInit = 1; };
			class isResurrectable {};
			class probability {};
			class registerSettings {};
			class useAEDStation {};

			class giveHeartRate {};
			class getMedications {};
			class inReviveState {};
		};
	};
};

class Extended_PreInit_EventHandlers {
	class V1_adv_ace_preInit {
		init = "call V1_adv_ace_fnc_registerSettings";
	};
};

class Extended_PostInit_EventHandlers {
    class V1_adv_ace_postInit {
        init = "nul = [] spawn V1_adv_ace_fnc_createAEDstations";
    };
};

class cfgWeapons {
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	
    class V1_adv_ace_AED: ACE_ItemCore {
        scope = 2;
        displayName = "$STR_V1_adv_ace_AED_DISPLAYNAME";
        picture = "\V1_adv_ace\ui\defib.paa";
		model = "\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
        descriptionShort = "$STR_V1_adv_ace_AED_DESCRIPTION";
        descriptionUse = "$STR_V1_adv_ace_AED_DESCRIPTION";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 30;
        };
	};	
    class V1_adv_ace_AED_used: ACE_ItemCore {
        scope = 1;
        displayName = "$STR_V1_adv_ace_AED_USED_DISPLAYNAME";
        picture = "\V1_adv_ace\ui\defib.paa";
		model = "\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
        descriptionShort = "$STR_V1_adv_ace_AED_DESCRIPTION";
        descriptionUse = "$STR_V1_adv_ace_AED_DESCRIPTION";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 30;
        };
	};
};

class cfgVehicles {
	class Item_Base_F;
	
	class V1_adv_ace_AEDItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_V1_adv_ace_AED_DISPLAYNAME";
        author = "[SeL] Belbo";
        vehicleClass = "Items";
		model = "\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
        class TransportItems {
            MACRO_ADDITEM(V1_adv_ace_AED,1);
        };
	};
	/*
	class V1_adv_ace_AEDStation: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_V1_adv_ace_AEDSTATION_DISPLAYNAME";
        author = "[SeL] Belbo";
        vehicleClass = "Items";
		model = "\V1_adv_ace\ui\defi.p3d";
		MACRO_AED_STATION
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1,1};
		ace_dragging_carryDirection = 270;
        ace_cargo_size = 1;
		ace_cargo_canLoad = 1;
	};
	*/

	class Items_base_F;
	class Land_Defibrillator_F: Items_base_F {
		//MACRO_AED_STATION
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1,1};
		ace_dragging_carryDirection = 270;
        ace_cargo_size = 1;
		ace_cargo_canLoad = 1;
	};
	
	class NATO_Box_Base;
	class ACE_medicalSupplyCrate: NATO_Box_Base {
		class TransportItems;
	};
	class ACE_medicalSupplyCrate_advanced: ACE_medicalSupplyCrate {
		class TransportItems: TransportItems {
			MACRO_ADDITEM(V1_adv_ace_AED,1);
		};
	};
};

class ACE_Medical_Treatment_Actions {
	class fieldDressing;
	class CPR: fieldDressing {
		callbackSuccess = "V1_adv_ace_fnc_CPR_action";
		animationMedic = "AinvPknlMstpSnonWnonDr_medic0";
		animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
		animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
	};
	class Defibrillator: CPR {
		displayName = "$STR_V1_adv_ace_AED_ACTION";
		displayNameProgress = "$STR_V1_adv_ace_AED_PROGRESS";
		icon = "\V1_adv_ace\ui\defib_action.paa";
		items[] = {"V1_adv_ace_AED"};
		condition = "[_medic, _patient] call V1_adv_ace_fnc_AED_condition";
		treatmentTime = 8;
		callbackSuccess = "V1_adv_ace_fnc_AED_action";
		callbackStart = "V1_adv_ace_fnc_AED_sound";
		callbackFailure = "V1_adv_ace_fnc_AED_cancelled";
		callbackProgress = "V1_adv_ace_fnc_AED_progress";
		animationMedic = "AinvPknlMstpSnonWnonDnon_medic3";
		treatmentLocations = "V1_adv_ace_useLocation_AED";
	};
	class Defibrillator_station: Defibrillator {
		items[] = {};
		condition = "[_medic, _patient] call V1_adv_ace_fnc_AED_station_condition";
		callbackSuccess = "V1_adv_ace_fnc_AED_station";
		callbackProgress = "";
		callbackFailure = "";
		animationMedic = "AinvPknlMstpSnonWnonDnon_medic3";
		treatmentLocations = 0;
	};
};
