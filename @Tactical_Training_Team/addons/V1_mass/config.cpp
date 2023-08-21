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
    class V1_Mass_preStart {
		init = "call compile preprocessFileLineNumbers ""\V1_mass\pi.sqf""";
    };
};


class CfgFunctions {
	class V1_Mass {
		tag = "V1_mass";
		class init {
			class getmass {
				file = V1_mass\fn_getmass.sqf;
				preInit = 1;
			};
		};		
	};
	class V1_massACE {
        tag = "V1_mass";
        class init {
            class getmassACE {
				file = V1_mass\fn_getmassACE.sqf;
				preInit = 1;
			};

        };
    
	};
    class V1_lift {
        tag = "V1_mass";
        class init {
            class getlift {
				file = V1_mass\fn_getlift.sqf;
				preInit = 1;
			};

        };
    
	};

};
