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
			"TTT_Sign_Orange"
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
			init = "(_this select 0) setFlagTexture '\ttt_signs\data\ttt_logo_sign_co.paa'";
		};
	};
	class TTT_Flag_Blue : TTT_Flag_Logo {
		displayName = "TTT Flagge Blau";
		
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_signs\data\ttt_logo_blau_co.paa'";
		};
	};
	class TTT_Flag_Brown : TTT_Flag_Logo {
		displayName = "TTT Flagge Braun";
		
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_signs\data\ttt_logo_braun_co.paa'";
		};
	};
	class TTT_Flag_Bronze : TTT_Flag_Logo {
		displayName = "TTT Flagge Bronze";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_signs\data\ttt_logo_bronze_co.paa'";
		};
	};
	class TTT_Flag_Yellow : TTT_Flag_Logo {
		displayName = "TTT Flagge Gelb";
		
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_signs\data\ttt_logo_gelb_co.paa'";
		};
	};
	class TTT_Flag_Gold : TTT_Flag_Logo {
		displayName = "TTT Flagge Gold";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_signs\data\ttt_logo_gold_co.paa'";
		};
	};
	class TTT_Flag_Grey : TTT_Flag_Logo {
		displayName = "TTT Flagge Grau";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_signs\data\ttt_logo_grau_co.paa'";
		};
	};
	class TTT_Flag_Green : TTT_Flag_Logo {
		displayName = "TTT Flagge Gruen";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_signs\data\ttt_logo_gruen_co.paa'";
		};
	};
	class TTT_Flag_Platinum : TTT_Flag_Logo {
		displayName = "TTT Flagge Platin";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_signs\data\ttt_logo_platin_co.paa'";
		};
	};
	class TTT_Flag_Red : TTT_Flag_Logo {
		displayName = "TTT Flagge Rot";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_signs\data\ttt_logo_rot_co.paa'";
		};
	};
	class TTT_Flag_Black : TTT_Flag_Logo {
		displayName = "TTT Flagge Schwarz";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_signs\data\ttt_logo_schwarz_co.paa'";
		};
	};
	class TTT_Flag_Silver : TTT_Flag_Logo {
		displayName = "TTT Flagge Silber";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_signs\data\ttt_logo_silber_co.paa'";
		};
	};
	class TTT_Flag_Violet : TTT_Flag_Logo {
		displayName = "TTT Flagge Violett";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_signs\data\ttt_logo_violett_co.paa'";
		};
	};
	class TTT_Flag_White : TTT_Flag_Logo {
		displayName = "TTT Flagge Weiss";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_signs\data\ttt_logo_weiss_co.paa'";
		};
	};
	class TTT_Flag_Orange : TTT_Flag_Logo {
		displayName = "TTT Flagge Orange";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\ttt_signs\data\ttt_logo_orange_co.paa'";
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
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_blau_co.paa"};
	};
	class TTT_Sign_Small_Bronze : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Bronze";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_bronze_co.paa"};
	};
	class TTT_Sign_Small_Brown : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Braun";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_braun_co.paa"};
	};
	class TTT_Sign_Small_Yellow : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Gelb";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_gelb_co.paa"};
	};
	class TTT_Sign_Small_Gold : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Gold";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_gold_co.paa"};
	};
	class TTT_Sign_Small_Grey : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Grau";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_grau_co.paa"};
	};
	class TTT_Sign_Small_Green : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Gruen";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_gruen_co.paa"};
	};
	class TTT_Sign_Small_Platinum : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Platin";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_platin_co.paa"};
	};
	class TTT_Sign_Small_Red : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Rot";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_rot_co.paa"};
	};
	class TTT_Sign_Small_Black : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Schwarz";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_schwarz_co.paa"};
	};
	class TTT_Sign_Small_Silver : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Silber";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_silber_co.paa"};
	};
	class TTT_Sign_Small_Violet : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Violett";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_violett_co.paa"};
	};
	class TTT_Sign_Small_White : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Weiss";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_weiss_co.paa"};
	};
	class TTT_Sign_Small_Logo : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Logo";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_sign_co.paa"};
	};
	class TTT_Sign_Small_Orange : TTT_Sign_Small_Blue {
		displayName = "TTT Notizschild Orange";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_orange_co.paa"};
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
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_blau_co.paa"};
	};
	class TTT_Sign_Bronze : TTT_Sign_Blue {
		displayName = "TTT Schild Bronze";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_bronze_co.paa"};
	};
	class TTT_Sign_Brown : TTT_Sign_Blue {
		displayName = "TTT Schild Braun";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_braun_co.paa"};
	};
	class TTT_Sign_Yellow : TTT_Sign_Blue {
		displayName = "TTT Schild Gelb";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_gelb_co.paa"};
	};
	class TTT_Sign_Gold : TTT_Sign_Blue {
		displayName = "TTT Schild Gold";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_gold_co.paa"};
	};
	class TTT_Sign_Grey : TTT_Sign_Blue {
		displayName = "TTT Schild Grau";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_grau_co.paa"};
	};
	class TTT_Sign_Green : TTT_Sign_Blue {
		displayName = "TTT Schild Gruen";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_gruen_co.paa"};
	};
	class TTT_Sign_Platinum : TTT_Sign_Blue {
		displayName = "TTT Schild Platin";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_platin_co.paa"};
	};
	class TTT_Sign_Red : TTT_Sign_Blue {
		displayName = "TTT Schild Rot";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_rot_co.paa"};
	};
	class TTT_Sign_Black : TTT_Sign_Blue {
		displayName = "TTT Schild Schwarz";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_schwarz_co.paa"};
	};
	class TTT_Sign_Silver : TTT_Sign_Blue {
		displayName = "TTT Schild Silber";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_silber_co.paa"};
	};
	class TTT_Sign_Violet : TTT_Sign_Blue {
		displayName = "TTT Schild Violett";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_violett_co.paa"};
	};
	class TTT_Sign_White : TTT_Sign_Blue {
		displayName = "TTT Schild Weiss";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_weiss_co.paa"};
	};
	class TTT_Sign_Logo : TTT_Sign_Blue {
		displayName = "TTT Schild Logo";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_sign_co.paa"};
	};
	class TTT_Sign_Orange : TTT_Sign_Blue {
		displayName = "TTT Schild Orange";
		hiddenSelectionsTextures[] = {"\ttt_signs\data\ttt_logo_orange_co.paa"};
	};
};