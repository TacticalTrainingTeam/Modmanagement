class CfgPatches {
	class TTT_Berets {
		requiredAddons[] = {"ttt_main", "A3_Characters_F", "A3_Weapons_F"};
		units[] = {
			"TTT_Beret_Item_Blue",
			"TTT_Beret_Item_Brown",
			"TTT_Beret_Item_Bronze",
			"TTT_Beret_Item_Yellow",
			"TTT_Beret_Item_Gold",
			"TTT_Beret_Item_Grey",
			"TTT_Beret_Item_Green",
			"TTT_Beret_Item_Logo",
			"TTT_Beret_Item_Platinum",
			"TTT_Beret_Item_Red",
			"TTT_Beret_Item_Black",
			"TTT_Beret_Item_Silver",
			"TTT_Beret_Item_Violet",
			"TTT_Beret_Item_White",
			"TTT_Beret_Item_Orange"
			};
		weapons[] = {
			"TTT_Beret_Blue",
			"TTT_Beret_Brown",
			"TTT_Beret_Bronze",
			"TTT_Beret_Yellow",
			"TTT_Beret_Gold",
			"TTT_Beret_Grey",
			"TTT_Beret_Green",
			"TTT_Beret_Logo",
			"TTT_Beret_Platinum",
			"TTT_Beret_Red",
			"TTT_Beret_Black",
			"TTT_Beret_Silver",
			"TTT_Beret_Violet",
			"TTT_Beret_White",
			"TTT_Beret_Orange"
		};
	};	
};

class CfgVehicles {
	//External class reference
	class Item_Base_F;
	
	//Barrett Item Blau
	class TTT_Beret_Item_Blue : Item_Base_F {
		scope = 2;
		scopeCurator = 2;
		displayName = "TTT Barrett Item Blau";
		//Textures by Reimchen
		author = "$STR_Tactical_Training_Team";
		icon = "iconObject_1x1";
		vehicleClass = "Items";
		model = "\A3\Weapons_F\DummyCap.p3d";
		
		class TransportItems {
			class TTT_Beret_Blue {
				name = "TTT_Beret_Blue";
				count = 1;
			};
		};
	};
	//Barrett Item Braun
	class TTT_Beret_Item_Brown : TTT_Beret_Item_Blue {
		displayName = "TTT Barrett Item Braun";
		
		class TransportItems {
			class TTT_Beret_Brown {
				name = "TTT_Beret_Brown";
				count = 1;
			};
		};
	};
	//Barrett Item Bronze
	class TTT_Beret_Item_Bronze : TTT_Beret_Item_Blue {
		displayName = "TTT Barrett Item Bronze";
		
		class TransportItems {
			class TTT_Beret_Bronze {
				name = "TTT_Beret_Bronze";
				count = 1;
			};
		};
	};
	//Barrett Item Gelb
	class TTT_Beret_Item_Yellow : TTT_Beret_Item_Blue {
		displayName = "TTT Barrett Item Gelb";
		
		class TransportItems {
			class TTT_Beret_Yellow {
				name = "TTT_Beret_Yellow";
				count = 1;
			};
		};
	};
	//Barrett Item Gold
	class TTT_Beret_Item_Gold : TTT_Beret_Item_Blue {
		displayName = "TTT Barrett Item Gold";
		
		class TransportItems {
			class TTT_Beret_Gold {
				name = "TTT_Beret_Gold";
				count = 1;
			};
		};
	};
	//Barrett Item Grau
	class TTT_Beret_Item_Grey : TTT_Beret_Item_Blue {
		displayName = "TTT Barrett Item Grau";
		
		class TransportItems {
			class TTT_Beret_Grey {
				name = "TTT_Beret_Grey";
				count = 1;
			};
		};
	};
	//Barrett Item Gruen
	class TTT_Beret_Item_Green : TTT_Beret_Item_Blue {
		displayName = "TTT Barrett Item Gruen";
		
		class TransportItems {
			class TTT_Beret_Green {
				name = "TTT_Beret_Green";
				count = 1;
			};
		};
	};
	//Barrett Item Logo
	class TTT_Beret_Item_Logo : TTT_Beret_Item_Blue {
		displayName = "TTT Barrett Item Logo";
		
		class TransportItems {
			class TTT_Beret_Logo {
				name = "TTT_Beret_Logo";
				count = 1;
			};
		};
	};
	//Barrett Item Platin
	class TTT_Beret_Item_Platinum : TTT_Beret_Item_Blue {
		displayName = "TTT Barrett Item Platin";
		
		class TransportItems {
			class TTT_Beret_Platinum {
				name = "TTT_Beret_Platinum";
				count = 1;
			};
		};
	};
	//Barrett Item Rot
	class TTT_Beret_Item_Red : TTT_Beret_Item_Blue {
		displayName = "TTT Barrett Item Rot";
		
		class TransportItems {
			class TTT_Beret_Red {
				name = "TTT_Beret_Red";
				count = 1;
			};
		};
	};
	//Barrett Item Schwarz
	class TTT_Beret_Item_Black : TTT_Beret_Item_Blue {
		displayName = "TTT Barrett Item Schwarz";
		
		class TransportItems {
			class TTT_Beret_Black {
				name = "TTT_Beret_Black";
				count = 1;
			};
		};
	};
	//Barrett Item Silber
	class TTT_Beret_Item_Silver : TTT_Beret_Item_Blue {
		displayName = "TTT Barrett Item Silber";
		
		class TransportItems {
			class TTT_Beret_Silver {
				name = "TTT_Beret_Silver";
				count = 1;
			};
		};
	};
	//Barrett Item Violett
	class TTT_Beret_Item_Violet : TTT_Beret_Item_Blue {
		displayName = "TTT Barrett Item Violett";
		
		class TransportItems {
			class TTT_Beret_Violet {
				name = "TTT_Beret_Violet";
				count = 1;
			};
		};
	};
	//Barrett Item Weiss
	class TTT_Beret_Item_White : TTT_Beret_Item_Blue {
		displayName = "TTT Barrett Item Weiss";
		
		class TransportItems {
			class TTT_Beret_White {
				name = "TTT_Beret_White";
				count = 1;
			};
		};
	};
	//Barrett Item Orange
	class TTT_Beret_Item_Orange : TTT_Beret_Item_Blue {
		displayName = "TTT Barrett Item Orange";
		
		class TransportItems {
			class TTT_Beret_Orange {
				name = "TTT_Beret_Orange";
				count = 1;
			};
		};
	};
};

class CfgWeapons {
	//External class reference
	class InventoryItem_Base_F;
	class ItemCore;
	class HeadgearItem : InventoryItem_Base_F {};
	class HelmetBase : ItemCore {
		class ItemInfo : HeadgearItem {};
	};

	//Barrett: Blau
	class TTT_Beret_Blue : HelmetBase {
		author = "$STR_Tactical_Training_Team";
		scope = 2;
		displayName = "TTT Barrett Blau";
		model = "\A3\Characters_f_epb\BLUFOR\headgear_beret02.p3d";
		picture = "\ttt_berets\data\ui\berets_blau_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_berets\data\common\berets_blau_co.paa"};
		allowedFacewear[] = {"G_Aviator", "G_Balaclava_blk", "G_Balaclava_oli", "G_Bandanna_aviator", "G_Bandanna_beast", "G_Bandanna_blk", "G_Bandanna_khk", "G_Bandanna_oli", "G_Bandanna_shades", "G_Bandanna_sport", "G_Bandanna_tan", "G_Shades_Black", "G_Shades_Blue", "G_Shades_Red", "G_Shades_Green"};
		
		class ItemInfo : ItemInfo {
			mass = 6;
			allowedSlots[] = {801, 901, 701, 605};
			uniformModel = "\A3\Characters_f_epb\BLUFOR\headgear_beret02.p3d";
			modelSides[] = {6};
		};
	};
	
	//Barrett: Braun
	class TTT_Beret_Brown : TTT_Beret_Blue {
		author = "$STR_Tactical_Training_Team";
		displayName = "TTT Barrett Braun";
		picture = "\ttt_berets\data\ui\berets_braun_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_berets\data\common\berets_braun_co.paa"};
	};
	//Barrett: Bronze
	class TTT_Beret_Bronze : TTT_Beret_Blue {
		displayName = "TTT Barrett Bronze";
		author = "Reimchen";
		picture = "\ttt_berets\data\ui\berets_bronze_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_berets\data\common\berets_bronze_co.paa"};
	};
	//Barrett: Gelb
	class TTT_Beret_Yellow : TTT_Beret_Blue {
		displayName = "TTT Barrett Gelb";
		author = "Reimchen";
		picture = "\ttt_berets\data\ui\berets_gelb_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_berets\data\common\berets_gelb_co.paa"};
	};
	//Barrett: Gold
	class TTT_Beret_Gold : TTT_Beret_Blue {
		displayName = "TTT Barrett Gold";
		author = "Reimchen";
		picture = "\ttt_berets\data\ui\berets_gold_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_berets\data\common\berets_gold_co.paa"};
	};
	//Barrett: Grau
	class TTT_Beret_Grey : TTT_Beret_Blue {
		displayName = "TTT Barrett Grau";
		author = "Reimchen";
		picture = "\ttt_berets\data\ui\berets_grau_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_berets\data\common\berets_grau_co.paa"};
	};
	//Barrett: Gruen
	class TTT_Beret_Green : TTT_Beret_Blue {
		displayName = "TTT Barrett Gruen";
		author = "Reimchen";
		picture = "\ttt_berets\data\ui\berets_gruen_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_berets\data\common\berets_gruen_co.paa"};
	};
	//Barrett: Logo
	class TTT_Beret_Logo : TTT_Beret_Blue {
		displayName = "TTT Barrett Logo";
		author = "Reimchen";
		picture = "\ttt_berets\data\ui\berets_logo_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_berets\data\common\berets_logo_co.paa"};
	};
	//Barrett: Platin
	class TTT_Beret_Platinum : TTT_Beret_Blue {
		displayName = "TTT Barrett Platin";
		author = "Reimchen";
		picture = "\ttt_berets\data\ui\berets_platin_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_berets\data\common\berets_platin_co.paa"};
	};
	//Barrett: Rot
	class TTT_Beret_Red : TTT_Beret_Blue {
		displayName = "TTT Barrett Rot";
		author = "Reimchen";
		picture = "\ttt_berets\data\ui\berets_rot_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_berets\data\common\berets_rot_co.paa"};
	};
	//Barrett: Schwarz
	class TTT_Beret_Black : TTT_Beret_Blue {
		displayName = "TTT Barrett Schwarz";
		author = "Reimchen";
		picture = "\ttt_berets\data\ui\berets_schwarz_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_berets\data\common\berets_schwarz_co.paa"};
	};
	//Barrett: Silber
	class TTT_Beret_Silver : TTT_Beret_Blue {
		displayName = "TTT Barrett Silber";
		author = "Reimchen";
		picture = "\ttt_berets\data\ui\berets_silber_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_berets\data\common\berets_silber_co.paa"};
	};
	//Barrett: Violett
	class TTT_Beret_Violet : TTT_Beret_Blue {
		displayName = "TTT Barrett Violett";
		author = "Reimchen";
		picture = "\ttt_berets\data\ui\berets_violett_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_berets\data\common\berets_violett_co.paa"};
	};
	//Barrett: Weiss
	class TTT_Beret_White : TTT_Beret_Blue {
		displayName = "TTT Barrett Weiss";
		author = "Reimchen";
		picture = "\ttt_berets\data\ui\berets_weiss_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_berets\data\common\berets_weiss_co.paa"};
	};
	//Barrett: Orange
	class TTT_Beret_Orange : TTT_Beret_Blue {
		displayName = "TTT Barrett Orange";
		picture = "\ttt_berets\data\ui\berets_orange_icon_co.paa";
		hiddenSelectionsTextures[] = {"\ttt_berets\data\common\berets_orange_co.paa"};
	};
	
	//OLD Classnames
	class TTT_Beret_Blau : TTT_Beret_Blue {
		scope = 0;
	};	
	class TTT_Beret_Braun : TTT_Beret_Brown {
		scope = 0;
	};	
	class TTT_Beret_Gelb : TTT_Beret_Yellow {
		scope = 0;
	};
	class TTT_Beret_Grau : TTT_Beret_Grey {
		scope = 0;
	};
	class TTT_Beret_Gruen : TTT_Beret_Green {
		scope = 0;
	};
	class TTT_Beret_Rot : TTT_Beret_Red {
		scope = 0;
	};
	class TTT_Beret_Schwarz : TTT_Beret_Black {
		scope = 0;
	};
	class TTT_Beret_Silber : TTT_Beret_Silver {
		scope = 0;
	};
	class TTT_Beret_Violett : TTT_Beret_Violet {
		scope = 0;
	};
	class TTT_Beret_Weiss : TTT_Beret_White {
		scope = 0;
	};	
};