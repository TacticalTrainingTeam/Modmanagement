class CfgPatches {
	class pax_unload {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"Extended_EventHandlers"};
		author[] = {"V1irus"};
	};
};

class Extended_PreInit_EventHandlers
{
    init = "if ((isNil ""ai_fix"")) then { ai_fix = true; [] execVM ""\ai_fix\initServer.sqf"";}";
        
};