class CfgPatches {
	class pax_unload {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"Extended_EventHandlers"};
		author[] = {"Nobody ©"};
	};
};

class Extended_PreInit_EventHandlers
{
    init = "if ((isNil ""pax_unload_nobody"")) then { pax_unload_nobody = true; [] execVM ""\pax_unload\init.sqf"";}";
        
};