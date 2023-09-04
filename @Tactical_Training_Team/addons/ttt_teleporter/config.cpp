class CfgPatches {
	class ttt_teleporter {
		requiredVersion = 1.0;
		requiredAddons[] = {"Extended_EventHandlers"};
		author[] = {"Nobody ©"};		
		units[] = {};
		weapons[] = {};
	};
};

class Extended_PostInit_EventHandlers {
	init = "[] execVM ""\ttt_teleporter\init.sqf""";
};

class CfgFunctions {
	#include "W_Teleporter\CfgFunctions.hpp"
};

#include "W_Teleporter\dialog.hpp"