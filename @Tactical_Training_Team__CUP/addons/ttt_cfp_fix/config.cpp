class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"ace_common", "cfp_main"};
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