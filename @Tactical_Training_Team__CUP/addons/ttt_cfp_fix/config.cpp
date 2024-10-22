class CfgPatches {
    class ADDON {
        name = "CFP - BACKPACK FIX";
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"ace_trenches","ace_logistics_wirecutter", "cfp_main"};
        skipWhenMissingDependencies = 1;
        author = "TacticalTrainingTeam";
        authors[] = {"Andx"};
        url = "http://www.tacticalteam.de";

        // this prevents any patched class from requiring this addon
        addonRootClass = "A3_Characters_F";
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"