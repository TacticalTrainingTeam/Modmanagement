#include "BIS_AddonInfo.hpp"
class CfgPatches {
	class ABI_SmokeFixRHS
 	{
		units[] = {};
		weapons[] = {};
		author = "Abbi";
 		requiredVersion = 0.1;
		requiredAddons[] = { "ABI_SmokeFix", "rhs_c_weapons", "rhsusf_c_weapons" };
 	};
};

class CfgAmmo {
	class SmokeShell;
	class SmokeShellBlue;
	class SmokeShellGreen;
	class SmokeShellOrange;
	class SmokeShellPurple;
	class SmokeShellRed;
	class SmokeShellYellow;

	// RHS american smoke grenades
	class rhs_40mm_smoke_green: SmokeShellGreen {
		simulation = "shotSmoke";
		deflectionSlowDown = 0;
	};

	class rhs_40mm_smoke_red: SmokeShellRed {
		simulation = "shotSmoke";
		deflectionSlowDown = 0;
	};

	class rhs_40mm_smoke_white: SmokeShell {
		simulation = "shotSmoke";
		deflectionSlowDown = 0;
	};

	class rhs_40mm_smoke_yellow: SmokeShellYellow {
		simulation = "shotSmoke";
		deflectionSlowDown = 0;
	};

	// RHS russian smoke grenades
	class rhs_g_vog25;

	class rhs_g_vg40md_green: rhs_g_vog25 {
		simulation = "shotSmoke";
		deflectionSlowDown = 0;
	};

	class rhs_g_vg40md_red: rhs_g_vog25 {
		simulation = "shotSmoke";
		deflectionSlowDown = 0;
	};

	class rhs_g_vg40md_white: rhs_g_vog25 {
		simulation = "shotSmoke";
		deflectionSlowDown = 0;
	};
};