class CfgPatches {
	class ttt_teleporter {
		requiredVersion = 1.0;
		requiredAddons[] = {"Extended_EventHandlers"};
		author[] = {"Nobody ©"};
	};
};

class Extended_PostInit_EventHandlers {
	init = "[] execVM ""\ttt_teleporter\init.sqf""";
};

class CfgFunctions {
	#include "W_Teleporter\CfgFunctions.hpp"
};

#include "W_Teleporter\dialog.hpp"

class CLib {
    Modules[] = {"CLib", "Streamator"};
    useExperimentalAutoload = 0;
    useCompressedFunction = 0;
    useFallbackRemoteExecution = 0;
    FrameGraphSize = 128;
};