class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"ace_common", "cfp_main"};
        skipWhenMissingDependencies = 1;
        author = "Andx";
        authors[] = {"Andx"};
        url = "http://www.tacticalteam.de";

        // this prevents any patched class from requiring this addon
        addonRootClass = "A3_Characters_F";
    };
};

class CfgVehicles
{
	class Bag_Base;

    class CFP_Cutters: Bag_Base
    {
        maximumLoad = 25; //was 20, but ACE_Wirecutter is mass = 25
        ace_logistics_wirecutter_hasWirecutter = 1; //1 for true, 0 for false.
    };
};
