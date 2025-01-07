class CfgPatches {
	class tsp_animate_swim {
		requiredAddons[] = {"A3_Data_F_Sams_Loadorder"};
		units[] = {};
	};
};

//-- ANIMATIONS
class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic {
	class States {
		class AswmPercMstpSnonWnonDnon; class AswmPercMrunSnonWnonDf: AswmPercMstpSnonWnonDnon {speed = 0.3;};
		class AsswPercMstpSnonWnonDnon; class AsswPercMrunSnonWnonDf: AsswPercMstpSnonWnonDnon {speed = 0.3;};
		class AbswPercMstpSnonWnonDnon; class AbswPercMrunSnonWnonDf: AbswPercMstpSnonWnonDnon {speed = 0.3;};
		class AdvePercMstpSnonWrflDnon; class AdvePercMrunSnonWrflDf: AdvePercMstpSnonWrflDnon {speed = 0.15;};	
		class AsdvPercMstpSnonWrflDnon; class AsdvPercMrunSnonWrflDf: AsdvPercMstpSnonWrflDnon {speed = 0.15;};
		class AbdvPercMstpSnonWrflDnon; class AbdvPercMrunSnonWrflDf: AbdvPercMstpSnonWrflDnon {speed = 0.15;};
	};
};