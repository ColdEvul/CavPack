#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        magazines[] = {"Arma3"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "CavPack_Main",
            "rhs_main",
            "rhsusf_main"
        };
        VERSION_CONFIG;
        author[] = {"7th Cavalry Gaming"};
        authorUrl = "http://7cav.us/";
	};
};

#include "CfgHints.hpp"