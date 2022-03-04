class CfgPatches {
	class TTT_Signs {
		requiredAddons[] = {"ttt_main"};
		units[] = {
			"TTT_Flag_Logo",
			"TTT_Flag_Blue",
			"TTT_Flag_Brown",
			"TTT_Flag_Bronze",
			"TTT_Flag_Yellow",
			"TTT_Flag_Gold",
			"TTT_Flag_Green",
			"TTT_Flag_Red",
			"TTT_Flag_Black",
			"TTT_Flag_Silver",
			"TTT_Flag_Platinum",
			"TTT_Flag_Violet",
			"TTT_Flag_White",
			"TTT_Flag_Orange",
			"TTT_Sign_Small_Blue",
			"TTT_Sign_Small_Bronze",
			"TTT_Sign_Small_Brown",
			"TTT_Sign_Small_Yellow",
			"TTT_Sign_Small_Gold",
			"TTT_Sign_Small_Grey",
			"TTT_Sign_Small_Green",
			"TTT_Sign_Small_Red",
			"TTT_Sign_Small_Black",
			"TTT_Sign_Small_Silver",
			"TTT_Sign_Small_Platinum",
			"TTT_Sign_Small_Violet",
			"TTT_Sign_Small_White",
			"TTT_Sign_Small_Logo",
			"TTT_Sign_Small_Orange",
			"TTT_Sign_Blue",
			"TTT_Sign_Bronze",
			"TTT_Sign_Brown",
			"TTT_Sign_Yellow",
			"TTT_Sign_Gold",
			"TTT_Sign_Grey",
			"TTT_Sign_Green",
			"TTT_Sign_Red",
			"TTT_Sign_Black",
			"TTT_Sign_Silver",
			"TTT_Sign_Platinum",
			"TTT_Sign_Violet",
			"TTT_Sign_White",
			"TTT_Sign_Logo",
			"TTT_Sign_Orange",
			"TTT_Panel_Protection_180_4",
			"TTT_Panel_Protection_180_6",
			"TTT_Panel_Protection_360_4",
			"TTT_Panel_Protection_360_6",
			"TTT_Panel_Column_4",
			"TTT_Panel_Column_6",
			"TTT_Panel_Column_8",
			"TTT_Panel_Column_Zug",
			"TTT_Panel_ColumnWide_Zug",
			"TTT_Panel_Chain_4",
			"TTT_Panel_Cain_6",
			"TTT_Panel_Chain_8",
			"TTT_Panel_Stack_4",
			"TTT_Panel_Stack_6",
			"TTT_Panel_Wedge_4",
			"TTT_Panel_Wedge_8"
			};
		weapons[] = {};
	};
};

class CfgVehicleClasses {
	class TTT_Flags {
		displayName = "TTT Flaggen"; 		
		priority = 25; 						
	};
	class TTT_Sign_Small {
		displayName = "TTT Notizschilder";
		priority = 26;
	};
	class TTT_Signs {
		displayName = "TTT Schilder"; 		
		priority = 27; 						
	};
	class TTT_Boards {
		displayName = "TTT Tafeln"; 		
		priority = 28; 						
	};	
};

class CfgVehicles {
	/*
	#############################################################
	### Flaggen
	#############################################################
	*/
	class FlagCarrierCore;
	class TTT_Flag_Base : FlagCarrierCore {
		author = "$STR_Tactical_Training_Team";
		scope = 0;
		scopeCurator = 0;
		displayName = "TTT Flagge Base";
		model = "\a3\Structures_F\Mil\Flags\Mast_F.p3d";
		vehicleClass = "ttt_flags";
		icon = "iconObject_circle";
		keepHorizontalPlacement = 1;
		accuracy = 1000;
		animated = 0;
		nameSound = "obj_flag";
		supplyRadius = 2;
	};
	class TTT_Flag_Logo : TTT_Flag_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "TTT Flagge Logo";
		
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_sign_co.paa'";
		};
	};
	class TTT_Flag_Blue : TTT_Flag_Logo {
		displayName = "TTT Flagge Blau";
		
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_blau_co.paa'";
		};
	};
	class TTT_Flag_Brown : TTT_Flag_Logo {
		displayName = "TTT Flagge Braun";
		
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_braun_co.paa'";
		};
	};
	class TTT_Flag_Bronze : TTT_Flag_Logo {
		displayName = "TTT Flagge Bronze";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_bronze_co.paa'";
		};
	};
	class TTT_Flag_Yellow : TTT_Flag_Logo {
		displayName = "TTT Flagge Gelb";
		
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_gelb_co.paa'";
		};
	};
	class TTT_Flag_Gold : TTT_Flag_Logo {
		displayName = "TTT Flagge Gold";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_gold_co.paa'";
		};
	};
	class TTT_Flag_Grey : TTT_Flag_Logo {
		displayName = "TTT Flagge Grau";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_grau_co.paa'";
		};
	};
	class TTT_Flag_Green : TTT_Flag_Logo {
		displayName = "TTT Flagge Gruen";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_gruen_co.paa'";
		};
	};
	class TTT_Flag_Platinum : TTT_Flag_Logo {
		displayName = "TTT Flagge Platin";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_platin_co.paa'";
		};
	};
	class TTT_Flag_Red : TTT_Flag_Logo {
		displayName = "TTT Flagge Rot";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_rot_co.paa'";
		};
	};
	class TTT_Flag_Black : TTT_Flag_Logo {
		displayName = "TTT Flagge Schwarz";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_schwarz_co.paa'";
		};
	};
	class TTT_Flag_Silver : TTT_Flag_Logo {
		displayName = "TTT Flagge Silber";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_silber_co.paa'";
		};
	};
	class TTT_Flag_Violet : TTT_Flag_Logo {
		displayName = "TTT Flagge Violett";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_violett_co.paa'";
		};
	};
	class TTT_Flag_White : TTT_Flag_Logo {
		displayName = "TTT Flagge Weiss";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_weiss_co.paa'";
		};
	};
	class TTT_Flag_Orange : TTT_Flag_Logo {
		displayName = "TTT Flagge Orange";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_a3\ttt_signs\data\ttt_logo_orange_co.paa'";
		};
	};
	/*
	#############################################################
	### Notizschilder
	#############################################################
	*/
	class NonStrategic;
	class TTT_Sign_Small_Base : NonStrategic {
		mapSize = 0.83;
		author = "$STR_Tactical_Training_Team";
		scope = 0;
		scopeCurator = 0;
		displayName = "TTT Notizschild Base";
		model = "\A3\Structures_F\Civ\InfoBoards\Noticeboard_F.p3d";
		icon = "iconObject_4x1";
		vehicleClass = "TTT_Sign_Small";
		destrType = "DestructWall";
		hiddenSelections[] = {"board"};
	};
	class TTT_Sign_Small_Blue : TTT_Sign_Small_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "TTT Notizschild Blau";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_blau_co.paa"};
	};
	class TTT_Sign_Small_Bronze : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Bronze";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_bronze_co.paa"};
	};
	class TTT_Sign_Small_Brown : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Braun";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_braun_co.paa"};
	};
	class TTT_Sign_Small_Yellow : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Gelb";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_gelb_co.paa"};
	};
	class TTT_Sign_Small_Gold : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Gold";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_gold_co.paa"};
	};
	class TTT_Sign_Small_Grey : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Grau";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_grau_co.paa"};
	};
	class TTT_Sign_Small_Green : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Gruen";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_gruen_co.paa"};
	};
	class TTT_Sign_Small_Platinum : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Platin";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_platin_co.paa"};
	};
	class TTT_Sign_Small_Red : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Rot";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_rot_co.paa"};
	};
	class TTT_Sign_Small_Black : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Schwarz";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_schwarz_co.paa"};
	};
	class TTT_Sign_Small_Silver : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Silber";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_silber_co.paa"};
	};
	class TTT_Sign_Small_Violet : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Violett";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_violett_co.paa"};
	};
	class TTT_Sign_Small_White : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Weiss";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_weiss_co.paa"};
	};
	class TTT_Sign_Small_Logo : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Logo";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_sign_co.paa"};
	};
	class TTT_Sign_Small_Orange : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Orange";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_orange_co.paa"};
	};
	/*
	#############################################################
	### Schilder
	#############################################################
	*/
	class TTT_Sign_Base : NonStrategic {
		mapSize = 0.83;
		author = "$STR_Tactical_Training_Team";
		scope = 0;
		scopeCurator = 0;
		displayName = "TTT Schild Base";
		model = "\A3\Signs_F\Signs_Ad\SignsAd_Sponsor_F.p3d";
		icon = "iconObject_4x1";
		vehicleClass = "ttt_signs";
		destrType = "DestructWall";
		hiddenSelections[] = {"camo"};
	};
	class TTT_Sign_Blue : TTT_Sign_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "TTT Schild Blau";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_blau_co.paa"};
	};
	class TTT_Sign_Bronze : TTT_Sign_Blue {
		displayName = "TTT Schild Bronze";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_bronze_co.paa"};
	};
	class TTT_Sign_Brown : TTT_Sign_Blue {
		displayName = "TTT Schild Braun";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_braun_co.paa"};
	};
	class TTT_Sign_Yellow : TTT_Sign_Blue {
		displayName = "TTT Schild Gelb";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_gelb_co.paa"};
	};
	class TTT_Sign_Gold : TTT_Sign_Blue {
		displayName = "TTT Schild Gold";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_gold_co.paa"};
	};
	class TTT_Sign_Grey : TTT_Sign_Blue {
		displayName = "TTT Schild Grau";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_grau_co.paa"};
	};
	class TTT_Sign_Green : TTT_Sign_Blue {
		displayName = "TTT Schild Gruen";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_gruen_co.paa"};
	};
	class TTT_Sign_Platinum : TTT_Sign_Blue {
		displayName = "TTT Schild Platin";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_platin_co.paa"};
	};
	class TTT_Sign_Red : TTT_Sign_Blue {
		displayName = "TTT Schild Rot";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_rot_co.paa"};
	};
	class TTT_Sign_Black : TTT_Sign_Blue {
		displayName = "TTT Schild Schwarz";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_schwarz_co.paa"};
	};
	class TTT_Sign_Silver : TTT_Sign_Blue {
		displayName = "TTT Schild Silber";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_silber_co.paa"};
	};
	class TTT_Sign_Violet : TTT_Sign_Blue {
		displayName = "TTT Schild Violett";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_violett_co.paa"};
	};
	class TTT_Sign_White : TTT_Sign_Blue {
		displayName = "TTT Schild Weiss";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_weiss_co.paa"};
	};
	class TTT_Sign_Logo : TTT_Sign_Blue {
		displayName = "TTT Schild Logo";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_sign_co.paa"};
	};
	class TTT_Sign_Orange : TTT_Sign_Blue {
		displayName = "TTT Schild Orange";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_orange_co.paa"};
	};
	/*
	#############################################################
	### Tafeln
	#############################################################
	*/
	class TTT_Panel_Base : NonStrategic {
		mapSize = 6;
		author = "$STR_Tactical_Training_Team";
		scope = 0;
		scopeCurator = 0;
		displayName = "TTT Tafel Base";
		model = "\A3\Structures_F\Civ\InfoBoards\Billboard_F.p3d";
		icon = "iconObject_5x1";
		vehicleClass = "ttt_boards";
		destrType = "DestructWall";
		cost = 500;
		keepHorizontalPlacement = 1;
		hiddenSelections[] = {"camo"};
	};
	
	class TTT_Panel_Protection_180_4 : TTT_Panel_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "TTT Tafel 180°Sicherung(4)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_4_180sicherung_co.paa"};
	};
	
	class TTT_Panel_Protection_360_4 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel 360°Sicherung(4)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_4_360sicherung_co.paa"};
	};
	
	class TTT_Panel_Column_4 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Kolonne(4)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_4_kolonne_co.paa"};
	};
	
	class TTT_Panel_Wedge_4 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Keil(4)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_4_keil_co.paa"};
	};
	
	class TTT_Panel_Chain_4 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Kette(4)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_4_kette_co.paa"};
	};
	
	class TTT_Panel_Stack_4 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Stack(4)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_4_stack_co.paa"};
	};
	
	class TTT_Panel_Protection_180_6 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel 180°Sicherung(6)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_6_180sicherung_co.paa"};
	};
	
	class TTT_Panel_Protection_360_6 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel 360°Sicherung(6)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_6_360sicherung_co.paa"};
	};
	
	class TTT_Panel_Cain_6 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Kette(6)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_6_kette_co.paa"};
	};
	
	class TTT_Panel_Column_6 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Kolonne(6)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_6_kolonne_co.paa"};
	};
	
	class TTT_Panel_Stack_6 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Stack(6)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_6_stack_co.paa"};
	};
	
	class TTT_Panel_Wedge_8 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Keil(8)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_8_keil_co.paa"};
	};
	
	class TTT_Panel_Chain_8 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Kette(8)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_8_kette_co.paa"};
	};
	
	class TTT_Panel_Column_8 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Kolonne(8)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_8_kolonne_co.paa"};
	};
	
	class TTT_Panel_Column_Zug : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Kolonne(Zug)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_zug_kolonne_co.paa"};
	};
	
	class TTT_Panel_ColumnWide_Zug : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Kolonne Weit(Zug)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_weit_zug_kolonne_co.paa"};
	};
};