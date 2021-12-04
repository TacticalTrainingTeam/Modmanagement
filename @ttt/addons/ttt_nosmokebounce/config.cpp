class CfgPatches
{
	class ttt_nosmokebounce
	{
		units[]={};
		weapons[]={};
		requiredVersion=2.0599999;
		requiredAddons[] = { "A3_Weapons_F" };
		version=1;
		versionStr=1;
		versionAr[]={1,0};
		author="[A] Willard, [DAA] dedmen, [TTT]";
	};
};
class CfgAmmo {
	class SmokeShell;

	// vanilla 40mm smoke nades
	class G_40mm_Smoke: SmokeShell {
		simulation = "shotSmoke";
		deflectionSlowDown = 0;
	};
};
