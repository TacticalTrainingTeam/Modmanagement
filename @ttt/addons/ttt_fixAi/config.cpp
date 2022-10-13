class CfgPatches {
	class fix_ai {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
	};
};


class CfgFunctions {
	class fix_ai {
		tag = "fix_ai";
		class init {
			class fix_ai_init {
				file = ttt_fixAi\fix_ai.sqf;
				postInit = 1;
			};
		};		
	};
};
