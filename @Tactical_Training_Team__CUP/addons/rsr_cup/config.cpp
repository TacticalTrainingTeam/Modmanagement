class CfgPatches
{
	class rsr_cup
	{
		requiredAddons[]=
		{
			"rsr_core"
		};
		units[]=
		{
			"rsr_c_161",
			"rsr_c_161_viv",
			"rnt_bw_wintertarn_uniform_item",
			"rnt_bw_wintertarn_helm_item"
		};
	};
};
class CfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class CUP_U_O_CHDKZ_Kam_01;
	class CUP_H_USMC_LWH_DES;
	class UniformItem: InventoryItem_Base_F
	{
		type=801;
	};
	class rnt_bw_wintertarn_uniform_item: CUP_U_O_CHDKZ_Kam_01
	{
		author="rnt";
		displayName="Wintertarn Ueberzug";
		picture="\rsr_cup\data\wintertarn\rnt_winter_uniform_ui_pre_ca";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="rnt_bw_wintertarn_uniform";
			containerClass="Supply40";
			mass=15;
		};
	};
	class rnt_bw_wintertarn_helm_item: CUP_H_USMC_LWH_DES
	{
		author="rnt";
		displayName="Wintertarn Ueberzug Helm";
		picture="\rsr_cup\data\wintertarn\rnt_winter_helm_ui_pre_ca";
		hiddenSelectionsTextures[]=
		{
			"\rsr_cup\data\wintertarn\rnt_winter_helm_co"
		};
	};
};
class CfgVehicles
{
	class CUP_Creatures_Military_CHDKZ_Soldier_04;
	class rnt_bw_wintertarn_uniform: CUP_Creatures_Military_CHDKZ_Soldier_04
	{
		author="rnt";
		uniformClass="rnt_bw_wintertarn_uniform_item";
		hiddenSelectionsTextures[]=
		{
			"\rsr_cup\data\wintertarn\rnt_winter_jacke_co",
			"\rsr_cup\data\wintertarn\rnt_winter_hose_co"
		};
	};
	class CUP_B_C130J_USMC;
	class rsr_c_161: CUP_B_C130J_USMC
	{
		author="RsR";
		displayName="C-161 Transall 2";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrPlane";
		hiddenSelectionsTextures[]=
		{
			"\rsr_cup\data\c_161\redd_c_161_body_co.paa",
			"\rsr_cup\data\c_161\redd_c_161_wings_co.paa"
		};
	};
	class CUP_B_C130J_Cargo_USMC;
	class rsr_c_161_viv: CUP_B_C130J_Cargo_USMC
	{
		author="RsR";
		displayName="C-161 Transall 2 (VIV)";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrPlane";
		hiddenSelectionsTextures[]=
		{
			"\rsr_cup\data\c_161\redd_c_161_body_co.paa",
			"\rsr_cup\data\c_161\redd_c_161_wings_co.paa"
		};
	};
};
class cfgMods
{
	author="Reddiem";
	timepacked="1576189533";
};
