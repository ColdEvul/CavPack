class CfgHints {
    //HintRemover
    class Arma3 {
        dlc = -1;
    };
    class Command {
        dlc = -1;
    };
    class Common {
        dlc = -1;
    };
    class Curator {
        dlc = -1;
    };
    class Damage {
        dlc = -1;
    };
    class Default {
        dlc = -1;
    };
    class DlcMessage {
        dlc = -1;
    };
    class DynamicGroups {
        dlc = -1;
    };
    class ExplosivesList {
        dlc = -1;
    };
    class FiringDrills {
        dlc = -1;
    };
    class GroundSupport {
        dlc = -1;
    };
    class Guide {
        dlc = -1;
    };
    class Hcommand {
        dlc = -1;
    };
    class Helicopters {
        dlc = -1;
    };
    class InfantryMovement {
        dlc = -1;
    };
    class Learn {
        dlc = -1;
    };
    class MP_Marksmen {
        dlc = -1;
    };
    class Multiplayer {
        dlc = -1;
    };
    class Navigation {
        dlc = -1;
    };
    class NexusUpdate {
        dlc = -1;
    };
    class PremiumContent {
        dlc = -1;
    };
    class RHS_AFRF {
        dlc = -1;
    };
    class RHS_USAF {
        dlc = -1;
    };
    class Slingloading {
        dlc = -1;
    };
    class Spectating {
        dlc = -1;
    };
    class Tactics {
        dlc = -1;
    };
    class TimeTrials {
        dlc = -1;
    };
    class UAV {
        dlc = -1;
    };
    class Vehicle {
        dlc = -1;
    };
    class VehicleList {
        dlc = -1;
    };
    class View {
        dlc = -1;
    };
    class WeaponList {
        dlc = -1;
    };
    class Weapons {
        dlc = -1;
    };
    class Weapons_basic {
        dlc = -1;
    };
    
    class CAVPACK_MANUAL_MAIN {
        displayName = "7th Cavalry Gaming";
        logicalOrder = 1;
        class CAVPACK_MANUAL_MAINDIARY {
            displayName = "7th Cavalry";
            displayNameShort = "7CAV";
            description = "<br/><br/><a href='http://7cav.us/'>www.7cav.us</a>";
            image = QUOTE(PATHTOF(data\logo_cav.paa));
        };
        class CAVPACK_MANUAL_CAVPACK {
            displayName = "CavPack";
            displayNameShort = VERSION;
            description = "CavPack is a package of Arma 3 mods that have been chosen to be used in all official 7th Cavalry Operations. We try our best to select mods that would fit well in the experience we are trying to provide for our members.<br/><br/>%3Current mods in the pack:%4<br/>%2ACE3<br/>%2Ares<br/>%2CAF Agressors<br/>%2Cav Boxes<br/>%2CBA_A3<br/>%2CODI Artillery<br/>%2cTAB<br/>%2Headgear and Headquarters<br/>%2Mission Enhanced Little Bird<br/>%2Notepad and 9 Liner<br/>%2RH Accessories<br/>%2RHS Armed Forces of the Russian Federation<br/>%2RHS United Armed Forces<br/>%2Shack Tac GUIA and Utilities<br/>%2Stryker Pack<br/>%2TF47 Launchers<br/>%2TFR<br/>%2USAF<br/>%2USAF HAD<br/><br/><a href='https://7cav.us/wiki/Wiki-Pages/CavPack'>www.7cav.us/wiki/Wiki-Pages/CavPack</a>";
            image = QUOTE(PATHTOF(data\logo_cav.paa));
        };
    };
    
    class CAVPACK_MANUAL_CLS {
        displayName = "Combat Lifesaver Course";
        logicalOrder = 101;
        class ESSENTIAL_KNOWLEDGE {
            displayName = "Essential Knowledge";
            //displayNameShort = "";
            description = "%3The Combat Lifesaver%4<br/><br/>The combat lifesaver is a bridge between the self-aid/buddy-aid training given to all soldiers during the Training Unit and the medical training given to the combat medic.<br/><br/>The combat lifesaver is a %3nonmedical%4 soldier who provides lifesaver measures as a %3secondary%4 mission as his primary (combat) mission allows.  The combat lifesaver may also assist the combat medic in providing care and preparing casualties for evacuation as long as the combat lifesaver has no duties to perform.<br/><br/>Within a Squad in the 7th Cavalry one soldier, normally a rifleman within the bravo Fire Team, will be trained as a combat lifesaver.  Due to a combat lifesaver being present in every infantry Squad, they are able to provide care to a casualty that can save their life prior to the arrival of medical personnel, which can take several minutes.";
            image = "\A3\Ui_f\data\GUI\Cfg\Hints\Rules_ca.paa";
            arguments[] = {};
        };
        class TCCC {
            displayName = "Tactical Combat Casualty Care";
            displayNameShort = "TCCC";
            description = "";
            image = "\A3\Ui_f\data\GUI\Cfg\Hints\Rules_ca.paa";
            arguments[] = {};
        };
    };
};