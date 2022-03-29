class CfgFunctions
{
	class rsr_vanilla
	{
		tag="RsR";
		class init
		{
			file="ttt\rsr_vanilla\functions";
			class advancedTowingInit
			{
				postInit=1;
			};
			class remove_turret_weapons
			{
			};
			class fired
			{
			};
		};
	};
};
class CfgPatches
{
	class rsr_vanilla
	{
		requiredAddons[]=
		{
			"rsr_core"
		};
		units[]=
		{
			"rsr_panzerhaubitze_flecktarn",
			"rsr_panzerhaubitze_tropentarn",
			"rsr_fennek_transport_flecktarn",
			"rsr_fennek_hmg_flecktarn",
			"rsr_fennek_gmg_flecktarn",
			"rsr_fennek_transport_tropentarn",
			"rsr_fennek_hmg_tropentarn",
			"rsr_fennek_gmg_tropentarn",
			"rsr_bergepanzer_tropentarn",
			"rsr_bergepanzer_flecktarn",
			"rsr_wisent_transport_flecktarn",
			"rsr_wisent_covered_flecktarn",
			"rsr_wisent_repair_flecktarn",
			"rsr_wisent_ammo_flecktarn",
			"rsr_wisent_fuel_flecktarn",
			"rsr_wisent_medical_flecktarn",
			"rsr_gepard_flecktarn",
			"rsr_wisent_transport_tropentarn",
			"rsr_wisent_covered_tropentarn",
			"rsr_wisent_repair_tropentarn",
			"rsr_wisent_ammo_tropentarn",
			"rsr_wisent_fuel_tropentarn",
			"rsr_eagle",
			"rsr_eagle_lowvis",
			"rsr_eagle_trop",
			"rsr_eagle_trop_lowvis",
			"rsr_wisent_medical_tropentarn",
			"rsr_gepard_tropentarn"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class I_MRAP_03_F;
	class I_MRAP_03_hmg_F;
	class I_MRAP_03_gmg_F;
	class rsr_fennek_transport_flecktarn: I_MRAP_03_F
	{
		author="RsR";
		displayName="Fennek - Transport Flecktarn";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		crew="B_Soldier_F";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrCar";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\fennek\fennek_flecktarn_ext_co",
			"ttt\rsr_vanilla\data\fennek\fennek_flecktarn_turret_co"
		};
		class TextureSources
		{
			class fennek_flecktarn
			{
				displayName="Fennek Flecktarn";
				author="Redd";
				textures[]=
				{
					"ttt\rsr_vanilla\data\fennek\fennek_flecktarn_ext_co",
					"ttt\rsr_vanilla\data\fennek\fennek_flecktarn_turret_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class fennek_tropentarn
			{
				displayName="Fennek Tropentarn";
				author="Redd";
				textures[]=
				{
					"ttt\rsr_vanilla\data\fennek\fennek_tropentarn_ext_co",
					"ttt\rsr_vanilla\data\fennek\fennek_tropentarn_turret_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class rsr_fennek_transport_tropentarn: rsr_fennek_transport_flecktarn
	{
		author="RsR";
		displayName="Fennek - Transport Tropentarn";
		_generalMacro="I_MRAP_03_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\fennek\fennek_tropentarn_ext_co",
			"ttt\rsr_vanilla\data\fennek\fennek_tropentarn_turret_co"
		};
	};
	class rsr_fennek_hmg_flecktarn: I_MRAP_03_hmg_F
	{
		author="RsR";
		displayName="Fennek - HMG FLecktarn";
		_generalMacro="I_MRAP_03_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		crew="B_Soldier_F";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrCar";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\fennek\fennek_flecktarn_ext_co",
			"ttt\rsr_vanilla\data\fennek\fennek_flecktarn_turret_co"
		};
		class TextureSources
		{
			class fennek_flecktarn
			{
				displayName="Fennek Flecktarn";
				author="Redd";
				textures[]=
				{
					"ttt\rsr_vanilla\data\fennek\fennek_flecktarn_ext_co",
					"ttt\rsr_vanilla\data\fennek\fennek_flecktarn_turret_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class fennek_tropentarn
			{
				displayName="Fennek Tropentarn";
				author="Redd";
				textures[]=
				{
					"ttt\rsr_vanilla\data\fennek\fennek_tropentarn_ext_co",
					"ttt\rsr_vanilla\data\fennek\fennek_tropentarn_turret_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class rsr_fennek_hmg_tropentarn: rsr_fennek_hmg_flecktarn
	{
		author="RsR";
		displayName="Fennek - HMG Tropentarn";
		_generalMacro="I_MRAP_03_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\fennek\fennek_tropentarn_ext_co",
			"ttt\rsr_vanilla\data\fennek\fennek_tropentarn_turret_co"
		};
	};
	class rsr_fennek_gmg_flecktarn: I_MRAP_03_gmg_F
	{
		author="RsR";
		displayName="Fennek - GMG Flecktarn";
		_generalMacro="I_MRAP_03_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		crew="B_Soldier_F";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrCar";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\fennek\fennek_flecktarn_ext_co",
			"ttt\rsr_vanilla\data\fennek\fennek_flecktarn_turret_co"
		};
		class TextureSources
		{
			class fennek_flecktarn
			{
				displayName="Fennek Flecktarn";
				author="Redd";
				textures[]=
				{
					"ttt\rsr_vanilla\data\fennek\fennek_flecktarn_ext_co",
					"ttt\rsr_vanilla\data\fennek\fennek_flecktarn_turret_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class fennek_tropentarn
			{
				displayName="Fennek Tropentarn";
				author="Redd";
				textures[]=
				{
					"ttt\rsr_vanilla\data\fennek\fennek_tropentarn_ext_co",
					"ttt\rsr_vanilla\data\fennek\fennek_tropentarn_turret_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class rsr_fennek_gmg_tropentarn: rsr_fennek_gmg_flecktarn
	{
		author="RsR";
		displayName="Fennek - GMG Tropentarn";
		_generalMacro="I_MRAP_03_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\fennek\fennek_tropentarn_ext_co",
			"ttt\rsr_vanilla\data\fennek\fennek_tropentarn_turret_co"
		};
	};
	class bwa3_eagle_fleck;
	class rsr_eagle: bwa3_eagle_fleck
	{
		author="RsR";
		displayName="Eagle San - Flecktarn";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		crew="B_Soldier_F";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrCar";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\eagle\bwa3_eagle_co",
			"\bwa3_eagle\data\bwa3_eagle_fahrwerk_co.paa",
			"\bwa3_eagle\data\bwa3_eagle_int_co.paa",
			"\bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
			"#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
			"\bwa3_eagle\data\bwa3_eagle_parts_co.paa",
			"\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
			"\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
			"\bwa3_common\data\bwa3_normteile_co.paa",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)"
		};
		hiddenSelections[]=
		{
			"chassie",
			"fahrwerk",
			"interior",
			"Glass",
			"mirror_glass",
			"parts",
			"backpack_back",
			"backpack_top",
			"licenseplate",
			"takt_a",
			"takt_b",
			"takt_c",
			"takt_d",
			"y_a",
			"y_b",
			"y_c",
			"y_d",
			"y_e",
			"y_f",
			"insignia"
		};
		class TextureSources
		{
			class eagle_flecktarn
			{
				displayName="Flecktarn";
				author="V1irus";
				textures[]=
				{
					"ttt\rsr_vanilla\data\eagle\bwa3_eagle_co",
					"\bwa3_eagle\data\bwa3_eagle_fahrwerk_co.paa",
					"\bwa3_eagle\data\bwa3_eagle_int_co.paa",
					"\bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
					"#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
					"\bwa3_eagle\data\bwa3_eagle_parts_co.paa",
					"\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
					"\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
					"\bwa3_common\data\bwa3_normteile_co.paa",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)"
				};
				hiddenSelections[]=
				{
					"chassie",
					"fahrwerk",
					"interior",
					"Glass",
					"mirror_glass",
					"parts",
					"backpack_back",
					"backpack_top",
					"licenseplate",
					"takt_a",
					"takt_b",
					"takt_c",
					"takt_d",
					"y_a",
					"y_b",
					"y_c",
					"y_d",
					"y_e",
					"y_f",
					"insignia"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class eagle_flecktarn_lowvis
			{
				displayName="Flecktarn lowvis";
				author="V1irus";
				textures[]=
				{
					"ttt\rsr_vanilla\data\eagle\bwa3_eagle_co_vis",
					"\bwa3_eagle\data\bwa3_eagle_fahrwerk_co.paa",
					"\bwa3_eagle\data\bwa3_eagle_int_co.paa",
					"\bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
					"#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
					"\bwa3_eagle\data\bwa3_eagle_parts_co.paa",
					"\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
					"\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
					"\bwa3_common\data\bwa3_normteile_co.paa",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)"
				};
				hiddenSelections[]=
				{
					"chassie",
					"fahrwerk",
					"interior",
					"Glass",
					"mirror_glass",
					"parts",
					"backpack_back",
					"backpack_top",
					"licenseplate",
					"takt_a",
					"takt_b",
					"takt_c",
					"takt_d",
					"y_a",
					"y_b",
					"y_c",
					"y_d",
					"y_e",
					"y_f",
					"insignia"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class rsr_eagle_flecktarn_lowvis: rsr_eagle
	{
		author="RsR";
		displayName="Eagle San - Flecktarn lowvis";
		_generalMacro="I_MRAP_03_F";
		editorPreview="";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\eagle\bwa3_eagle_co_vis",
			"\bwa3_eagle\data\bwa3_eagle_fahrwerk_co.paa",
			"\bwa3_eagle\data\bwa3_eagle_int_co.paa",
			"\bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
			"#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
			"\bwa3_eagle\data\bwa3_eagle_parts_co.paa",
			"\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
			"\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
			"\bwa3_common\data\bwa3_normteile_co.paa",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)"
		};
	};
	class bwa3_eagle_tropen;
	class rsr_eagle_trop: bwa3_eagle_tropen
	{
		author="RsR";
		displayName="Eagle San - Tropen";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		crew="B_Soldier_F";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrCar";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\eagle\bwa3_eagle_tropen_co",
			"\bwa3_eagle\data\bwa3_eagle_fahrwerk_co.paa",
			"\bwa3_eagle\data\bwa3_eagle_int_co.paa",
			"\bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
			"#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
			"\bwa3_eagle\data\bwa3_eagle_parts_co.paa",
			"\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
			"\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
			"\bwa3_common\data\bwa3_normteile_co.paa",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)"
		};
		class TextureSources
		{
			class eagle_tropentarn
			{
				displayName="Tropentarn";
				author="V1irus";
				textures[]=
				{
					"ttt\rsr_vanilla\data\eagle\bwa3_eagle_tropen_co",
					"\bwa3_eagle\data\bwa3_eagle_fahrwerk_co.paa",
					"\bwa3_eagle\data\bwa3_eagle_int_co.paa",
					"\bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
					"#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
					"\bwa3_eagle\data\bwa3_eagle_parts_co.paa",
					"\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
					"\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
					"\bwa3_common\data\bwa3_normteile_co.paa",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class eagle_tropentarn_lowvis
			{
				displayName="Tropentarn lowvis";
				author="V1irus";
				textures[]=
				{
					"ttt\rsr_vanilla\data\eagle\bwa3_eagle_tropen_co_vis",
					"\bwa3_eagle\data\bwa3_eagle_fahrwerk_co.paa",
					"\bwa3_eagle\data\bwa3_eagle_int_co.paa",
					"\bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
					"#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
					"\bwa3_eagle\data\bwa3_eagle_parts_co.paa",
					"\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
					"\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
					"\bwa3_common\data\bwa3_normteile_co.paa",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class rsr_eagle_tropen_lowvis: rsr_eagle_trop
	{
		author="RsR";
		displayName="Eagle San - Tropen lowvis";
		_generalMacro="I_MRAP_03_F";
		editorPreview="";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\eagle\bwa3_eagle_tropen_co_vis",
			"\bwa3_eagle\data\bwa3_eagle_fahrwerk_co.paa",
			"\bwa3_eagle\data\bwa3_eagle_int_co.paa",
			"\bwa3_eagle\data\bwa3_eagle_alpha_co.paa",
			"#(argb,8,8,3)color(0.345098,0.345098,0.345098,1.0,co)",
			"\bwa3_eagle\data\bwa3_eagle_parts_co.paa",
			"\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
			"\bwa3_backpacks\data\bwa3_backpack_fleck_co.paa",
			"\bwa3_common\data\bwa3_normteile_co.paa",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)"
		};
	};
	class B_APC_Tracked_01_CRV_F;
	class rsr_bergepanzer_flecktarn: B_APC_Tracked_01_CRV_F
	{
		author="RsR";
		displayName="Bergepanzer Flecktarn";
		_generalMacro="B_APC_Tracked_01_CRV_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		crew="B_Soldier_F";
		transportRepair=200000000;
		transportFuel=3000;
		transportAmmo=3000;
		supplyRadius=7.5;
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrTank";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\bergepanzer\bergepanzer_flecktarn_body_crv_co",
			"ttt\rsr_vanilla\data\bergepanzer\bergepanzer_flecktarn_body_mbt_co",
			"ttt\rsr_vanilla\data\bergepanzer\bergepanzer_flecktarn_turret_co",
			"ttt\rsr_vanilla\data\bergepanzer\bergepanzer_flecktarn_crv_co"
		};
		class TextureSources
		{
			class bergepanzer_flecktarn
			{
				displayName="Bergepanzer IV Flecktarn";
				author="Redd";
				textures[]=
				{
					"ttt\rsr_vanilla\data\bergepanzer\bergepanzer_flecktarn_body_crv_co",
					"ttt\rsr_vanilla\data\bergepanzer\bergepanzer_flecktarn_body_mbt_co",
					"ttt\rsr_vanilla\data\bergepanzer\bergepanzer_flecktarn_turret_co",
					"ttt\rsr_vanilla\data\bergepanzer\bergepanzer_flecktarn_crv_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class bergepanzer_tropentarn
			{
				displayName="Bergepanzer IV Tropentarn";
				author="Redd";
				textures[]=
				{
					"ttt\rsr_vanilla\data\bergepanzer\bergepanzer_tropentarn_body_crv_co",
					"ttt\rsr_vanilla\data\bergepanzer\bergepanzer_tropentarn_body_mbt_co",
					"ttt\rsr_vanilla\data\bergepanzer\bergepanzer_tropentarn_turret_co",
					"ttt\rsr_vanilla\data\bergepanzer\bergepanzer_tropentarn_crv_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class UserActions
		{
			class Towing
			{
				displayName="Nehme Abschleppseil";
				onlyforplayer=1;
				position="mirrors_control";
				radius=2;
				showWindow=0;
				condition="";
				statement="_this call fn_advancedTowingInit;";
			};
		};
	};
	class rsr_bergepanzer_tropentarn: rsr_bergepanzer_flecktarn
	{
		author="RsR";
		displayName="Bergepanzer Tropentarn";
		_generalMacro="B_APC_Tracked_01_CRV_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\bergepanzer\bergepanzer_tropentarn_body_crv_co",
			"ttt\rsr_vanilla\data\bergepanzer\bergepanzer_tropentarn_body_mbt_co",
			"ttt\rsr_vanilla\data\bergepanzer\bergepanzer_tropentarn_turret_co",
			"ttt\rsr_vanilla\data\bergepanzer\bergepanzer_tropentarn_crv_co"
		};
	};
	class B_MBT_01_arty_F;
	class rsr_panzerhaubitze_flecktarn: B_MBT_01_arty_F
	{
		author="RsR";
		displayName="PzH 2000 Flecktarn";
		_generalMacro="B_MBT_01_arty_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		crew="B_Soldier_F";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrArti";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\panzerhaubitze\panzerhaubitze_flecktarn_body_mbt_co",
			"ttt\rsr_vanilla\data\panzerhaubitze\panzerhaubitze_flecktarn_scorcher_co",
			"ttt\rsr_vanilla\data\panzerhaubitze\panzerhaubitze_flecktarn_turret_co"
		};
		class TextureSources
		{
			class panzerhaubitze_flecktarn
			{
				displayName="Panzerhaubitze Flecktarn";
				author="Redd";
				textures[]=
				{
					"ttt\rsr_vanilla\data\panzerhaubitze\panzerhaubitze_flecktarn_body_mbt_co",
					"ttt\rsr_vanilla\data\panzerhaubitze\panzerhaubitze_flecktarn_scorcher_co",
					"ttt\rsr_vanilla\data\panzerhaubitze\panzerhaubitze_flecktarn_turret_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class panzerhaubitze_tropentarn
			{
				displayName="Panzerhaubitze Tropentarn";
				author="Redd";
				textures[]=
				{
					"ttt\rsr_vanilla\data\panzerhaubitze\panzerhaubitze_tropentarn_body_mbt_co",
					"ttt\rsr_vanilla\data\panzerhaubitze\panzerhaubitze_tropentarn_scorcher_co",
					"ttt\rsr_vanilla\data\panzerhaubitze\panzerhaubitze_tropentarn_turret_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class rsr_panzerhaubitze_tropentarn: rsr_panzerhaubitze_flecktarn
	{
		author="RsR";
		displayName="PzH 2000 Tropentarn";
		_generalMacro="B_MBT_01_arty_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\panzerhaubitze\panzerhaubitze_tropentarn_body_mbt_co",
			"ttt\rsr_vanilla\data\panzerhaubitze\panzerhaubitze_tropentarn_scorcher_co",
			"ttt\rsr_vanilla\data\panzerhaubitze\panzerhaubitze_tropentarn_turret_co"
		};
	};
	class O_Truck_03_transport_F;
	class O_Truck_03_covered_F;
	class O_Truck_03_repair_F;
	class O_Truck_03_ammo_F;
	class O_Truck_03_fuel_F;
	class O_Truck_03_medical_F;
	class rsr_wisent_transport_flecktarn: O_Truck_03_transport_F
	{
		author="RsR";
		displayName="GFF 4 Wisent Flecktarn - Transport";
		side=1;
		crew="B_Soldier_F";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrCar";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_cargo_co"
		};
		class TextureSources
		{
			class wisent_flecktarn
			{
				displayName="Wisent Flecktarn";
				author="Redd";
				factions[]=
				{
					"BLU_F"
				};
				textures[]=
				{
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_cargo_co"
				};
			};
			class wisent_tropentarn
			{
				displayName="Wisent Tropentarn";
				author="Redd";
				factions[]=
				{
					"BLU_F"
				};
				textures[]=
				{
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_cargo_co"
				};
			};
		};
	};
	class rsr_wisent_transport_tropentarn: rsr_wisent_transport_flecktarn
	{
		author="RsR";
		displayName="GFF 4 Wisent Tropentarn - Transport";
		_generalMacro="O_Truck_03_transport_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_cargo_co"
		};
	};
	class rsr_wisent_covered_flecktarn: O_Truck_03_covered_F
	{
		author="RsR";
		displayName="GFF 4 Wisent Flecktarn - Plane";
		side=1;
		crew="B_Soldier_F";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrCar";
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_cargo_co",
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_cover_co"
		};
		class TextureSources
		{
			class wisent_flecktarn
			{
				displayName="Wisent Flecktarn";
				author="Redd";
				factions[]=
				{
					"BLU_F"
				};
				textures[]=
				{
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_cargo_co",
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_cover_co"
				};
			};
			class wisent_tropentarn
			{
				displayName="Wisent Tropentarn";
				author="Redd";
				factions[]=
				{
					"BLU_F"
				};
				textures[]=
				{
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_cargo_co",
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_cover_co"
				};
			};
		};
	};
	class rsr_wisent_covered_tropentarn: rsr_wisent_covered_flecktarn
	{
		author="RsR";
		displayName="GFF 4 Wisent Tropentarn - Plane";
		_generalMacro="O_Truck_03_transport_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_cargo_co",
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_cover_co"
		};
	};
	class rsr_wisent_repair_flecktarn: O_Truck_03_repair_F
	{
		author="RsR";
		displayName="GFF 4 Wisent Flecktarn - Reparatur";
		side=1;
		crew="B_Soldier_F";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrCar";
		transportRepair=200000000;
		supplyRadius=10;
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ammo_co"
		};
		class TextureSources
		{
			class wisent_flecktarn
			{
				displayName="Wisent Flecktarn";
				author="Redd";
				factions[]=
				{
					"BLU_F"
				};
				textures[]=
				{
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ammo_co"
				};
			};
			class wisent_tropentarn
			{
				displayName="Wisent Tropentarn";
				author="Redd";
				factions[]=
				{
					"BLU_F"
				};
				textures[]=
				{
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ammo_co"
				};
			};
		};
		class UserActions
		{
			class Towing
			{
				displayName="Nehme Abschleppseil";
				onlyforplayer=1;
				position="mirrors_control";
				radius=2;
				showWindow=0;
				condition="";
				statement="[(_this select 1)] call fn_advancedTowingInit;";
			};
		};
	};
	class rsr_wisent_repair_tropentarn: rsr_wisent_repair_flecktarn
	{
		author="RsR";
		displayName="GFF 4 Wisent Tropentarn - Reparatur";
		_generalMacro="O_Truck_03_transport_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ammo_co"
		};
	};
	class rsr_wisent_ammo_flecktarn: O_Truck_03_ammo_F
	{
		author="RsR";
		displayName="GFF 4 Wisent Flecktarn - Munition";
		side=1;
		crew="B_Soldier_F";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrCar";
		transportAmmo=30000;
		supplyRadius=10;
		fuelExplosionPower=10;
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_cargo_co",
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_containers_co"
		};
		class TextureSources
		{
			class wisent_flecktarn
			{
				displayName="Wisent Flecktarn";
				author="Redd";
				factions[]=
				{
					"BLU_F"
				};
				textures[]=
				{
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_cargo_co",
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_containers_co"
				};
			};
			class wisent_tropentarn
			{
				displayName="Wisent Tropentarn";
				author="Redd";
				factions[]=
				{
					"BLU_F"
				};
				textures[]=
				{
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_cargo_co",
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_containers_co"
				};
			};
		};
	};
	class rsr_wisent_ammo_tropentarn: rsr_wisent_ammo_flecktarn
	{
		author="RsR";
		displayName="GFF 4 Wisent Tropentarn - Munition";
		_generalMacro="O_Truck_03_transport_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_cargo_co",
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_containers_co"
		};
	};
	class rsr_wisent_fuel_flecktarn: O_Truck_03_fuel_F
	{
		author="RsR";
		displayName="GFF 4 Wisent Flecktarn - Treibstoff";
		_generalMacro="O_Truck_03_fuel_F";
		side=1;
		crew="B_Soldier_F";
		transportFuel=8000;
		supplyRadius=10;
		fuelExplosionPower=15;
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrCar";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_fuel_co"
		};
		class TextureSources
		{
			class wisent_flecktarn
			{
				displayName="Wisent Flecktarn";
				author="Redd";
				textures[]=
				{
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_fuel_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class wisent_tropentarn
			{
				displayName="Wisent Tropentarn";
				author="Redd";
				textures[]=
				{
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_fuel_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class rsr_wisent_fuel_tropentarn: rsr_wisent_fuel_flecktarn
	{
		author="RsR";
		displayName="GFF 4 Wisent Tropentarn - Treibstoff";
		_generalMacro="O_Truck_03_transport_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_fuel_co"
		};
	};
	class rsr_wisent_medical_flecktarn: O_Truck_03_medical_F
	{
		author="RsR";
		displayName="GFF 4 Wisent Flecktarn - San";
		_generalMacro="O_Truck_03_medical_F";
		side=1;
		crew="B_Soldier_F";
		supplyRadius=10;
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrCar";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_cargo_co",
			"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_cover_co"
		};
		class TextureSources
		{
			class wisent_flecktarn
			{
				displayName="Wisent Flecktarn";
				author="Redd";
				textures[]=
				{
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_cargo_co",
					"ttt\rsr_vanilla\data\wisent\wisent_flecktarn_cover_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class wisent_tropentarn
			{
				displayName="Wisent Tropentarn";
				author="Redd";
				textures[]=
				{
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_cargo_co",
					"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_cover_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class rsr_wisent_medical_tropentarn: rsr_wisent_medical_flecktarn
	{
		author="RsR";
		displayName="GFF 4 Wisent Tropentarn - San";
		_generalMacro="O_Truck_03_medical_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_cargo_co",
			"ttt\rsr_vanilla\data\wisent\wisent_tropentarn_cover_co"
		};
	};
	class B_APC_Tracked_01_AA_F;
	class rsr_gepard_flecktarn: B_APC_Tracked_01_AA_F
	{
		author="RsR";
		displayName="Gepard II";
		_generalMacro="B_APC_Tracked_01_AA_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		crew="B_Soldier_F";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrTank";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\gepard\gepard_flecktarn_body_co",
			"ttt\rsr_vanilla\data\gepard\gepard_flecktarn_body_mbt_co",
			"ttt\rsr_vanilla\data\gepard\gepard_flecktarn_tower_co"
		};
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		class TextureSources
		{
			class gepard_flecktarn
			{
				displayName="Gepard Flecktarn";
				author="Redd";
				textures[]=
				{
					"ttt\rsr_vanilla\data\gepard\gepard_flecktarn_body_co",
					"ttt\rsr_vanilla\data\gepard\gepard_flecktarn_body_mbt_co",
					"ttt\rsr_vanilla\data\gepard\gepard_flecktarn_tower_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class gepard_tropentarn
			{
				displayName="Gepard Tropentarn";
				author="Redd";
				textures[]=
				{
					"ttt\rsr_vanilla\data\gepard\gepard_tropentarn_body_co",
					"ttt\rsr_vanilla\data\gepard\gepard_tropentarn_body_mbt_co",
					"ttt\rsr_vanilla\data\gepard\gepard_tropentarn_tower_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class rsr_gepard_tropentarn: rsr_gepard_flecktarn
	{
		author="RsR";
		displayName="Gepard II";
		_generalMacro="B_APC_Tracked_01_AA_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\gepard\gepard_tropentarn_body_co",
			"ttt\rsr_vanilla\data\gepard\gepard_tropentarn_body_mbt_co",
			"ttt\rsr_vanilla\data\gepard\gepard_tropentarn_tower_co"
		};
	};
	class Car;
	class Car_F: Car
	{
		class NewTurret;
	};
	class Wheeled_APC_F: Car_F
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class APC_Wheeled_03_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
	};
	class I_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F
	{
	};
	class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F
	{
	};
	class rsr_fuchs_transport_flecktarn: I_APC_Wheeled_03_cannon_F
	{
		author="RsR";
		displayName="Fuchs 2 - Transport";
		_generalMacro="I_APC_Wheeled_03_cannon_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		crew="B_Soldier_F";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrAPC";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\fuchs\redd_fuchs2_01_apc_wheeled_03_ext_co",
			"ttt\rsr_vanilla\data\fuchs\redd_fuchs2_01_apc_wheeled_03_ext2_co",
			"A3\armor_f_gamma\APC_Wheeled_03\data\RCWS30_INDP_CO",
			"ttt\rsr_vanilla\data\fuchs\redd_fuchs2_01_apc_wheeled_03_ext_alpha_co"
		};
		enableManualFire=0;
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]={};
				magazines[]={};
				dontCreateAi=1;
				cantCreateAI=1;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						soundServo[]={};
						soundServoVertical[]={};
					};
				};
			};
		};
		class EventHandlers
		{
			class rsr_EventHandlers
			{
				init="_this call RSR_fnc_remove_turret_weapons";
				fired="_this call RSR_fnc_fired";
			};
		};
		class TextureSources
		{
			class fuchs_flecktarn
			{
				displayName="Fuchs Flecktarn";
				author="Redd";
				textures[]=
				{
					"ttt\rsr_vanilla\data\fuchs\redd_fuchs2_01_apc_wheeled_03_ext_co",
					"ttt\rsr_vanilla\data\fuchs\redd_fuchs2_01_apc_wheeled_03_ext2_co",
					"A3\armor_f_gamma\APC_Wheeled_03\data\RCWS30_INDP_CO",
					"ttt\rsr_vanilla\data\fuchs\redd_fuchs2_01_apc_wheeled_03_ext_alpha_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class fuchs_tropentarn
			{
				displayName="Fuchs Tropentarn";
				author="Redd";
				textures[]=
				{
					"ttt\rsr_vanilla\data\fuchs\redd_fuchs2_des_01_apc_wheeled_03_ext_co",
					"ttt\rsr_vanilla\data\fuchs\redd_fuchs2_des_01_apc_wheeled_03_ext2_co",
					"A3\armor_f_gamma\APC_Wheeled_03\data\RCWS30_INDP_CO",
					"ttt\rsr_vanilla\data\fuchs\redd_fuchs2_des_01_apc_wheeled_03_ext_alpha_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class rsr_fuchs_transport_tropentarn: rsr_fuchs_transport_flecktarn
	{
		author="RsR";
		displayName="Fuchs 2 - Transport";
		_generalMacro="I_APC_Wheeled_03_cannon_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\fuchs\redd_fuchs2_des_01_apc_wheeled_03_ext_co",
			"ttt\rsr_vanilla\data\fuchs\redd_fuchs2_des_01_apc_wheeled_03_ext2_co",
			"A3\armor_f_gamma\APC_Wheeled_03\data\RCWS30_INDP_CO",
			"ttt\rsr_vanilla\data\fuchs\redd_fuchs2_des_01_apc_wheeled_03_ext_alpha_co"
		};
	};
	class rsr_fuchs_medical_flecktarn: rsr_fuchs_transport_flecktarn
	{
		author="RsR";
		displayName="Fuchs 2 - San";
		_generalMacro="I_APC_Wheeled_03_cannon_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\fuchs\redd_fuchs2_san_00_apc_wheeled_03_ext_co",
			"ttt\rsr_vanilla\data\fuchs\redd_fuchs2_san_00_apc_wheeled_03_ext2_co",
			"A3\armor_f_gamma\APC_Wheeled_03\data\RCWS30_INDP_CO",
			"ttt\rsr_vanilla\data\fuchs\redd_fuchs2_san_00_apc_wheeled_03_ext_alpha_co"
		};
	};
	class rsr_fuchs_medical_tropentarn: rsr_fuchs_transport_flecktarn
	{
		author="RsR";
		displayName="Fuchs 2 - San";
		_generalMacro="I_APC_Wheeled_03_cannon_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"ttt\rsr_vanilla\data\fuchs\redd_fuchs2_san_des_01_apc_wheeled_03_ext_co",
			"ttt\rsr_vanilla\data\fuchs\redd_fuchs2_san_des_01_apc_wheeled_03_ext2_co",
			"A3\armor_f_gamma\APC_Wheeled_03\data\RCWS30_INDP_CO",
			"ttt\rsr_vanilla\data\fuchs\redd_fuchs2_san_des_01_apc_wheeled_03_ext_alpha_co"
		};
	};
};
class cfgMods
{
	author="Reddiem";
	timepacked="1562885989";
};
