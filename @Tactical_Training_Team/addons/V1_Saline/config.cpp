class CfgPatches {
	class V1_Saline {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"Extended_EventHandlers"};
		author[] = {"V1irus"};
	};
};


class Extended_PreInit_EventHandlers {
    class V1_Saline_preStart {
		init = "call compile preprocessFileLineNumbers ""\V1_Saline\pi.sqf""";
    };
};


class CfgFunctions {
	class V1_Saline {
		tag = "V1_Saline";
		class init {
			file = "\V1_Saline";
			class Saline {
				file = V1_Saline\fn_Saline.sqf;
				postInit = 1;
			};
		};		
	};
};
