class CfgPatches {
	class tsp_animate_limit {
        requiredAddons[]  =  {
			"A3_Anims_F",
			"A3_Anims_F_AoW",
			"A3_Anims_F_Bootcamp",
			"A3_Anims_F_Config_Sdr",
			"A3_Anims_F_Config_Sdr_WeaponSwitching",
			"A3_Anims_F_Data",
			"A3_Anims_F_Enoch",
			"A3_Anims_F_EPA",
			"A3_Anims_F_EPC",
			"A3_Anims_F_Exp",
			"A3_Anims_F_Exp_A",
			"A3_Anims_F_Exp_Revive",
			"A3_Anims_F_Heli",
			"A3_Anims_F_Jets",
			"A3_Anims_F_Kart",
			"A3_Anims_F_Mark",
			"A3_Anims_F_Mark_Deployment",
			"A3_Anims_F_Mod"
        };
        units[]  =  {};
	};
};

class CfgMovesBasic {
	class Default;
	class DefaultDie;
	class ManActions;
};
class CfgMovesMaleSdr: CfgMovesBasic {
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
    class StandBase;
	class States {
        class SprintBaseDf: StandBase {limitGunMovement = 0;};
        class AmovPercMstpSlowWrflDnon: StandBase {limitGunMovement = 0;};
        class AidlPercMstpSlowWrflDnon_G0S: AmovPercMstpSlowWrflDnon {limitGunMovement = 0;};
        class AmovPercMstpSrasWrflDnon: AmovPercMstpSlowWrflDnon {limitGunMovement = 1;};
        class AmovPknlMstpSlowWrflDnon: AmovPercMstpSlowWrflDnon {};
        class AidlPknlMstpSlowWrflDnon_G0S: AmovPknlMstpSlowWrflDnon {};
        class AmovPknlMstpSrasWrflDnon: AmovPknlMstpSlowWrflDnon {limitGunMovement = 1;};
        class AmovPercMstpSrasWpstDnon: StandBase {limitGunMovement = 1;};
        class AmovPercMstpSlowWpstDnon: AmovPercMstpSrasWpstDnon {limitGunMovement = 0;};
        class AmovPknlMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon {};
        class AmovPknlMstpSlowWpstDnon: AmovPknlMstpSrasWpstDnon {limitGunMovement = 0;};
        class AidlPknlMstpSlowWpstDnon_G0S: AmovPknlMstpSlowWpstDnon {};
        class AmovPknlMwlkSlowWpstDf: AidlPknlMstpSlowWpstDnon_G0S {limitGunMovement = 0;};
        class AmovPercMstpSnonWnonDnon: StandBase {limitGunMovement = 0;};
        class AmovPercMwlkSlowWrflDf_ver2;
        class AmovPknlMwlkSlowWrflDf: AidlPknlMstpSlowWpstDnon_G0S {limitGunMovement = 0.1;};
        class AmovPknlMrunSlowWrflDf: AidlPknlMstpSlowWrflDnon_G0S {};
        class AmovPknlMtacSlowWrflDf: AmovPknlMrunSlowWrflDf {limitGunMovement = 0.1;};
        class AmovPercMwlkSrasWpstDf: AmovPercMstpSrasWpstDnon {};
        class AmovPercMwlkSlowWpstDf: AmovPercMwlkSrasWpstDf {limitGunMovement = 0.1;};
        class AmovPercMtacSlowWpstDf: AmovPercMwlkSlowWpstDf {limitGunMovement = 0;};
        class AmovPercMevaSrasWrflDf: SprintBaseDf {limitGunMovement = 0;};
        class AmovPercMstpSoptWbinDnon: AmovPercMstpSlowWrflDnon {limitGunMovement = 1;};
        class AmovPknlMstpSoptWbinDnon: AmovPknlMstpSrasWrflDnon {limitGunMovement = 1;};

        class AmovPercMrunSlowWrflDf: AmovPercMstpSlowWrflDnon {limitGunMovement = 0;};
        class AmovPercMrunSlowWrflDfl: AmovPercMrunSlowWrflDf {limitGunMovement = 0;};
        class AmovPercMrunSlowWrflDl: AmovPercMrunSlowWrflDfl {limitGunMovement = 0;};
        class AmovPercMrunSlowWrflDbl: AmovPercMrunSlowWrflDfl {limitGunMovement = 0;};
        class AmovPercMrunSlowWrflDb: AmovPercMrunSlowWrflDfl {limitGunMovement = 0;};
        class AmovPercMrunSlowWrflDbr: AmovPercMrunSlowWrflDfl {limitGunMovement = 0;};
        class AmovPercMrunSlowWrflDr: AmovPercMrunSlowWrflDfl {limitGunMovement = 0;};
        class AmovPercMrunSlowWrflDfr: AmovPercMrunSlowWrflDfl {limitGunMovement = 0;};
        class AmovPercMwlkSlowWrflDf: AmovPercMwlkSlowWrflDf_ver2 {limitGunMovement = 0;};
        class AmovPercMwlkSlowWrflDfl_ver2;
        class AmovPercMwlkSlowWrflDfr_ver2;
        class AmovPercMwlkSlowWrflDl_ver2;
        class AmovPercMwlkSlowWrflDr_ver2;
        class AmovPercMwlkSlowWrflDb_ver2;
        class AmovPercMwlkSlowWrflDbl_ver2;
        class AmovPercMwlkSlowWrflDbr_ver2;
        class AmovPercMwlkSlowWrflDfl: AmovPercMwlkSlowWrflDfl_ver2 {limitGunMovement = 0;};
        class AmovPercMwlkSlowWrflDfr: AmovPercMwlkSlowWrflDfr_ver2 {limitGunMovement = 0;};
        class AmovPercMwlkSlowWrflDl: AmovPercMwlkSlowWrflDl_ver2 {limitGunMovement = 0;};
        class AmovPercMwlkSlowWrflDr: AmovPercMwlkSlowWrflDr_ver2 {limitGunMovement = 0;};
        class AmovPercMwlkSlowWrflDb: AmovPercMwlkSlowWrflDb_ver2 {limitGunMovement = 0;};
        class AmovPercMwlkSlowWrflDbl: AmovPercMwlkSlowWrflDbl_ver2 {limitGunMovement = 0;};
        class AmovPercMwlkSlowWrflDbr: AmovPercMwlkSlowWrflDbr_ver2 {limitGunMovement = 0;};
	};
};


/*
    classesvar = [
        "AmovPercMstpSnonWnonDnon",
        "AmovPercMevaSrasWrflDf",
        "AmovPercMstpSlowWrflDnon",
        "AmovPercMwlkSlowWrflDf",
        "AmovPknlMstpSlowWrflDnon",
        "AidlPknlMstpSlowWrflDnon_G0S",
        "AmovPknlMrunSlowWrflDf",
        "AmovPknlMwlkSlowWrflDf",
        "AmovPknlMtacSlowWrflDf",
        "AmovPknlMtacSlowWrflDf",
        "AidlPercMstpSlowWrflDnon_G0S",
        "AmovPercMstpSrasWrflDnon",
        "AmovPknlMstpSrasWrflDnon",
        "AmovPercMstpSoptWbinDnon",
        "AmovPknlMstpSoptWbinDnon",
        "AmovPercMstpSrasWpstDnon",
        "AmovPknlMstpSrasWpstDnon",
        "AmovPknlMstpSlowWpstDnon",
        "AidlPknlMstpSlowWpstDnon_G0S",
        "AmovPercMwlkSrasWpstDf",
        "AmovPercMwlkSlowWpstDf",
        "AmovPknlMwlkSlowWpstDf",
        "AmovPercMtacSlowWpstDf",
        "AmovPercMstpSlowWpstDnon"
    ];
    classesvar = [
        "AmovPercMwlkSlowWrflDf",
        "AmovPercMwlkSlowWrflDfl",
        "AmovPercMwlkSlowWrflDfr",
        "AmovPercMwlkSlowWrflDl",
        "AmovPercMwlkSlowWrflDr",
        "AmovPercMwlkSlowWrflDbl",
        "AmovPercMwlkSlowWrflDbr",
        "AmovPercMwlkSlowWrflDb",
        "AmovPercMrunSlowWrflDf",
        "AmovPercMrunSlowWrflDfl",
        "AmovPercMrunSlowWrflDfr",
        "AmovPercMrunSlowWrflDl",
        "AmovPercMrunSlowWrflDr",
        "AmovPercMrunSlowWrflDbl",
        "AmovPercMrunSlowWrflDbr",
        "AmovPercMrunSlowWrflDb"
    ];
    returnvar = [];
    {
        [configName _x, configName inheritsFrom _x] params ["_name", "_parent"];
        returnvar pushBack ["class "+_name+": "+_parent+" {};"];
    } forEach (("true" configClasses (configFile >> "CfgMovesMaleSdr" >> "States")) select {configName _x in classesvar});
    returnvar
*/