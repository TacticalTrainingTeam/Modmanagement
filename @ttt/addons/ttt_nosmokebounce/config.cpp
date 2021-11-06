class CfgPatches
{
	class ttt_nosmokebounce
	{
		units[]={};
		weapons[]={};
		requiredVersion=2.0599999;
		requiredAddons[]=
		{
			"A3_Data_F_AoW_Loadorder",
		};
		version=1;
		versionStr=1;
		versionAr[]={1,0};
		author="[A] Willard, [DAA] dedmen, [TTT]";
		ammo[]=
		{
			"F_40mm_White",
			"F_40mm_Yellow",
			"F_40mm_Red",
			"F_40mm_Green",
			"Flare_82mm_AMOS_White",
			"G_40mm_Smoke",
		};
	};
};
class CfgAmmo
{
	class FlareBase;
	class F_40mm_White: FlareBase
	{
		intensity=1500000;
	};
	class F_40mm_Yellow: F_40mm_White
	{
	};
	class F_40mm_Red: F_40mm_White
	{
	};
	class F_40mm_Green: F_40mm_White
	{
	};
	class FlareCore;
	class Flare_82mm_AMOS_White: FlareCore
	{
		intensity=4000000;
	};
	class SmokeShell;
	class G_40mm_Smoke: SmokeShell
	{
		simulation="shotSmoke";
		deflectionSlowDown=0.40000001;
	};
};
