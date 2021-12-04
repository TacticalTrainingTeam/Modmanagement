class CfgPatches
{
	class ttt_nosmokebounce_rhs
	{
		units[]={};
		weapons[]={};
		requiredVersion=2.0599999;
		requiredAddons[]=
		{
			"ttt_nosmokebounce", "rhs_c_weapons", "rhsusf_c_weapons"
		};
		version=1;
		versionStr=1;
		versionAr[]={1,0};
		author="[A] Willard, [DAA] dedmen, [TTT]";
		ammo[]=
		{
			"rhs_40mm_smoke_white",
			"rhs_40mm_m714_white",
			"rhs_40mm_smoke_red",
			"rhs_40mm_m713_red",
			"rhs_40mm_smoke_green",
			"rhs_40mm_m715_green",
			"rhs_40mm_smoke_yellow",
			"rhs_40mm_m716_yellow",
			"rhs_g_vg40md_white"
		};
	};
};
class CfgAmmo
{
	class rhs_40mm_smoke_white: SmokeShell
	{
		simulation="shotSmoke";
		deflectionSlowDown=0.40000001;
	};
	class rhs_40mm_m714_white: SmokeShell
	{
		simulation="shotSmoke";
		deflectionSlowDown=0.40000001;
	};
	class SmokeShellRed;
	class rhs_40mm_smoke_red: SmokeShellRed
	{
		simulation="shotSmoke";
		deflectionSlowDown=0.40000001;
	};
	class rhs_40mm_m713_red: SmokeShellRed
	{
		simulation="shotSmoke";
		deflectionSlowDown=0.40000001;
	};
	class SmokeShellGreen;
	class rhs_40mm_smoke_green: SmokeShellGreen
	{
		simulation="shotSmoke";
		deflectionSlowDown=0.40000001;
	};
	class rhs_40mm_m715_green: SmokeShellGreen
	{
		simulation="shotSmoke";
		deflectionSlowDown=0.40000001;
	};
	class SmokeShellYellow;
	class rhs_40mm_smoke_yellow: SmokeShellYellow
	{
		simulation="shotSmoke";
		deflectionSlowDown=0.40000001;
	};
	class rhs_40mm_m716_yellow: SmokeShellYellow
	{
		simulation="shotSmoke";
		deflectionSlowDown=0.40000001;
	};
	class rhs_g_vog25;
	class rhs_g_vg40md_white: rhs_g_vog25
	{
		simulation="shotSmoke";
		deflecting=30;
		deflectionSlowDown=0.40000001;
	};
};
