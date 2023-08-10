#include "BIS_AddonInfo.hpp"
class CfgPatches {
    class amp_spotlight {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "Ampersand";
    };
};

class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay
{
	class Spotlight
	{
		class TTTServerEvent
		{
			text = "Tactical Training Team - Event Server"; // Text displayed on the square button, converted to upper-case
			textIsQuote = 0; // 1 to add quotation marks around the text
			picture = "\ttt_spotlight_event\button.paa"; // Square picture, ideally 512x512
			//video = "\a3\Ui_f\Video\spotlight_1_Apex.ogv"; // Video played on mouse hover
			action = "0 = [_this, 'game.tacticalteam.de', '2382', '130'] execVM '\ttt_spotlight_event\joinServer.sqf';";
			actionText = "Join: Tactical Training Team - Event Server"; // Text displayed in top left corner of on-hover white frame
			condition = "true"; // Condition for showing the spotlight
		};
	};
};
