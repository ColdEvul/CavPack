class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class CAV_Actions {
                class CAV_showACEReport {
                    condition = 1;
                    displayName = "ACE report";
                    exceptions[] = {"isNotInside","notOnMap","isNotSitting"};
                    //icon = QUOTE(PATHTOF(UI\icons\CAV_Actions.paa));
                    priority = 0;
                    showDisabled = 1;
                    statement = QUOTE(_player call FUNC(showAceReport));
                };
            };
        };
    };
};