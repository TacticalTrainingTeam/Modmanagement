class CfgPatches
{
	class rsr_rhs
	{
		requiredAddons[]=
		{
			"rsr_core"
		};
		units[]=
		{
			"rsr_c_161",
			"rsr_c_161_viv"
		};
	};
};
class CfgVehicles
{
	class RHS_C130J;
	class rsr_c_161: RHS_C130J
	{
		author="RsR";
		displayName="C-161 Transall 2";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrPlane";
		hiddenSelectionsTextures[]=
		{
			"\rsr_rhs\data\c_161\redd_c_161_body_co.paa",
			"\rsr_rhs\data\c_161\redd_c_161_wings_co.paa"
		};
	};
	class RHS_C130J_Cargo;
	class rsr_c_161_viv: RHS_C130J_Cargo
	{
		author="RsR";
		displayName="C-161 Transall 2 (Cargo)";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrPlane";
		hiddenSelectionsTextures[]=
		{
			"\rsr_rhs\data\c_161\redd_c_161_body_co.paa",
			"\rsr_rhs\data\c_161\redd_c_161_wings_co.paa"
		};
	};
};
class cfgMods
{
	author="Reddiem";
	timepacked="1576189533";
};
