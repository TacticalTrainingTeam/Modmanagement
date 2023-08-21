class CfgPatches {
	class TTT_Units_BW {
		units[] = {};
		weapons[] = {
			//Uniformen Tropentarn
			"TTT_Uniform_Yellow_BW_Tropentarn",
			"TTT_Uniform_Green_BW_Tropentarn",
			"TTT_Uniform_Brown_BW_Tropentarn",
			"TTT_Uniform_Red_BW_Tropentarn",
			"TTT_Uniform_Black_BW_Tropentarn",
			"TTT_Uniform_Violet_BW_Tropentarn",
			"TTT_Uniform_White_BW_Tropentarn",
			"TTT_Uniform_Blue_BW_Tropentarn",
			"TTT_Uniform_Grey_BW_Tropentarn",
			"TTT_Uniform_Gold_BW_Tropentarn",
			"TTT_Uniform_Silver_BW_Tropentarn",
			"TTT_Uniform_Orange_BW_Tropentarn",
			
			//Uniformen Flecktarn
			"TTT_Uniform_Yellow_BW_Flecktarn",
			"TTT_Uniform_Green_BW_Flecktarn",
			"TTT_Uniform_Brown_BW_Flecktarn",
			"TTT_Uniform_Red_BW_Flecktarn",
			"TTT_Uniform_Black_BW_Flecktarn",
			"TTT_Uniform_Blue_BW_Flecktarn",
			"TTT_Uniform_Violet_BW_Flecktarn",
			"TTT_Uniform_White_BW_Flecktarn",
			"TTT_Uniform_Grey_BW_Flecktarn",
			"TTT_Uniform_Gold_BW_Flecktarn",
			"TTT_Uniform_Silver_BW_Flecktarn",
			"TTT_Uniform_Orange_BW_Flecktarn",
			
			//Helme Tropentarn
			"TTT_Helmet_1_BW_Tropentarn",
			"TTT_Helmet_2_BW_Tropentarn",
			"TTT_Helmet_3_BW_Tropentarn",
			"TTT_Helmet_4_BW_Tropentarn",
			"TTT_Helmet_5_BW_Tropentarn",
			"TTT_Helmet_6_BW_Tropentarn",
			"TTT_Helmet_7_BW_Tropentarn",
			"TTT_Helmet_8_BW_Tropentarn",
			"TTT_Helmet_9_BW_Tropentarn",
			"TTT_Helmet_10_BW_Tropentarn",
			"TTT_Helmet_11_BW_Tropentarn",
			
			//Helme Flecktarn
			"TTT_Helmet_1_BW_Flecktarn",
			"TTT_Helmet_2_BW_Flecktarn",
			"TTT_Helmet_3_BW_Flecktarn",
			"TTT_Helmet_4_BW_Flecktarn",
			"TTT_Helmet_5_BW_Flecktarn",
			"TTT_Helmet_6_BW_Flecktarn",
			"TTT_Helmet_7_BW_Flecktarn",
			"TTT_Helmet_8_BW_Flecktarn",
			"TTT_Helmet_9_BW_Flecktarn",
			"TTT_Helmet_10_BW_Flecktarn",
			"TTT_Helmet_11_BW_Flecktarn"
			
		};
		requiredAddons[] = {"ttt_main"};
	};
};

class CfgWeapons {
    class UniformBase;
    class U_B_CombatUniform_mcam : UniformBase{ class ItemInfo; };	// External class reference
    class TTT_Helmet_Base;
	
	class TTT_Uniform_Base_BW : U_B_CombatUniform_mcam {
		scope = 0;
		displayName = "$STR_TTT_Uniform_Base_BW";
		picture = "\ttt_units_base\data\TTT_uniform_icon_bw.paa";
		model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F";
		
		class ItemInfo : ItemInfo
		{
			uniformClass = "TTT_Base_BW";
			containerClass = "Supply60";
		};
	};
	/*
	#############################################################
	### Uniformen
	#############################################################
	*/
	class TTT_Uniform_Yellow_BW_Tropentarn : TTT_Uniform_Base_BW {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Gelb (BW Tropentarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Yellow_BW_Tropentarn";
		};
	};
	
	class TTT_Uniform_Grey_BW_Tropentarn : TTT_Uniform_Base_BW {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Grau (BW Tropentarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Grey_BW_Tropentarn";
		};
	};

	class TTT_Uniform_Orange_BW_Tropentarn : TTT_Uniform_Base_BW {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Orange (BW Tropentarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Orange_Bw_Tropentarn";
		};
	}; 	
	
	class TTT_Uniform_Gold_BW_Tropentarn : TTT_Uniform_Base_BW {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Gold (BW Tropentarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Gold_BW_Tropentarn";
		};
	};
	
	class TTT_Uniform_Green_BW_Tropentarn : TTT_Uniform_Base_BW {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Gruen (BW Tropentarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Green_BW_Tropentarn";
		};
	};
	
	class TTT_Uniform_Brown_BW_Tropentarn : TTT_Uniform_Base_BW {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Braun (BW Tropentarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Brown_BW_Tropentarn";
		};
	};
	
	class TTT_Uniform_Black_BW_Tropentarn : TTT_Uniform_Base_BW {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Schwarz (BW Tropentarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Black_BW_Tropentarn";
		};
	};
	
	class TTT_Uniform_Red_BW_Tropentarn : TTT_Uniform_Base_BW {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Rot (BW Tropentarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Red_BW_Tropentarn";
		};
	};	
	
	class TTT_Uniform_Bronze_BW_Tropentarn : TTT_Uniform_Base_BW {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Bronze (BW Tropentarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Bronze_BW_Tropentarn";
		};
	};
	
	class TTT_Uniform_Blue_BW_Tropentarn : TTT_Uniform_Base_BW {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Blau (BW Tropentarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Blue_BW_Tropentarn";
		};
	};

	class TTT_Uniform_Violet_BW_Tropentarn : TTT_Uniform_Base_BW {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Violett (BW Tropentarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Violet_BW_Tropentarn";
		};
	};		
	
	class TTT_Uniform_White_BW_Tropentarn : TTT_Uniform_Base_BW {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Weiss (BW Tropentarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_White_BW_Tropentarn";
		};
	};
	
	class TTT_Uniform_Silver_BW_Tropentarn : TTT_Uniform_Base_BW {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Uniform Silber (BW Tropentarn)";
		ACE_GForceCoef = 0.55;
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Silver_BW_Tropentarn";
		};
	};
	
	/*
	#############################################################
	### Helme
	#############################################################
	*/
	class TTT_Helmet_1_BW_Tropentarn : TTT_Helmet_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Helm I (BW Tropentarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_1_bw_tropentarn.paa"};
	};
	
	class TTT_Helmet_2_BW_Tropentarn : TTT_Helmet_1_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm II (BW Tropentarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_2_bw_tropentarn.paa"};
	};
	
	class TTT_Helmet_3_BW_Tropentarn : TTT_Helmet_1_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm III (BW Tropentarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_3_bw_tropentarn.paa"};
	};
	
	class TTT_Helmet_4_BW_Tropentarn : TTT_Helmet_1_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm IV (BW Tropentarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_4_bw_tropentarn.paa"};
	};
	
	class TTT_Helmet_5_BW_Tropentarn : TTT_Helmet_1_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm V (BW Tropentarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_5_bw_tropentarn.paa"};
	};
	
	class TTT_Helmet_6_BW_Tropentarn : TTT_Helmet_1_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm VI (BW Tropentarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_6_bw_tropentarn.paa"};
	};
	class TTT_Helmet_7_BW_Tropentarn : TTT_Helmet_1_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm VII (BW Tropentarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_7_bw_tropentarn.paa"};
	};
	class TTT_Helmet_8_BW_Tropentarn : TTT_Helmet_1_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm VIII (BW Tropentarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_8_bw_tropentarn.paa"};
	};
	class TTT_Helmet_9_BW_Tropentarn : TTT_Helmet_1_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm IX (BW Tropentarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_9_bw_tropentarn.paa"};
	};
	class TTT_Helmet_10_BW_Tropentarn : TTT_Helmet_1_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm X (BW Tropentarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_10_bw_tropentarn.paa"};
	};
	class TTT_Helmet_11_BW_Tropentarn : TTT_Helmet_1_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm XI (BW Tropentarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_11_bw_tropentarn.paa"};
	};
	/*
	#############################################################
	### Uniformen
	#############################################################
	*/
	class TTT_Uniform_Yellow_BW_Flecktarn : TTT_Uniform_Yellow_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Gelb (Flecktarn)";
			
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Yellow_BW_Flecktarn";
		};
	};
	
	class TTT_Uniform_Grey_BW_Flecktarn : TTT_Uniform_Grey_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Grau (Flecktarn)";

        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Grey_BW_Flecktarn";
		};
	};
	
	class TTT_Uniform_Orange_BW_Flecktarn : TTT_Uniform_Orange_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Orange (BW Flecktarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Orange_Bw_Flecktarn";
		};
	}; 	
	
	class TTT_Uniform_Gold_BW_Flecktarn : TTT_Uniform_Gold_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Gold (Flecktarn)";

        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Gold_BW_Flecktarn";
		};
	};
	
	class TTT_Uniform_Green_BW_Flecktarn : TTT_Uniform_Green_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Gruen (Flecktarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Green_BW_Flecktarn";
		};
	};
	
	class TTT_Uniform_Brown_BW_Flecktarn : TTT_Uniform_Brown_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Braun (Flecktarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Brown_BW_Flecktarn";
		};
	};
	
	class TTT_Uniform_Black_BW_Flecktarn : TTT_Uniform_Black_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Schwarz (Flecktarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Black_BW_Flecktarn";
		};
	};
	
	class TTT_Uniform_Red_BW_Flecktarn : TTT_Uniform_Red_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Rot (Flecktarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Red_BW_Flecktarn";
		};
	};	
	
	class TTT_Uniform_Bronze_BW_Flecktarn : TTT_Uniform_Bronze_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Bronze (Flecktarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Bronze_BW_Flecktarn";
		};
	};
	
	class TTT_Uniform_Blue_BW_Flecktarn : TTT_Uniform_Blue_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Blau (Flecktarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Blue_BW_Flecktarn";
		};
	};	
	
	class TTT_Uniform_Violet_BW_Flecktarn : TTT_Uniform_Violet_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Violett (Flecktarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Violet_BW_Flecktarn";
		};
	};	
	
	class TTT_Uniform_White_BW_Flecktarn : TTT_Uniform_White_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Weiss (Flecktarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_White_BW_Flecktarn";
		};
	};
	
	class TTT_Uniform_Silver_BW_Flecktarn : TTT_Uniform_Silver_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Uniform Silber (Flecktarn)";
		
        class ItemInfo : ItemInfo {
			uniformClass = "TTT_Silver_BW_Flecktarn";
		};
	};
	
	/*
	#############################################################
	### Helme
	#############################################################
	*/
	class TTT_Helmet_1_BW_Flecktarn : TTT_Helmet_Base {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Helm I (BW Flecktarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_1_bw_flecktarn.paa"};
	};
	
	class TTT_Helmet_2_BW_Flecktarn : TTT_Helmet_1_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm II (BW Flecktarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_2_bw_flecktarn.paa"};
	};
	
	class TTT_Helmet_3_BW_Flecktarn : TTT_Helmet_1_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm III (BW Flecktarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_3_bw_flecktarn.paa"};
	};
	
	class TTT_Helmet_4_BW_Flecktarn : TTT_Helmet_1_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm IV (BW Flecktarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_4_bw_flecktarn.paa"};
	};
	
	class TTT_Helmet_5_BW_Flecktarn : TTT_Helmet_1_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm V (BW Flecktarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_5_bw_flecktarn.paa"};
	};
	
	class TTT_Helmet_6_BW_Flecktarn : TTT_Helmet_1_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm VI (BW Flecktarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_6_bw_flecktarn.paa"};
	};
	class TTT_Helmet_7_BW_Flecktarn : TTT_Helmet_1_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm VII (BW Flecktarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_7_bw_flecktarn.paa"};
	};
	class TTT_Helmet_8_BW_Flecktarn : TTT_Helmet_1_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm VIII (BW Flecktarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_8_bw_flecktarn.paa"};
	};
		class TTT_Helmet_9_BW_Flecktarn : TTT_Helmet_1_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm IX (BW Flecktarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_9_bw_flecktarn.paa"};
	};
		class TTT_Helmet_10_BW_Flecktarn : TTT_Helmet_1_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm X (BW Flecktarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_10_bw_flecktarn.paa"};
	};
		class TTT_Helmet_11_BW_Flecktarn : TTT_Helmet_1_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Helm XI (BW Flecktarn)";
		hiddenSelectionsTextures[] = {"\ttt_units_bw\data\TTT_helmet_11_bw_flecktarn.paa"};
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
	
	/*
	#############################################################
	### Basis-Klassen
	#############################################################
	*/

	//Basis-Klasse fuer Basisklassen
	class TTT_Base_BW : B_Soldier_base_F {
		_generalMacro = "B_Soldier_base_F";
		author = "$STR_Tactical_Training_Team";
		displayName = "Basis-Klasse BW";
		scope = 0;
		icon = "iconMan";
		uniformAccessories[] = {};
		uniformClass = "TTT_Uniform_Base_Bw";	
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
	//Flecktarn
	class TTT_Yellow_BW_Flecktarn : TTT_Base_BW {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Gelb Flecktarn";
		scope = 1;
		uniformClass = "TTT_Uniform_Yellow_BW_Flecktarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_yellow_bw_flecktarn.paa" };
		//hiddenSelectionsMaterials[] = {"\ttt_units_base\data\TTT_uniform.rvmat"};
	};

	class TTT_Grey_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Grau Flecktarn";
		uniformClass = "TTT_Uniform_Grey_BW_Flecktarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_grey_bw_flecktarn.paa" };
	};

	class TTT_Gold_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Gold Flecktarn";
		uniformClass = "TTT_Uniform_Gold_BW_Flecktarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_gold_bw_flecktarn.paa" };
	};

	class TTT_Green_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Gruen Flecktarn";
		uniformClass = "TTT_Uniform_Green_BW_Flecktarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_green_bw_flecktarn.paa" };
	};

	class TTT_Brown_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Braun Flecktarn";
		uniformClass = "TTT_Uniform_Brown_BW_Flecktarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_brown_bw_flecktarn.paa" };
	};

	class TTT_Black_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Schwarz Flecktarn";
		uniformClass = "TTT_Uniform_Black_BW_Flecktarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_black_bw_flecktarn.paa" };
	};

	class TTT_Red_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Rot Flecktarn";
		uniformClass = "TTT_Uniform_Red_BW_Flecktarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_red_bw_flecktarn.paa" };
	};

	class TTT_Bronze_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Bronze Flecktarn";
		uniformClass = "TTT_Uniform_Bronze_BW_Flecktarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_bronze_bw_flecktarn.paa" };
	};

	class TTT_Blue_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Blau Flecktarn";
		uniformClass = "TTT_Uniform_Blue_BW_Flecktarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_blue_bw_flecktarn.paa" };
	};

	class TTT_Violet_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Violett Flecktarn";
		uniformClass = "TTT_Uniform_Violet_BW_Flecktarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_violet_bw_flecktarn.paa" };
	};

	class TTT_White_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Weiss Flecktarn";
		uniformClass = "TTT_Uniform_White_BW_Flecktarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_white_bw_flecktarn.paa" };
	};

	class TTT_Silver_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Silber Flecktarn";
		uniformClass = "TTT_Uniform_Silver_BW_Flecktarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
	};
	class TTT_Orange_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Orange Flecktarn";
		uniformClass = "TTT_Uniform_Orange_BW_Flecktarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_orange_bw_flecktarn.paa" };
	};
	//Tropentarn
	class TTT_Yellow_BW_Tropentarn : TTT_Base_BW {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Gelb Tropentarn";
		scope = 1;
		uniformClass = "TTT_Uniform_Yellow_BW_Tropentarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_yellow_bw_tropentarn.paa" };
	};

	class TTT_Grey_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Grau Tropentarn";
		uniformClass = "TTT_Uniform_Grey_BW_Tropentarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_grey_bw_tropentarn.paa" };
	};

	class TTT_Gold_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Gold Tropentarn";
		uniformClass = "TTT_Uniform_Gold_BW_Tropentarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_gold_bw_tropentarn.paa" };
	};

	class TTT_Green_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Gruen Tropentarn";
		uniformClass = "TTT_Uniform_Green_BW_Tropentarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_green_bw_tropentarn.paa" };
	};

	class TTT_Brown_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Braun Tropentarn";
		uniformClass = "TTT_Uniform_Brown_BW_Tropentarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_brown_bw_tropentarn.paa" };
	};

	class TTT_Black_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Schwarz Tropentarn";
		uniformClass = "TTT_Uniform_Black_BW_Tropentarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
	};

	class TTT_Red_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Rot Tropentarn";
		uniformClass = "TTT_Uniform_Red_BW_Tropentarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_red_bw_tropentarn.paa" };
	};

	class TTT_Bronze_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Bronze Tropentarn";
		uniformClass = "TTT_Uniform_Bronze_BW_Tropentarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_bronze_bw_tropentarn.paa" };
	};

	class TTT_Blue_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Blau Tropentarn";
		uniformClass = "TTT_Uniform_Blue_BW_Tropentarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_blue_bw_tropentarn.paa" };
	};

	class TTT_Violet_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Violett Tropentarn";
		uniformClass = "TTT_Uniform_Violet_BW_Tropentarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_violet_bw_tropentarn.paa" };
	};

	class TTT_White_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Weiss Tropentarn";
		uniformClass = "TTT_Uniform_White_BW_Tropentarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_white_bw_tropentarn.paa" };
	};

	class TTT_Silver_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Silber Tropentarn";
		uniformClass = "TTT_Uniform_Silver_BW_Tropentarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
	};
	class TTT_Orange_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
		author = "$STR_Tactical_Training_Team";
		displayName = "Klasse Orange Tropentarn";
		uniformClass = "TTT_Uniform_Orange_BW_Tropentarn";
		hiddenSelectionsTextures[] = { "\ttt_units_bw\data\TTT_uniform_orange_bw_tropentarn.paa" };
	};
};