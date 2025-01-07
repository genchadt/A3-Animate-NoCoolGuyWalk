class CfgPatches {
	class tsp_animate_attention {
		requiredAddons[] = {"cba_common", "A3_Anims_F"};
		units[] = {};
	};
};

//-- FUNCTIONS
class Extended_PreInit_EventHandlers {
	class tsp_animate_attention_cba {init = "['TSP Animate', 'tsp_animate_attention', 'Attention', {[player] spawn tsp_fnc_animate_attention}, {}, [52, [true, true, true]]] call CBA_fnc_addKeybind;";};
	class tsp_animate_attention_functions {init = "[] call compileScript '\tsp_animate_attention\functions.sqf'";};
};

//-- ANIMATIONS
class CfgMovesBasic {
	class Actions {
		class Default;
		class NoActions;
		class tsp_animate_attention_actions: NoActions {
			Stop = "tsp_animate_attention_idle_in";
			StopRelaxed = "tsp_animate_attention_idle_in";
			Default = "tsp_animate_attention_idle_in";
			JumpOff = "tsp_animate_attention_idle";

			WalkF = "tsp_animate_attention_walkf";
			WalkB = "tsp_animate_attention_walkb";
			WalkL = "tsp_animate_attention_walkl";
			WalkLB = "tsp_animate_attention_walklb";
			WalkLF = "tsp_animate_attention_walklf";
			WalkR = "tsp_animate_attention_walkr";
			WalkRB = "tsp_animate_attention_walkrb";
			WalkRF = "tsp_animate_attention_walkrf";

			PlayerWalkF = "tsp_animate_attention_walkf";
			PlayerWalkB = "tsp_animate_attention_walkb";
			PlayerWalkL = "tsp_animate_attention_walkl";
			PlayerWalkLB = "tsp_animate_attention_walklb";
			PlayerWalkLF = "tsp_animate_attention_walklf";
			PlayerWalkR = "tsp_animate_attention_walkr";
			PlayerWalkRB = "tsp_animate_attention_walkrb";
			PlayerWalkRF = "tsp_animate_attention_walkrf";

			PlayerSlowF = "tsp_animate_attention_walkf";
			PlayerSlowB = "tsp_animate_attention_walkb";
			PlayerSlowL = "tsp_animate_attention_walkl";
			PlayerSlowLB = "tsp_animate_attention_walklb";
			PlayerSlowLF = "tsp_animate_attention_walklf";
			PlayerSlowR = "tsp_animate_attention_walkr";
			PlayerSlowRB = "tsp_animate_attention_walkrb";
			PlayerSlowRF = "tsp_animate_attention_walkrf";

			PlayerTactF = "tsp_animate_attention_walkf";
			PlayerTactB = "tsp_animate_attention_walkb";
			PlayerTactL = "tsp_animate_attention_walkl";
			PlayerTactLB = "tsp_animate_attention_walklb";
			PlayerTactLF = "tsp_animate_attention_walklf";
			PlayerTactR = "tsp_animate_attention_walkr";
			PlayerTactRB = "tsp_animate_attention_walkrb";
			PlayerTactRF = "tsp_animate_attention_walkrf";

			SlowF = "tsp_animate_attention_walkf";
			SlowB = "tsp_animate_attention_walkb";
			SlowL = "tsp_animate_attention_walkl";
			SlowLB = "tsp_animate_attention_walklb";
			SlowLF = "tsp_animate_attention_walklf";
			SlowR = "tsp_animate_attention_walkr";
			SlowRB = "tsp_animate_attention_walkrb";
			SlowRF = "tsp_animate_attention_walkrf";

			FastF = "tsp_animate_attention_walkf";
			FastB = "tsp_animate_attention_walkb";
			FastL = "tsp_animate_attention_walkl";
			FastLB = "tsp_animate_attention_walklb";
			FastLF = "tsp_animate_attention_walklf";
			FastR = "tsp_animate_attention_walkr";
			FastRB = "tsp_animate_attention_walkrb";
			FastRF = "tsp_animate_attention_walkrf";

			PlayerStand = "tsp_animate_attention_idle_in";
			Stand = "tsp_animate_attention_idle_in";
			Die = "Unconscious";
			TactF = "tsp_animate_attention_walkf";
			upDegree = "ManPosNoWeapon";
			PrimaryWeapon = "tsp_animate_attention_idle";
			SecondaryWeapon = "";
			weaponOff = "tsp_animate_attention_idle";			
			weaponOn = "";
			Civil = "tsp_animate_attention_idle";
			turnSpeed = 16;
			limitFast = 5.5;
			useFastMove = 0;
		};
		class tsp_animate_attention_rifle_actions: NoActions {
			Stop = "tsp_animate_attention_rifle_idle";
			StopRelaxed = "tsp_animate_attention_rifle_idle";
			Default = "tsp_animate_attention_rifle_idle";
			JumpOff = "tsp_animate_attention_rifle_idle";

			WalkF = "tsp_animate_attention_rifle_walkf";
			WalkB = "tsp_animate_attention_rifle_walkb";
			WalkL = "tsp_animate_attention_rifle_walkl";
			WalkLB = "tsp_animate_attention_rifle_walklb";
			WalkLF = "tsp_animate_attention_rifle_walklf";
			WalkR = "tsp_animate_attention_rifle_walkr";
			WalkRB = "tsp_animate_attention_rifle_walkrb";
			WalkRF = "tsp_animate_attention_rifle_walkrf";

			PlayerWalkF = "tsp_animate_attention_rifle_walkf";
			PlayerWalkB = "tsp_animate_attention_rifle_walkb";
			PlayerWalkL = "tsp_animate_attention_rifle_walkl";
			PlayerWalkLB = "tsp_animate_attention_rifle_walklb";
			PlayerWalkLF = "tsp_animate_attention_rifle_walklf";
			PlayerWalkR = "tsp_animate_attention_rifle_walkr";
			PlayerWalkRB = "tsp_animate_attention_rifle_walkrb";
			PlayerWalkRF = "tsp_animate_attention_rifle_walkrf";

			PlayerSlowF = "tsp_animate_attention_rifle_walkf";
			PlayerSlowB = "tsp_animate_attention_rifle_walkb";
			PlayerSlowL = "tsp_animate_attention_rifle_walkl";
			PlayerSlowLB = "tsp_animate_attention_rifle_walklb";
			PlayerSlowLF = "tsp_animate_attention_rifle_walklf";
			PlayerSlowR = "tsp_animate_attention_rifle_walkr";
			PlayerSlowRB = "tsp_animate_attention_rifle_walkrb";
			PlayerSlowRF = "tsp_animate_attention_rifle_walkrf";

			PlayerTactF = "tsp_animate_attention_rifle_walkf";
			PlayerTactB = "tsp_animate_attention_rifle_walkb";
			PlayerTactL = "tsp_animate_attention_rifle_walkl";
			PlayerTactLB = "tsp_animate_attention_rifle_walklb";
			PlayerTactLF = "tsp_animate_attention_rifle_walklf";
			PlayerTactR = "tsp_animate_attention_rifle_walkr";
			PlayerTactRB = "tsp_animate_attention_rifle_walkrb";
			PlayerTactRF = "tsp_animate_attention_rifle_walkrf";

			SlowF = "tsp_animate_attention_rifle_walkf";
			SlowB = "tsp_animate_attention_rifle_walkb";
			SlowL = "tsp_animate_attention_rifle_walkl";
			SlowLB = "tsp_animate_attention_rifle_walklb";
			SlowLF = "tsp_animate_attention_rifle_walklf";
			SlowR = "tsp_animate_attention_rifle_walkr";
			SlowRB = "tsp_animate_attention_rifle_walkrb";
			SlowRF = "tsp_animate_attention_rifle_walkrf";

			FastF = "tsp_animate_attention_rifle_walkf";
			FastB = "tsp_animate_attention_rifle_walkb";
			FastL = "tsp_animate_attention_rifle_walkl";
			FastLB = "tsp_animate_attention_rifle_walklb";
			FastLF = "tsp_animate_attention_rifle_walklf";
			FastR = "tsp_animate_attention_rifle_walkr";
			FastRB = "tsp_animate_attention_rifle_walkrb";
			FastRF = "tsp_animate_attention_rifle_walkrf";

			PlayerStand = "tsp_animate_attention_rifle_idle";
			Stand = "tsp_animate_attention_rifle_idle";
			Die = "Unconscious";
			TactF = "tsp_animate_attention_rifle_walkf";
			upDegree = "ManPosCombat";
			PrimaryWeapon = "tsp_animate_attention_rifle_idle";
			SecondaryWeapon = "";
			weaponOff = "tsp_animate_attention_rifle_idle";			
			weaponOn = "";
			Civil = "tsp_animate_attention_rifle_idle";
			turnSpeed = 16;
			limitFast = 5.5;
			useFastMove = 0;
		};
		class tsp_animate_attention_launcher_actions: NoActions {
			Stop = "tsp_animate_attention_launcher_idle";
			StopRelaxed = "tsp_animate_attention_launcher_idle";
			Default = "tsp_animate_attention_launcher_idle";
			JumpOff = "tsp_animate_attention_launcher_idle";

			WalkF = "tsp_animate_attention_launcher_walkf";
			WalkB = "tsp_animate_attention_launcher_walkb";
			WalkL = "tsp_animate_attention_launcher_walkl";
			WalkLB = "tsp_animate_attention_launcher_walklb";
			WalkLF = "tsp_animate_attention_launcher_walklf";
			WalkR = "tsp_animate_attention_launcher_walkr";
			WalkRB = "tsp_animate_attention_launcher_walkrb";
			WalkRF = "tsp_animate_attention_launcher_walkrf";

			PlayerWalkF = "tsp_animate_attention_launcher_walkf";
			PlayerWalkB = "tsp_animate_attention_launcher_walkb";
			PlayerWalkL = "tsp_animate_attention_launcher_walkl";
			PlayerWalkLB = "tsp_animate_attention_launcher_walklb";
			PlayerWalkLF = "tsp_animate_attention_launcher_walklf";
			PlayerWalkR = "tsp_animate_attention_launcher_walkr";
			PlayerWalkRB = "tsp_animate_attention_launcher_walkrb";
			PlayerWalkRF = "tsp_animate_attention_launcher_walkrf";

			PlayerSlowF = "tsp_animate_attention_launcher_walkf";
			PlayerSlowB = "tsp_animate_attention_launcher_walkb";
			PlayerSlowL = "tsp_animate_attention_launcher_walkl";
			PlayerSlowLB = "tsp_animate_attention_launcher_walklb";
			PlayerSlowLF = "tsp_animate_attention_launcher_walklf";
			PlayerSlowR = "tsp_animate_attention_launcher_walkr";
			PlayerSlowRB = "tsp_animate_attention_launcher_walkrb";
			PlayerSlowRF = "tsp_animate_attention_launcher_walkrf";

			PlayerTactF = "tsp_animate_attention_launcher_walkf";
			PlayerTactB = "tsp_animate_attention_launcher_walkb";
			PlayerTactL = "tsp_animate_attention_launcher_walkl";
			PlayerTactLB = "tsp_animate_attention_launcher_walklb";
			PlayerTactLF = "tsp_animate_attention_launcher_walklf";
			PlayerTactR = "tsp_animate_attention_launcher_walkr";
			PlayerTactRB = "tsp_animate_attention_launcher_walkrb";
			PlayerTactRF = "tsp_animate_attention_launcher_walkrf";

			SlowF = "tsp_animate_attention_launcher_walkf";
			SlowB = "tsp_animate_attention_launcher_walkb";
			SlowL = "tsp_animate_attention_launcher_walkl";
			SlowLB = "tsp_animate_attention_launcher_walklb";
			SlowLF = "tsp_animate_attention_launcher_walklf";
			SlowR = "tsp_animate_attention_launcher_walkr";
			SlowRB = "tsp_animate_attention_launcher_walkrb";
			SlowRF = "tsp_animate_attention_launcher_walkrf";

			FastF = "tsp_animate_attention_launcher_walkf";
			FastB = "tsp_animate_attention_launcher_walkb";
			FastL = "tsp_animate_attention_launcher_walkl";
			FastLB = "tsp_animate_attention_launcher_walklb";
			FastLF = "tsp_animate_attention_launcher_walklf";
			FastR = "tsp_animate_attention_launcher_walkr";
			FastRB = "tsp_animate_attention_launcher_walkrb";
			FastRF = "tsp_animate_attention_launcher_walkrf";

			PlayerStand = "tsp_animate_attention_launcher_idle";
			Stand = "tsp_animate_attention_launcher_idle";
			Die = "Unconscious";
			TactF = "tsp_animate_attention_launcher_walkf";
			upDegree = "ManPosWeapon";
			PrimaryWeapon = "tsp_animate_attention_launcher_idle";
			SecondaryWeapon = "tsp_animate_attention_launcher_idle";
			weaponOff = "tsp_animate_attention_launcher_idle";			
			weaponOn = "";
			Civil = "tsp_animate_attention_launcher_idle";
			turnSpeed = 16;
			limitFast = 5.5;
			useFastMove = 0;
		};
	};
    class ManActions {
		tsp_animate_attention_rifle_loop[] = {"tsp_animate_attention_rifle_loop", "Gesture"};
		tsp_animate_attention_launcher_loop[] = {"tsp_animate_attention_launcher_loop", "Gesture"};

	};
};
class CfgMovesMaleSdr: CfgMovesBasic {
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
    class States {
		class amovpercmstpsnonwnondnon;
		class Acts_Getting_Up_Player;
        class tsp_animate_attention_idle: Acts_Getting_Up_Player {
			head = "headDefault";
			speed = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {0};
			leftHandIKEnd = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {0};
			rightHandIKEnd = 1;
			weaponIK = 1;
			weaponLowered = 0;
			weaponObstructed = 0;
			showWeaponAim = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			looped = true;
			file = "tsp_animate_attention\anim\idle.rtm";
			actions = "tsp_animate_attention_actions";
			showHandgun = false;
			connectTo[] = {
				"Unconscious", 0.01, 
				"tsp_animate_attention_idle", 0.02,
				"tsp_animate_attention_walkf", 0.02,
				"tsp_animate_attention_walkb", 0.02,
				"tsp_animate_attention_walkl", 0.02,
				"tsp_animate_attention_walklb", 0.02,
				"tsp_animate_attention_walklf", 0.02,
				"tsp_animate_attention_walkr", 0.02,
				"tsp_animate_attention_walkrb", 0.02,
				"tsp_animate_attention_walkrf", 0.02
			};
			interpolateTo[] = {
				"Unconscious", 0.01, 
				"tsp_animate_attention_idle", 0.02, 
				"tsp_animate_attention_idle_in", 0.02, 
				"tsp_animate_attention_idle_out", 0.02, 
				"tsp_animate_attention_walkf", 0.02,
				"tsp_animate_attention_walkb", 0.02,
				"tsp_animate_attention_walkl", 0.02,
				"tsp_animate_attention_walklb", 0.02,
				"tsp_animate_attention_walklf", 0.02,
				"tsp_animate_attention_walkr", 0.02,
				"tsp_animate_attention_walkrb", 0.02,
				"tsp_animate_attention_walkrf", 0.02
			};
			ignoreMinPlayTime[] = {"Unconscious"};
			InterpolateFrom[] = {};
			InterpolationSpeed = 2.5;
			variantsAI[] = {};
			variantsPlayer[] = {};
			enableDirectControl = 1;
			forceAim = 0;
		};
		class tsp_animate_attention_idle_in: tsp_animate_attention_idle {
			file = "tsp_animate_attention\anim\idle_in.rtm"; 
			connectTo[] = {"Unconscious", 0.01, "tsp_animate_attention_idle", 0.02};
			interpolateFrom[] = {"amovpercmstpsnonwnondnon", 0.02};
			interpolateTo[] = {"Unconscious", 0.01, "tsp_animate_attention_idle", 0.02};
			looped = false;
		};
		class tsp_animate_attention_idle_out: tsp_animate_attention_idle_in {
			file = "tsp_animate_attention\anim\idle_out.rtm"; 
			connectTo[] = {"Unconscious", 0.01, "amovpercmstpsnonwnondnon", 0.02};
			interpolateTo[] = {"Unconscious", 0.01, "amovpercmstpsnonwnondnon", 0.02};
		};
		class tsp_animate_attention_walkf: tsp_animate_attention_idle {file = "tsp_animate_attention\anim\walk.rtm"; soundEdge[] = {0.25,0.5,0.75,1}; soundEnabled = 1; soundOverride = "Walk"; speed = 1.5;};
		class tsp_animate_attention_walkb: tsp_animate_attention_walkf {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondb.rtm"; speed = 0.4;};
		class tsp_animate_attention_walkl: tsp_animate_attention_walkb {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondl.rtm";};
		class tsp_animate_attention_walklb: tsp_animate_attention_walkb {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondbl.rtm";};
		class tsp_animate_attention_walklf: tsp_animate_attention_walkb {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondfl.rtm";};
		class tsp_animate_attention_walkr: tsp_animate_attention_walkb {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondr.rtm";};
		class tsp_animate_attention_walkrb: tsp_animate_attention_walkb {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondbr.rtm";};
		class tsp_animate_attention_walkrf: tsp_animate_attention_walkb {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondfr.rtm";};

        class tsp_animate_attention_rifle_idle: tsp_animate_attention_idle {
			file = "tsp_animate_attention\anim\idle_rifle.rtm";
			actions = "tsp_animate_attention_rifle_actions";
			connectTo[] = {
				"Unconscious", 0.01, 
				"tsp_animate_attention_rifle_idle", 0.02,
				"tsp_animate_attention_rifle_walkf", 0.02,
				"tsp_animate_attention_rifle_walkb", 0.02,
				"tsp_animate_attention_rifle_walkl", 0.02,
				"tsp_animate_attention_rifle_walklb", 0.02,
				"tsp_animate_attention_rifle_walklf", 0.02,
				"tsp_animate_attention_rifle_walkr", 0.02,
				"tsp_animate_attention_rifle_walkrb", 0.02,
				"tsp_animate_attention_rifle_walkrf", 0.02
			};
			interpolateTo[] = {
				"Unconscious", 0.01, 
				"tsp_animate_attention_rifle_idle", 0.02, 
				"tsp_animate_attention_rifle_idle_in", 0.02, 
				"tsp_animate_attention_rifle_idle_out", 0.02, 
				"tsp_animate_attention_rifle_walkf", 0.02,
				"tsp_animate_attention_rifle_walkb", 0.02,
				"tsp_animate_attention_rifle_walkl", 0.02,
				"tsp_animate_attention_rifle_walklb", 0.02,
				"tsp_animate_attention_rifle_walklf", 0.02,
				"tsp_animate_attention_rifle_walkr", 0.02,
				"tsp_animate_attention_rifle_walkrb", 0.02,
				"tsp_animate_attention_rifle_walkrf", 0.02
			};
		};
		class tsp_animate_attention_rifle_idle_in: tsp_animate_attention_rifle_idle {
			file = "tsp_animate_attention\anim\idle_rifle_in.rtm"; 
			connectTo[] = {"Unconscious", 0.01, "tsp_animate_attention_rifle_idle", 0.02};
			interpolateFrom[] = {"amovpercmstpsraswrfldnon", 0.02, "amovpercmstpslowwrfldnon", 0.02};
			interpolateTo[] = {"Unconscious", 0.01, "tsp_animate_attention_rifle_idle", 0.02};
			leftHandIKCurve[] = {0,1,1,0}; rightHandIKCurve[] = {0,1,0.7,1,1,0};
			looped = false;
		};
		class tsp_animate_attention_rifle_idle_out: tsp_animate_attention_rifle_idle_in {
			file = "tsp_animate_attention\anim\idle_rifle_out.rtm"; 
			connectTo[] = {"Unconscious", 0.01, "amovpercmstpslowwrfldnon", 0.02};
			interpolateTo[] = {"Unconscious", 0.01, "amovpercmstpslowwrfldnon", 0.02};
			leftHandIKCurve[] = {0,0,1,1}; rightHandIKCurve[] = {0,0,0.7,0.3,1,1};
		};
		class tsp_animate_attention_rifle_walkf: tsp_animate_attention_rifle_idle {file = "tsp_animate_attention\anim\walk_rifle.rtm"; soundEdge[] = {0.25,0.5,0.75,1}; soundEnabled = 1; soundOverride = "Walk"; speed = 1.5;};
		class tsp_animate_attention_rifle_walkb: tsp_animate_attention_rifle_walkf {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondb.rtm"; speed = 0.4;};
		class tsp_animate_attention_rifle_walkl: tsp_animate_attention_rifle_walkb {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondl.rtm";};
		class tsp_animate_attention_rifle_walklb: tsp_animate_attention_rifle_walkb {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondbl.rtm";};
		class tsp_animate_attention_rifle_walklf: tsp_animate_attention_rifle_walkb {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondfl.rtm";};
		class tsp_animate_attention_rifle_walkr: tsp_animate_attention_rifle_walkb {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondr.rtm";};
		class tsp_animate_attention_rifle_walkrb: tsp_animate_attention_rifle_walkb {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondbr.rtm";};
		class tsp_animate_attention_rifle_walkrf: tsp_animate_attention_rifle_walkb {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondfr.rtm";};

        class tsp_animate_attention_launcher_idle: tsp_animate_attention_idle {
			file = "tsp_animate_attention\anim\idle_launcher.rtm";
			actions = "tsp_animate_attention_launcher_actions";
			weaponIK = 4;
			connectTo[] = {
				"Unconscious", 0.01, 
				"tsp_animate_attention_launcher_idle", 0.02,
				"tsp_animate_attention_launcher_walkf", 0.02,
				"tsp_animate_attention_launcher_walkb", 0.02,
				"tsp_animate_attention_launcher_walkl", 0.02,
				"tsp_animate_attention_launcher_walklb", 0.02,
				"tsp_animate_attention_launcher_walklf", 0.02,
				"tsp_animate_attention_launcher_walkr", 0.02,
				"tsp_animate_attention_launcher_walkrb", 0.02,
				"tsp_animate_attention_launcher_walkrf", 0.02
			};
			interpolateTo[] = {
				"Unconscious", 0.01, 
				"tsp_animate_attention_launcher_idle", 0.02, 
				"tsp_animate_attention_launcher_idle_in", 0.02, 
				"tsp_animate_attention_launcher_idle_out", 0.02, 
				"tsp_animate_attention_launcher_walkf", 0.02,
				"tsp_animate_attention_launcher_walkb", 0.02,
				"tsp_animate_attention_launcher_walkl", 0.02,
				"tsp_animate_attention_launcher_walklb", 0.02,
				"tsp_animate_attention_launcher_walklf", 0.02,
				"tsp_animate_attention_launcher_walkr", 0.02,
				"tsp_animate_attention_launcher_walkrb", 0.02,
				"tsp_animate_attention_launcher_walkrf", 0.02
			};
		};
		class tsp_animate_attention_launcher_idle_in: tsp_animate_attention_launcher_idle {
			file = "tsp_animate_attention\anim\idle_launcher_in.rtm"; 
			connectTo[] = {"Unconscious", 0.01, "tsp_animate_attention_launcher_idle", 0.02};
			interpolateFrom[] = {"amovpercmstpsraswlnrdnon", 0.02};
			interpolateTo[] = {"Unconscious", 0.01, "tsp_animate_attention_launcher_idle", 0.02};
			leftHandIKCurve[] = {0,1,1,0}; rightHandIKCurve[] = {0,1,0.7,1,1,0};
			looped = false;
		};
		class tsp_animate_attention_launcher_idle_out: tsp_animate_attention_launcher_idle_in {
			file = "tsp_animate_attention\anim\idle_launcher_out.rtm"; 
			connectTo[] = {"Unconscious", 0.01, "amovpercmstpsraswlnrdnon", 0.02};
			interpolateTo[] = {"Unconscious", 0.01, "amovpercmstpsraswlnrdnon", 0.02};
			leftHandIKCurve[] = {0,0,1,1}; rightHandIKCurve[] = {0,0,0.7,0.3,1,1};
		};
		class tsp_animate_attention_launcher_walkf: tsp_animate_attention_launcher_idle {file = "tsp_animate_attention\anim\walk_launcher.rtm"; soundEdge[] = {0.25,0.5,0.75,1}; soundEnabled = 1; soundOverride = "Walk"; speed = 1.5;};
		class tsp_animate_attention_launcher_walkb: tsp_animate_attention_launcher_walkf {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondb.rtm"; speed = 0.4;};
		class tsp_animate_attention_launcher_walkl: tsp_animate_attention_launcher_walkb {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondl.rtm";};
		class tsp_animate_attention_launcher_walklb: tsp_animate_attention_launcher_walkb {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondbl.rtm";};
		class tsp_animate_attention_launcher_walklf: tsp_animate_attention_launcher_walkb {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondfl.rtm";};
		class tsp_animate_attention_launcher_walkr: tsp_animate_attention_launcher_walkb {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondr.rtm";};
		class tsp_animate_attention_launcher_walkrb: tsp_animate_attention_launcher_walkb {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondbr.rtm";};
		class tsp_animate_attention_launcher_walkrf: tsp_animate_attention_launcher_walkb {file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\non\non\amovpercmwlksnonwnondfr.rtm";};
	};	
};
class CfgGesturesMale {
	skeletonName = "OFP2_ManSkeleton";
	class States {  //-- Gestures
		class GestureNo;
		class tsp_animate_attention_rifle_loop: GestureNo {
			file = "tsp_animate_attention\gestures\rifle_loop.rtm"; 
			speed = 1.5; 
			interpolationSpeed = 3; 			 
			leftHandIKCurve[] = {0}; 
			rightHandIKCurve[] = {0}; 
			looped = true; 
			mask = "attention_rifle";
		};
		class tsp_animate_attention_launcher_loop: tsp_animate_attention_rifle_loop {
			file = "tsp_animate_attention\gestures\launcher_loop.rtm";
			mask = "attention_launcher";
			interpolationSpeed = 10; 	
		};
	};
	class BlendAnims {
		attention_rifle[] = {
			"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,
			"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,
			"RightHandRing",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,
			"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,
			"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,
			"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,			
			"Pelvis",0,"Spine",0.5,"Spine1",0.6,"Spine2",0.7,"Spine3",0.8,"head",1,"neck1",1,"neck",1,"weapon",1
		};
		attention_launcher[] = {
			"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,
			"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,
			"RightHandRing",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,
			"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,
			"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,
			"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,			
			"Pelvis",0,"Spine",0.5,"Spine1",0.6,"Spine2",0.7,"Spine3",0.8,"head",1,"neck1",1,"neck",1,"launcher",1
		};
	};
};