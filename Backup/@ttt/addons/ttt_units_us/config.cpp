
class CfgPatches {
	class TTT_Units_US {
		units[] = {
			"TTT_backpack_radio_brown_us_desert",
			"TTT_backpack_radio_bronze_us_desert",
			"TTT_backpack_radio_green_us_desert",
			"TTT_backpack_radio_grey_us_desert",
			"TTT_backpack_radio_gold_us_desert",
			"TTT_backpack_radio_platinum_us_desert",
			"TTT_backpack_radio_silver_us_desert",
			"TTT_backpack_radio_white_us_desert",
			"TTT_backpack_radio_yellow_us_desert"
		};
		weapons[] = {
			//Uniformen Desert
			"TTT_Uniform_Yellow_US_Desert",
			"TTT_Uniform_Green_US_Desert",
			"TTT_Uniform_Brown_US_Desert",
			"TTT_Uniform_Red_US_Desert",
			"TTT_Uniform_Black_US_Desert",
			"TTT_Uniform_Violet_US_Desert",
			"TTT_Uniform_White_US_Desert",
			"TTT_Uniform_Blue_US_Desert",
			"TTT_Uniform_Grey_US_Desert",
			"TTT_Uniform_Gold_US_Desert",
			"TTT_Uniform_Silver_US_Desert",
			"TTT_Uniform_Orange_US_Desert", 

			//Uniformen Woodland
			"TTT_Uniform_Yellow_US_Woodland",
			"TTT_Uniform_Green_US_Woodland",
			"TTT_Uniform_Brown_US_Woodland",
			"TTT_Uniform_Red_US_Woodland",
			"TTT_Uniform_Black_US_Woodland",
			"TTT_Uniform_Blue_US_Woodland",
			"TTT_Uniform_Violet_US_Woodland",
			"TTT_Uniform_White_US_Woodland",
			"TTT_Uniform_Grey_US_Woodland",
			"TTT_Uniform_Gold_US_Woodland",
			"TTT_Uniform_Silver_US_Woodland",
			"TTT_Uniform_Orange_US_Woodland",
			
			//Helme Desert
			"TTT_Helmet_1_US_Desert",
			"TTT_Helmet_2_US_Desert",
			"TTT_Helmet_3_US_Desert",
			"TTT_Helmet_4_US_Desert",
			"TTT_Helmet_5_US_Desert",
			"TTT_Helmet_6_US_Desert",
			"TTT_Helmet_7_US_Desert",
			"TTT_Helmet_8_US_Desert",
			
			//Helme Woodland
			"TTT_Helmet_1_US_Woodland",
			"TTT_Helmet_2_US_Woodland",
			"TTT_Helmet_3_US_Woodland",
			"TTT_Helmet_4_US_Woodland",
			"TTT_Helmet_5_US_Woodland",
			"TTT_Helmet_6_US_Woodland",
			"TTT_Helmet_7_US_Woodland",
			"TTT_Helmet_8_US_Woodland",

			//Westen Desert
			"TTT_Vest_Heavy_Yellow_US_Desert",
			"TTT_Vest_Lite_Yellow_US_Desert",
			"TTT_Vest_Heavy_Green_US_Desert",
			"TTT_Vest_Lite_Green_US_Desert",
			"TTT_Vest_Heavy_Brown_US_Desert",
			"TTT_Vest_Lite_Brown_US_Desert",
			"TTT_Vest_Heavy_Blue_US_Desert",
			"TTT_Vest_Lite_Blue_US_Desert",
			"TTT_Vest_Heavy_Red_US_Desert",
			"TTT_Vest_Lite_Red_US_Desert",
			"TTT_Vest_Heavy_Black_US_Desert",
			"TTT_Vest_Lite_Black_US_Desert",
			"TTT_Vest_Heavy_Violet_US_Desert",
			"TTT_Vest_Lite_Violet_US_Desert",
			"TTT_Vest_Heavy_Gold_US_Desert",
			"TTT_Vest_Lite_Gold_US_Desert",
			"TTT_Vest_Heavy_Grey_US_Desert",
			"TTT_Vest_Lite_Grey_US_Desert",		
			"TTT_Vest_Heavy_Orange_US_Desert",			
			"TTT_Vest_Lite_Orange_US_Desert",
			"TTT_Vest_Crew_US_Desert",
			
			//Westen Woodland
			"TTT_Vest_Heavy_Yellow_US_Woodland",
			"TTT_Vest_Lite_Yellow_US_Woodland",
			"TTT_Vest_Heavy_Green_US_Woodland",
			"TTT_Vest_Lite_Green_US_Woodland",
			"TTT_Vest_Heavy_Brown_US_Woodland",
			"TTT_Vest_Lite_Brown_US_Woodland",
			"TTT_Vest_Heavy_Blue_US_Woodland",
			"TTT_Vest_Lite_Blue_US_Woodland",
			"TTT_Vest_Heavy_Red_US_Woodland",
			"TTT_Vest_Lite_Red_US_Woodland",
			"TTT_Vest_Heavy_Black_US_Woodland",
			"TTT_Vest_Lite_Black_US_Woodland",
			"TTT_Vest_Heavy_Violet_US_Woodland",
			"TTT_Vest_Lite_Violet_US_Woodland",
			"TTT_Vest_Heavy_Gold_US_Woodland",
			"TTT_Vest_Lite_Gold_US_Woodland",
			"TTT_Vest_Heavy_Grey_US_Woodland",
			"TTT_Vest_Lite_Grey_US_Woodland",
			"TTT_Vest_Heavy_Orange_US_Woodland",
			"TTT_Vest_Lite_Orange_US_Woodland",
			"TTT_Vest_Crew_US_Woodland"
		};
		requiredAddons[] = {"ttt_main", "ttt_units_base"};
	};
};

class CfgWeapons {
    class UniformBase;
    class U_B_CombatUniform_mcam : UniformBase{ class ItemInfo; };	// External class reference
    class TTT_Vest_Heavy_Base;	// External class reference
    class TTT_Vest_Lite_Base;	// External class reference
    class TTT_Vest_Crew_Base;	// External class reference
    class TTT_Helmet_Base;		// External class reference
	class TTT_Uniform_Base_US : U_B_CombatUniform_mcam {
		scope = 0;
		displayName = "TTT Uniform Base US";
		picture = "\ttt_a3\ttt_units_base\data\TTT_uniform_icon_us.paa";
		model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F.p3d";
		
		class ItemInfo : ItemInfo {
			uniformClass = "TTT_Base_US";
			containerClass = "Supply60";
		};
	};
	
	/*
	#############################################################
	### Uniformen
	#############################################################
	*/
	class TTT_Uniform_Yellow_US_Desert : TTT_Uniform_Base_US {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Gelb (US Desert)";
		
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Yellow_US_Desert";
		};
	};
	
	class TTT_Uniform_Grey_US_Desert : TTT_Uniform_Base_US {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Grau (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Grey_US_Desert";
		};
	};
	
	class TTT_Uniform_Gold_US_Desert : TTT_Uniform_Base_US {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Gold (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Gold_US_Desert";
		};
	};
	
	class TTT_Uniform_Green_US_Desert : TTT_Uniform_Base_US {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Gruen (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Green_US_Desert";
		};
	};
	
	class TTT_Uniform_Brown_US_Desert : TTT_Uniform_Base_US {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Braun (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Brown_US_Desert";
		};
	};
	
	class TTT_Uniform_Black_US_Desert : TTT_Uniform_Base_US {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Schwarz (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Black_US_Desert";
		};
	};
	
	class TTT_Uniform_Red_US_Desert : TTT_Uniform_Base_US {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Rot (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Red_US_Desert";
		};
	};	
	
	class TTT_Uniform_Bronze_US_Desert : TTT_Uniform_Base_US {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Bronze (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Bronze_US_Desert";
		};
	};
	
	class TTT_Uniform_Blue_US_Desert : TTT_Uniform_Base_US {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Blau (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Blue_US_Desert";
		};
	};

	class TTT_Uniform_Violet_US_Desert : TTT_Uniform_Base_US {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Violett (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Violet_US_Desert";
		};
	};		
	
	class TTT_Uniform_White_US_Desert : TTT_Uniform_Base_US {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Weiss (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_White_US_Desert";
		};
	};
	
	class TTT_Uniform_Silver_US_Desert : TTT_Uniform_Base_US {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Silber (US Desert)";
		ACE_GForceCoef = 0.55;
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Silver_US_Desert";
		};
	};
	class TTT_Uniform_Orange_US_Desert : TTT_Uniform_Base_US {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Orange (US Desert)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Orange_Us_Desert";
		};
	}; 
	
	/*
	#############################################################
	### Helme
	#############################################################
	*/
	class TTT_Helmet_1_US_Desert : TTT_Helmet_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Helm I (US Desert)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_helmet_1_us_desert.paa"};
	};
	
	class TTT_Helmet_2_US_Desert : TTT_Helmet_1_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm II (US Desert)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_helmet_2_us_desert.paa"};
	};
	
	class TTT_Helmet_3_US_Desert : TTT_Helmet_1_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm III (US Desert)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_helmet_3_us_desert.paa"};
	};
	
	class TTT_Helmet_4_US_Desert : TTT_Helmet_1_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm IV (US Desert)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_helmet_4_us_desert.paa"};
	};
	
	class TTT_Helmet_5_US_Desert : TTT_Helmet_1_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm V (US Desert)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_helmet_5_us_desert.paa"};
	};
	
	class TTT_Helmet_6_US_Desert : TTT_Helmet_1_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm VI (US Desert)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_helmet_6_us_desert.paa"};
	};
	
	class TTT_Helmet_7_US_Desert : TTT_Helmet_1_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm VII (US Desert)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_helmet_7_us_desert.paa"};
	};
	
	class TTT_Helmet_8_US_Desert : TTT_Helmet_1_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm VIII (US Desert)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_helmet_8_us_desert.paa"};
	};
	
	/*
	#############################################################
	### Westen
	#############################################################
	*/
	class TTT_Vest_Heavy_Yellow_US_Desert : TTT_Vest_Heavy_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Schwere Weste Gelb (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_yellow_us_desert_co.paa"};
	};
	
	class TTT_Vest_Lite_Yellow_US_Desert : TTT_Vest_Lite_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Leichte Weste Gelb (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_yellow_us_desert_co.paa"};
	};
	
	class TTT_Vest_Heavy_Blue_US_Desert : TTT_Vest_Heavy_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Schwere Weste Blau (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_blue_us_desert_co.paa"};
	};
	
	class TTT_Vest_Lite_Blue_US_Desert : TTT_Vest_Lite_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Leichte Weste Blau (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_blue_us_desert_co.paa"};
	};
	
	class TTT_Vest_Heavy_Black_US_Desert : TTT_Vest_Heavy_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Schwere Weste Schwarz (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_black_us_desert_co.paa"};
	};
	
	class TTT_Vest_Lite_Black_US_Desert : TTT_Vest_Lite_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Leichte Weste Schwarz (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_black_us_desert_co.paa"};
	};
	
	class TTT_Vest_Heavy_Brown_US_Desert : TTT_Vest_Heavy_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Schwere Weste Braun (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_brown_us_desert_co.paa"};
	};
	
	class TTT_Vest_Lite_Brown_US_Desert : TTT_Vest_Lite_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Leichte Weste Braun (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_brown_us_desert_co.paa"};
	};
	
	class TTT_Vest_Heavy_Gold_US_Desert : TTT_Vest_Heavy_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Schwere Weste Gold (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_gold_us_desert_co.paa"};
	};
	
	class TTT_Vest_Lite_Gold_US_Desert : TTT_Vest_Lite_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Leichte Weste Gold (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_gold_us_desert_co.paa"};
	};
	
	class TTT_Vest_Heavy_Green_US_Desert : TTT_Vest_Heavy_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Schwere Weste Gruen (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_green_us_desert_co.paa"};
	};
	
	class TTT_Vest_Lite_Green_US_Desert : TTT_Vest_Lite_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Leichte Weste Gruen (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_green_us_desert_co.paa"};
	};
	
	class TTT_Vest_Heavy_Grey_US_Desert : TTT_Vest_Heavy_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Schwere Weste Grau (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_grey_us_desert_co.paa"};
	};
	
	class TTT_Vest_Lite_Grey_US_Desert : TTT_Vest_Lite_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Leichte Weste Grau (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_grey_us_desert_co.paa"};
	};
	
	class TTT_Vest_Heavy_Red_US_Desert : TTT_Vest_Heavy_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Schwere Weste Rot (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_red_us_desert_co.paa"};
	};
	
	class TTT_Vest_Lite_Red_US_Desert : TTT_Vest_Lite_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Leichte Weste Rot (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_red_us_desert_co.paa"};
	};
	
	class TTT_Vest_Heavy_Violet_US_Desert : TTT_Vest_Heavy_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Schwere Weste Violett (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_violet_us_desert_co.paa"};
	};
	
	class TTT_Vest_Lite_Violet_US_Desert : TTT_Vest_Lite_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Leichte Weste Violett (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_violet_us_desert_co.paa"};
	};

	class TTT_Vest_Heavy_Orange_US_Desert : TTT_Vest_Heavy_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Schwere Weste Orange (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_orange_us_desert_co.paa"};
	};
	
	class TTT_Vest_Lite_Orange_US_Desert : TTT_Vest_Lite_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Leichte Weste Orange (US Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_orange_us_desert_co.paa"};
	}; 	
	
	class TTT_Vest_Crew_US_Desert : TTT_Vest_Crew_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Crew Weste (US Desert)";
	};
	
	/*
	#############################################################
	### Uniformen
	#############################################################
	*/
	class TTT_Uniform_Yellow_US_Woodland : TTT_Uniform_Yellow_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Gelb (US Woodland)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Yellow_US_Woodland";
		};
	};
	
	class TTT_Uniform_Grey_US_Woodland : TTT_Uniform_Grey_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Grau (US Woodland)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Grey_US_Woodland";
		};
	};
	
	class TTT_Uniform_Gold_US_Woodland : TTT_Uniform_Gold_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Gold (US Woodland)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Gold_US_Woodland";
		};
	};
	
	class TTT_Uniform_Green_US_Woodland : TTT_Uniform_Green_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Gruen (US Woodland)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Green_US_Woodland";
		};
	};
	
	class TTT_Uniform_Brown_US_Woodland : TTT_Uniform_Brown_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Braun (US Woodland)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Brown_US_Woodland";
		};
	};
	
	class TTT_Uniform_Black_US_Woodland : TTT_Uniform_Black_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Schwarz (US Woodland)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Black_US_Woodland";
		};
	};
	
	class TTT_Uniform_Red_US_Woodland : TTT_Uniform_Red_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Rot (US Woodland)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Red_US_Woodland";
		};
	};	
	
	class TTT_Uniform_Bronze_US_Woodland : TTT_Uniform_Bronze_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Bronze (US Woodland)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Bronze_US_Woodland";
		};
	};
	
	class TTT_Uniform_Blue_US_Woodland : TTT_Uniform_Blue_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Blau (US Woodland)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Blue_US_Woodland";
		};
	};	
	
	class TTT_Uniform_Violet_US_Woodland : TTT_Uniform_Violet_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Violett (US Woodland)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Violet_US_Woodland";
		};
	};	
	
	class TTT_Uniform_White_US_Woodland : TTT_Uniform_White_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Weiss (US Woodland)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_White_US_Woodland";
		};
	};
	
	class TTT_Uniform_Silver_US_Woodland : TTT_Uniform_Silver_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Silber (US Woodland)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Silver_US_Woodland";
		};
	};
	
	class TTT_Uniform_Orange_US_Woodland : TTT_Uniform_Silver_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Orange (US Woodland)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Orange_US_Woodland";
		};
	};
		
	/*
	#############################################################
	### Helme
	#############################################################
	*/
	class TTT_Helmet_1_US_Woodland : TTT_Helmet_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Helm I (US Woodland)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_helmet_1_us_woodland.paa"};
	};
	
	class TTT_Helmet_2_US_Woodland : TTT_Helmet_1_US_Woodland {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm II (US Woodland)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_helmet_2_us_woodland.paa"};
	};
	
	class TTT_Helmet_3_US_Woodland : TTT_Helmet_1_US_Woodland {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm III (US Woodland)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_helmet_3_us_woodland.paa"};
	};
	
	class TTT_Helmet_4_US_Woodland : TTT_Helmet_1_US_Woodland {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm IV (US Woodland)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_helmet_4_us_woodland.paa"};
	};
	
	class TTT_Helmet_5_US_Woodland : TTT_Helmet_1_US_Woodland {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm V (US Woodland)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_helmet_5_us_woodland.paa"};
	};
	
	class TTT_Helmet_6_US_Woodland : TTT_Helmet_1_US_Woodland {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm VI (US Woodland)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_helmet_6_us_woodland.paa"};
	};
	
	class TTT_Helmet_7_US_Woodland : TTT_Helmet_1_US_Woodland {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm VII (US Woodland)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_helmet_7_us_woodland.paa"};
	};
	
	class TTT_Helmet_8_US_Woodland : TTT_Helmet_1_US_Woodland {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm VIII (US Woodland)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_helmet_8_us_woodland.paa"};
	};
	
	/*
	#############################################################
	### Westen
	#############################################################
	*/
	
	class TTT_Vest_Heavy_Yellow_US_Woodland : TTT_Vest_Heavy_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Schwere Weste Gelb (US Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_yellow_us_woodland_co.paa"};
	};
	
	class TTT_Vest_Lite_Yellow_US_Woodland : TTT_Vest_Lite_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Leichte Weste Gelb (US Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_yellow_us_woodland_co.paa"};
	};
	
	class TTT_Vest_Heavy_Blue_US_Woodland : TTT_Vest_Heavy_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Schwere Weste Blau (US Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_blue_us_woodland_co.paa"};
	};
	
	class TTT_Vest_Lite_Blue_US_Woodland : TTT_Vest_Lite_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Leichte Weste Blau (US Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_blue_us_woodland_co.paa"};
	};
	
	class TTT_Vest_Heavy_Black_US_Woodland : TTT_Vest_Heavy_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Schwere Weste Schwarz (US Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_black_us_woodland_co.paa"};
	};
	
	class TTT_Vest_Lite_Black_US_Woodland : TTT_Vest_Lite_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Leichte Weste Schwarz (US Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_black_us_woodland_co.paa"};
	};
	
	class TTT_Vest_Heavy_Brown_US_Woodland : TTT_Vest_Heavy_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Schwere Weste Braun (US Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_brown_us_woodland_co.paa"};
	};
	
	class TTT_Vest_Lite_Brown_US_Woodland : TTT_Vest_Lite_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Leichte Weste Braun (US Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_brown_us_woodland_co.paa"};
	};
	
	class TTT_Vest_Heavy_Gold_US_Woodland : TTT_Vest_Heavy_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Schwere Weste Gold (US Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_gold_us_woodland_co.paa"};
	};
	
	class TTT_Vest_Lite_Gold_US_Woodland : TTT_Vest_Lite_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Leichte Weste Gold (US Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_gold_us_woodland_co.paa"};
	};
	
	class TTT_Vest_Heavy_Green_US_Woodland : TTT_Vest_Heavy_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Schwere Weste Gruen (US Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_green_us_woodland_co.paa"};
	};
	
	class TTT_Vest_Lite_Green_US_Woodland : TTT_Vest_Lite_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Leichte Weste Gruen (US Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_green_us_woodland_co.paa"};
	};
	
	class TTT_Vest_Heavy_Grey_US_Woodland : TTT_Vest_Heavy_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Schwere Weste Grau (US Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_grey_us_woodland_co.paa"};
	};
	
	class TTT_Vest_Lite_Grey_US_Woodland : TTT_Vest_Lite_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Leichte Weste Grau (US Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_grey_us_woodland_co.paa"};
	};
	
	class TTT_Vest_Heavy_Red_US_Woodland : TTT_Vest_Heavy_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Schwere Weste Rot (US Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_red_us_woodland_co.paa"};
	};
	
	class TTT_Vest_Lite_Red_US_Woodland : TTT_Vest_Lite_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Leichte Weste Rot (US Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_red_us_woodland_co.paa"};
	};
	
	class TTT_Vest_Heavy_Violet_US_Woodland : TTT_Vest_Heavy_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Schwere Weste Violett (US Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_violet_us_woodland_co.paa"};
	};
	
	class TTT_Vest_Lite_Violet_US_Woodland : TTT_Vest_Lite_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Leichte Weste Violett (US Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_violet_us_woodland_co.paa"};
	};
	
	class TTT_Vest_Heavy_Orange_US_Woodland : TTT_Vest_Heavy_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Schwere Weste Orange (US Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_orange_us_woodland_co.paa"};
	};
	
	class TTT_Vest_Lite_Orange_US_Woodland : TTT_Vest_Lite_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Leichte Weste Orange (US Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_us\data\TTT_vest_orange_us_woodland_co.paa"};
	};
	
	class TTT_Vest_Crew_US_Woodland : TTT_Vest_Crew_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Crew Weste (US Woodland)";
	};
};

class CfgVehicles {
	/*
	#############################################################
	### External class references
	#############################################################
	*/
	class B_Soldier_base_F;			
	class B_Helipilot_F;

	class TTT_backpack_radio_base_coyote;
	
	/*
	#############################################################
	### Basis-Klassen
	#############################################################
	*/

	//Basis-Klasse fuer Basisklassen
	class TTT_Base_US : B_Soldier_base_F {
		_generalMacro = "B_Soldier_base_F";
		author = "$STR_Tactical_Training_Team";
		displayName = "Basis-Klasse US";
		scope = 0;
		icon = "iconMan";
		uniformAccessories[] = {};
		uniformClass = "TTT_Uniform_Base_Us";	
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = { "Camo", "insignia" }; //Camo = Standardskin der Uniform; insignia = Rangabzeichen (linker Arm);
		items[] = {};
		respawnItems[] = {};
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
	};

	/*
	#############################################################
	### Basis-Klassen
	#############################################################
	*/
	//Woodland
	class TTT_Yellow_US_Woodland : TTT_Base_US {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Gelb Woodland";
		scope = 1;
		uniformClass = "TTT_Uniform_Yellow_US_Woodland";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_yellow_US_Woodland.paa" };
		//hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
	};

	class TTT_Grey_US_Woodland : TTT_Yellow_US_Woodland {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Grau Woodland";
		uniformClass = "TTT_Uniform_Grey_US_Woodland";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_grey_US_Woodland.paa" };
	};

	class TTT_Gold_US_Woodland : TTT_Yellow_US_Woodland {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Gold Woodland";
		uniformClass = "TTT_Uniform_Gold_US_Woodland";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_gold_US_Woodland.paa" };
	};

	class TTT_Green_US_Woodland : TTT_Yellow_US_Woodland {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Gruen Woodland";
		uniformClass = "TTT_Uniform_Green_US_Woodland";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_green_US_Woodland.paa" };
	};

	class TTT_Brown_US_Woodland : TTT_Yellow_US_Woodland {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Braun Woodland";
		uniformClass = "TTT_Uniform_Brown_US_Woodland";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_brown_US_Woodland.paa" };
	};

	class TTT_Black_US_Woodland : TTT_Yellow_US_Woodland {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Schwarz Woodland";
		uniformClass = "TTT_Uniform_Black_US_Woodland";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_black_US_Woodland.paa" };
	};

	class TTT_Red_US_Woodland : TTT_Yellow_US_Woodland {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Rot Woodland";
		uniformClass = "TTT_Uniform_Red_US_Woodland";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_red_US_Woodland.paa" };
	};

	class TTT_Bronze_US_Woodland : TTT_Yellow_US_Woodland {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Bronze Woodland";
		uniformClass = "TTT_Uniform_Bronze_US_Woodland";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_bronze_US_Woodland.paa" };
	};

	class TTT_Blue_US_Woodland : TTT_Yellow_US_Woodland {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Blau Woodland";
		uniformClass = "TTT_Uniform_Blue_US_Woodland";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_blue_US_Woodland.paa" };
	};

	class TTT_Violet_US_Woodland : TTT_Yellow_US_Woodland {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Violett Woodland";
		uniformClass = "TTT_Uniform_Violet_US_Woodland";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_violet_US_Woodland.paa" };
	};

	class TTT_White_US_Woodland : TTT_Yellow_US_Woodland {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Weiss Woodland";
		uniformClass = "TTT_Uniform_White_US_Woodland";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_white_US_Woodland.paa" };
	};

	class TTT_Silver_US_Woodland : TTT_Yellow_US_Woodland {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Silber Woodland";
		uniformClass = "TTT_Uniform_Silver_US_Woodland";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_silver_US_Woodland.paa" };
	};
	class TTT_Orange_US_Woodland : TTT_Yellow_US_Woodland {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Orange Woodland";
		uniformClass = "TTT_Uniform_Orange_US_Woodland";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_orange_US_Woodland.paa" };
	};
	//Desert
	class TTT_Yellow_US_Desert : TTT_Base_US {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Gelb Desert";
		scope = 1;
		uniformClass = "TTT_Uniform_Yellow_US_Desert";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_yellow_US_Desert.paa" };
	};

	class TTT_Grey_US_Desert : TTT_Yellow_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Grau Desert";
		uniformClass = "TTT_Uniform_Grey_US_Desert";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_grey_US_Desert.paa" };
	};

	class TTT_Gold_US_Desert : TTT_Yellow_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Gold Desert";
		uniformClass = "TTT_Uniform_Gold_US_Desert";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_gold_US_Desert.paa" };
	};

	class TTT_Green_US_Desert : TTT_Yellow_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Gruen Desert";
		uniformClass = "TTT_Uniform_Green_US_Desert";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_green_US_Desert.paa" };
	};

	class TTT_Brown_US_Desert : TTT_Yellow_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Braun Desert";
		uniformClass = "TTT_Uniform_Brown_US_Desert";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_brown_US_Desert.paa" };
	};

	class TTT_Black_US_Desert : TTT_Yellow_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Schwarz Desert";
		uniformClass = "TTT_Uniform_Black_US_Desert";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_black_US_Desert.paa" };
	};

	class TTT_Red_US_Desert : TTT_Yellow_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Rot Desert";
		uniformClass = "TTT_Uniform_Red_US_Desert";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_red_US_Desert.paa" };
	};

	class TTT_Bronze_US_Desert : TTT_Yellow_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Bronze Desert";
		uniformClass = "TTT_Uniform_Bronze_US_Desert";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_bronze_US_Desert.paa" };
	};

	class TTT_Blue_US_Desert : TTT_Yellow_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Blau Desert";
		uniformClass = "TTT_Uniform_Blue_US_Desert";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_blue_US_Desert.paa" };
	};

	class TTT_Violet_US_Desert : TTT_Yellow_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Violett Desert";
		uniformClass = "TTT_Uniform_Violet_US_Desert";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_violet_US_Desert.paa" };
	};

	class TTT_White_US_Desert : TTT_Yellow_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Weiss Desert";
		uniformClass = "TTT_Uniform_White_US_Desert";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_white_US_Desert.paa" };
	};

	class TTT_Silver_US_Desert : TTT_Yellow_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Silber Desert";
		uniformClass = "TTT_Uniform_Silver_US_Desert";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_silver_US_Desert.paa" };
	};
	class TTT_Orange_US_Desert : TTT_Yellow_US_Desert {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Orange Desert";
		uniformClass = "TTT_Uniform_Orange_US_Desert";
		hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_orange_US_Desert.paa" };
	};

	/*
	#############################################################
	### Rucksäcke
	#############################################################
	*/
	class TTT_backpack_radio_brown_us_desert : TTT_backpack_radio_base_coyote {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Funk Rucksack Braun (US Desert)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_US\data\TTT_backpack_radio_brown_us_desert_co.paa"};
	};
	
	class TTT_backpack_radio_bronze_us_desert : TTT_backpack_radio_base_coyote {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Funk Rucksack Bronze (US Desert)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_US\data\TTT_backpack_radio_bronze_us_desert_co.paa"};
	};
	
	class TTT_backpack_radio_green_us_desert : TTT_backpack_radio_base_coyote {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Funk Rucksack Gruen (US Desert)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_US\data\TTT_backpack_radio_green_us_desert_co.paa"};
	};
	
	class TTT_backpack_radio_grey_us_desert : TTT_backpack_radio_base_coyote {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Funk Rucksack Grau (US Desert)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_US\data\TTT_backpack_radio_grey_us_desert_co.paa"};
	};
	
	class TTT_backpack_radio_gold_us_desert : TTT_backpack_radio_base_coyote {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Funk Rucksack Gold (US Desert)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_US\data\TTT_backpack_radio_gold_us_desert_co.paa"};
	};
	
	class TTT_backpack_radio_platinum_us_desert : TTT_backpack_radio_base_coyote {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Funk Rucksack Platin (US Desert)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_US\data\TTT_backpack_radio_platinum_us_desert_co.paa"};
	};
	
	class TTT_backpack_radio_silver_us_desert : TTT_backpack_radio_base_coyote {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Funk Rucksack Silber (US Desert)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_US\data\TTT_backpack_radio_silver_us_desert_co.paa"};
	};
	
	class TTT_backpack_radio_white_us_desert : TTT_backpack_radio_base_coyote {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Funk Rucksack Weiss (US Desert)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_US\data\TTT_backpack_radio_white_us_desert_co.paa"};
	};
	
	class TTT_backpack_radio_yellow_us_desert : TTT_backpack_radio_base_coyote {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Funk Rucksack Gelb (US Desert)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units_US\data\TTT_backpack_radio_yellow_us_desert_co.paa"};
	};
};