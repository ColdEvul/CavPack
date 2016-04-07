class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class CAV_Actions {
                condition = 1;
                displayName = "7th Cavalry";
                exceptions[] = {"isNotInside","notOnMap","isNotSitting"};
                icon = QUOTE(PATHTOF(UI\icons\CAV_Actions.paa));
                priority = 0;
                showDisabled = 1;
                statement = "";
            };
        };
    };
};