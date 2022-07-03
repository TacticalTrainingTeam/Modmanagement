class CfgPatches {
	class RP {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"Extended_EventHandlers"};
		author[] = {"V1irus"};
	};
};

class Extended_PreInit_EventHandlers
{
    class check_RP {
    
    init = "if ((isNil ""RP"")) then { RP = true; [] execVM ""\RP\update.sqf"";}";
    };
    class RP_preStart {
		init = "call compile preprocessFileLineNumbers ""\RP\pi.sqf""";
    };
        
};


class Extended_PreInit_EventHandlers {
    class RP_preStart {
		init = "call compile preprocessFileLineNumbers ""\RP\pi.sqf""";
    };
};



class CfgDiscordRichPresence {
    applicationID="919991023218868235";             // Provided by discord
    defaultDetails="";            // Upper text
    defaultState="";              // Lower text  
    defaultLargeImageKey="ttt_logo";      // Large image
    defaultLargeImageText="TTT - Arma 3";     // Large image hover text
    defaultSmallImageKey="";      // Small image
    defaultSmallImageText="";     // Small image hover text
    defaultButtons[]={};          // Button texts and urls
    useTimeElapsed=1;             // Show time elapsed since the player connected (1 - true, 0 - false)
};