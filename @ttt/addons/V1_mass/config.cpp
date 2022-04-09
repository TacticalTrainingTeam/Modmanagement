class CfgPatches {
	class V1_mass {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"Extended_EventHandlers"};
		author[] = {"V1irus"};
	};
};


class Extended_PreInit_EventHandlers {
    class reim_hunterKiller_preStart {
		init = "call compile preprocessFileLineNumbers ""\V1_mass\pi.sqf""";
    };
};


class CfgFunctions {
	class V1_Mass {
		tag = "V1_mass";
		class init {
			file = "\getmass";
			class getmass {
				file = V1_mass\fn_getmass.sqf;
				preInit = 1;
			};
		};		
	};

    class V1_lift {
        tag = "V1_mass";
        class init {
            file = "\getlift";
            class getlift {
				file = V1_mass\fn_getlift.sqf;
				preInit = 1;
			};

        };
    
	};
};
