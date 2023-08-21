class CfgPatches {
	class reim_hunterKiller {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"Extended_EventHandlers"};
		author[] = {"Reimchen"};
	};
};

class Extended_PreInit_EventHandlers {
    class reim_hunterKiller_preStart {
		init = "call compile preprocessFileLineNumbers ""\reim_hunterKiller\keybinding.sqf""";
    };
};

class CfgFunctions {
	class reim_Function_hunterKiller {
		tag = "reim_hunterKiller";
		class init {
			file = "\reim_hunterKiller";
			class hunterKiller {};
		};
	};
};
