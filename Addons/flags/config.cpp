#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            "CAV_flagSmall_Blue",
            "CAV_flagSmall_Red",
            "CAV_flagSmall_White",
            "CAV_flagSmall_NATO",
            
            "CAV_flagSmall_US",
            "CAV_flag_7thCavalry00",
            "CAV_flagSmall_7thCavalry00",
            "CAV_flag_7thCavalry01",
            "CAV_flagSmall_7thCavalry01"
        };
        weapons[] = {};
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"CavPack_main"};
        VERSION_CONFIG;
        author[] = {"Brostrom.A"};
        authorUrl = "http://7cav.us/";
	};
};

#include "CfgVehicles.hpp"