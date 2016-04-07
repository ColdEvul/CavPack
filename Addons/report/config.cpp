#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "CavPack_Main",
            "CavPack_Interact_menu"
        };
        VERSION_CONFIG;
        author[] = {"7th Cavalry Gaming"};
        authorUrl = "http://7cav.us/";
	};
};

#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"