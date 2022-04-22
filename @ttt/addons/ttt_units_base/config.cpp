class CfgPatches {
	class TTT_Units_Base {
		units[] = {
			"TTT_backpack_radio_base_coyote",
			"TTT_backpack_radio_base_olive"
		};
		weapons[] = {
			"TTT_Helmet_Buzzard",
			"TTT_Helmet_Hawk",
			"TTT_Helmet_Falcon",
			"TTT_Helmet_Eagle",
			"TTT_helmet_bronze_vehiclecrew",
			"TTT_helmet_grey_vehiclecrew",
			"TTT_helmet_silver_vehiclecrew",
			"TTT_helmet_yellow_vehiclecrew",
			"TTT_helmet_vehiclecrew",
			"TTT_Vest_Crew_bronze",
			"TTT_Vest_Crew_Silver",
			"TTT_Vest_Crew_White",
			};
		requiredAddons[] = {"ttt_main"};
	};
};

class CfgVehicles {
	/*
	#############################################################
	### Rucksäcke
	#############################################################
	*/
	class B_RadioBag_01_black_F;
	
	class TTT_Radiobackpack_Base : B_RadioBag_01_black_F {
		scope = 0;
		maximumLoad = 320;
		mass = 50;
	};
	
	class TTT_backpack_radio_base_coyote : TTT_Radiobackpack_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Funk Rucksack (Coyote)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_base\data\TTT_backpack_radio_coyote_co.paa"};
	};
	
	class TTT_backpack_radio_base_olive : TTT_Radiobackpack_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Funk Rucksack (Olive)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_base\data\TTT_backpack_radio_olive_co.paa"};
	};
};

class CfgWeapons {
    /*
	#############################################################
	### Uniformen
	#############################################################
	*/
	// External class reference
	class UniformBase;
    class U_B_CombatUniform_mcam : UniformBase{ class ItemInfo; };	// External class reference

	/*
	#############################################################
	### Helme
	#############################################################
	*/
	// External class reference
	class H_HelmetB_plain_mcamo;
	class H_HelmetSpecB : H_HelmetB_plain_mcamo{ class ItemInfo; };	
	class H_HelmetCrew_I;

	class TTT_Helmet_Base : H_HelmetSpecB {
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
		picture = "\A3\Characters_F\Data\UI\icon_H_HelmetB_CA.paa";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_base\data\TTT_helmet_1_bw_tropentarn.paa" };
		scope = 0;
		
		class ItemInfo : ItemInfo {
			hiddenSelections[] = { "camo" };
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			allowedSlots[] = {605,701,901}; 
		};
	};

	class TTT_Helmet_Buzzard : TTT_Helmet_Base {
		author = "$STR_Tactical_Training_Team";
		model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		displayName = "$STR_TTT_Weapons_Helmet_Buzzard";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_base\data\TTT_helmet_buzzard.paa" };
		scope = 2;

		class ItemInfo : ItemInfo {
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		};
	};

	class TTT_Helmet_Hawk : TTT_Helmet_Base {
		author = "$STR_Tactical_Training_Team";
		model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		displayName = "$STR_TTT_Weapons_Helmet_Hawk";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_base\data\TTT_helmet_buzzard.paa" };
		scope = 2;

		class ItemInfo : ItemInfo {
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		};
	};

	class TTT_Helmet_Falcon : TTT_Helmet_Base {
		author = "$STR_Tactical_Training_Team";
		model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		displayName = "$STR_TTT_Weapons_Helmet_Falcon";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_base\data\TTT_helmet_falcon.paa" };
		scope = 2;

		class ItemInfo : ItemInfo {
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		};
	};

	class TTT_Helmet_Eagle : TTT_Helmet_Base {
		author = "$STR_Tactical_Training_Team";
		model = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		displayName = "$STR_TTT_Weapons_Helmet_Eagle";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_base\data\TTT_helmet_eagle.paa" };
		scope = 2;

		class ItemInfo : ItemInfo {
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
		};
	};

	class TTT_helmet_vehiclecrew : H_HelmetCrew_I {
		scope = 2;
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Fahrzeugcrew";
	};
	
	class TTT_helmet_bronze_vehiclecrew : H_HelmetCrew_I {
		scope = 2;
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Fahrzeugcrew (Bronze)";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_base\data\TTT_helmet_bronze_vehiclecrew.paa" };
	};

	class TTT_helmet_grey_vehiclecrew : H_HelmetCrew_I {
		scope = 2;
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Fahrzeugcrew (Grau)";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_base\data\TTT_helmet_grey_vehiclecrew.paa" };
	};

	class TTT_helmet_silver_vehiclecrew : H_HelmetCrew_I {
		scope = 2;
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Fahrzeugcrew (Silber)";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_base\data\TTT_helmet_silver_vehiclecrew.paa" };
	};

	class TTT_helmet_yellow_vehiclecrew : H_HelmetCrew_I {
		scope = 2;
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Fahrzeugcrew (Gelb)";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_base\data\TTT_helmet_yellow_vehiclecrew.paa" };
	};

	/*
	#############################################################
	### Westen
	#############################################################
	*/
	// External class reference
	class Vest_NoCamo_Base;
    class V_PlateCarrier3_rgr : Vest_NoCamo_Base{ class ItemInfo; };	
    class V_PlateCarrier1_rgr : Vest_NoCamo_Base{ class ItemInfo; };
	class V_TacVest_brn;
	
	class TTT_Vest_Heavy_Base : V_PlateCarrier3_rgr {
		scope = 0;
		displayName = "$STR_TTT_Vest_Heavy_Base";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_base\data\vest_yellow_co.paa" };

		class ItemInfo : ItemInfo {
			hiddenSelections[] = { "camo" };
		};
	};

	class TTT_Vest_Lite_Base : V_PlateCarrier1_rgr {
		scope = 0;
		displayName = "$STR_TTT_Vest_Lite_Base";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_base\data\vest_yellow_co.paa" };

		class ItemInfo : ItemInfo {
			hiddenSelections[] = { "camo" };
		};
	};

	class TTT_Vest_Crew_Base : V_TacVest_brn {
		scope = 0;
		displayName = "$STR_TTT_Vest_Crew_Base";
	};
	
	class TTT_Vest_Crew_bronze : TTT_Vest_Crew_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Crew Weste Bronze";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_base\data\TTT_vest_bronze_co.paa"};
	};
	
	class TTT_Vest_Crew_Silver : TTT_Vest_Crew_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Crew Weste Silber";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_base\data\TTT_vest_silver_co.paa"};
	};
	
	class TTT_Vest_Crew_White : TTT_Vest_Crew_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Crew Weste Weiss";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_base\data\TTT_vest_white_co.paa"};
	};
};