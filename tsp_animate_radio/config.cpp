class CfgPatches {
	class tsp_animate_radio {
		requiredAddons[] = {"cba_common", "tsp_core"};
		units[] = {};
	};
};

//-- FUNCTIONS
class Extended_PreInit_EventHandlers {class tsp_animate_radio_cba {init = "[] call compileScript ['\tsp_animate_radio\cba.sqf']";}; class tsp_animate_radio_functions {init = "[] call compileScript ['\tsp_animate_radio\functions.sqf']";};};
class Extended_PostInit_EventHandlers {class tsp_animate_radio_init {init = "['CBA_settingsInitialized', {[] spawn compileScript ['\tsp_animate_radio\init.sqf']}] call CBA_fnc_addEventHandler;";};};

//-- HANDSET MODEL
class CfgVehicles {
	class House_F;
	class tsp_h189: House_F {displayName = "H189 Handset"; model = "tsp_animate_radio\h189.p3d";};
};

//-- ANIMATIONS
class CfgMovesBasic {
    class ManActions {
		tsp_animate_radio_ear_wnon_lnon[] = {"tsp_animate_radio_ear_wnon_lnon", "Gesture"};
		tsp_animate_radio_ear_wrfl_lnon[] = {"tsp_animate_radio_ear_wrfl_lnon", "Gesture"};
		tsp_animate_radio_ear_wrfl_lhig[] = {"tsp_animate_radio_ear_wrfl_lhig", "Gesture"};
		tsp_animate_radio_ear_wrfl_llow[] = {"tsp_animate_radio_ear_wrfl_llow", "Gesture"};
		tsp_animate_radio_ear_wpst_lnon[] = {"tsp_animate_radio_ear_wpst_lnon", "Gesture"};
		tsp_animate_radio_ear_wpst_lhig[] = {"tsp_animate_radio_ear_wpst_lhig", "Gesture"};
		tsp_animate_radio_ear_wpst_llow[] = {"tsp_animate_radio_ear_wpst_llow", "Gesture"};
		tsp_animate_radio_ear_wnon_lnon_in[] = {"tsp_animate_radio_ear_wnon_lnon_in", "Gesture"};
		tsp_animate_radio_ear_wrfl_lnon_in[] = {"tsp_animate_radio_ear_wrfl_lnon_in", "Gesture"};
		tsp_animate_radio_ear_wrfl_lhig_in[] = {"tsp_animate_radio_ear_wrfl_lhig_in", "Gesture"};
		tsp_animate_radio_ear_wrfl_llow_in[] = {"tsp_animate_radio_ear_wrfl_llow_in", "Gesture"};
		tsp_animate_radio_ear_wpst_lnon_in[] = {"tsp_animate_radio_ear_wpst_lnon_in", "Gesture"};
		tsp_animate_radio_ear_wpst_lhig_in[] = {"tsp_animate_radio_ear_wpst_lhig_in", "Gesture"};
		tsp_animate_radio_ear_wpst_llow_in[] = {"tsp_animate_radio_ear_wpst_llow_in", "Gesture"};

		tsp_animate_radio_vest_wnon_lnon[] = {"tsp_animate_radio_vest_wnon_lnon", "Gesture"};
		tsp_animate_radio_vest_wrfl_lnon[] = {"tsp_animate_radio_vest_wrfl_lnon", "Gesture"};
		tsp_animate_radio_vest_wrfl_lhig[] = {"tsp_animate_radio_vest_wrfl_lhig", "Gesture"};
		tsp_animate_radio_vest_wrfl_llow[] = {"tsp_animate_radio_vest_wrfl_llow", "Gesture"};
		tsp_animate_radio_vest_wpst_lnon[] = {"tsp_animate_radio_vest_wpst_lnon", "Gesture"};
		tsp_animate_radio_vest_wpst_lhig[] = {"tsp_animate_radio_vest_wpst_lhig", "Gesture"};
		tsp_animate_radio_vest_wpst_llow[] = {"tsp_animate_radio_vest_wpst_llow", "Gesture"};
		tsp_animate_radio_vest_wnon_lnon_in[] = {"tsp_animate_radio_vest_wnon_lnon_in", "Gesture"};
		tsp_animate_radio_vest_wrfl_lnon_in[] = {"tsp_animate_radio_vest_wrfl_lnon_in", "Gesture"};
		tsp_animate_radio_vest_wrfl_lhig_in[] = {"tsp_animate_radio_vest_wrfl_lhig_in", "Gesture"};
		tsp_animate_radio_vest_wrfl_llow_in[] = {"tsp_animate_radio_vest_wrfl_llow_in", "Gesture"};
		tsp_animate_radio_vest_wpst_lnon_in[] = {"tsp_animate_radio_vest_wpst_lnon_in", "Gesture"};
		tsp_animate_radio_vest_wpst_lhig_in[] = {"tsp_animate_radio_vest_wpst_lhig_in", "Gesture"};
		tsp_animate_radio_vest_wpst_llow_in[] = {"tsp_animate_radio_vest_wpst_llow_in", "Gesture"};

		tsp_animate_radio_hand_wnon_lnon[] = {"tsp_animate_radio_hand_wnon_lnon", "Gesture"};
		tsp_animate_radio_hand_wrfl_lnon[] = {"tsp_animate_radio_hand_wrfl_lnon", "Gesture"};
		tsp_animate_radio_hand_wrfl_lhig[] = {"tsp_animate_radio_hand_wrfl_lhig", "Gesture"};
		tsp_animate_radio_hand_wrfl_llow[] = {"tsp_animate_radio_hand_wrfl_llow", "Gesture"};
		tsp_animate_radio_hand_wpst_lnon[] = {"tsp_animate_radio_hand_wpst_lnon", "Gesture"};
		tsp_animate_radio_hand_wpst_lhig[] = {"tsp_animate_radio_hand_wpst_lhig", "Gesture"};
		tsp_animate_radio_hand_wpst_llow[] = {"tsp_animate_radio_hand_wpst_llow", "Gesture"};
		tsp_animate_radio_hand_wnon_lnon_in[] = {"tsp_animate_radio_hand_wnon_lnon_in", "Gesture"};
		tsp_animate_radio_hand_wrfl_lnon_in[] = {"tsp_animate_radio_hand_wrfl_lnon_in", "Gesture"};
		tsp_animate_radio_hand_wrfl_lhig_in[] = {"tsp_animate_radio_hand_wrfl_lhig_in", "Gesture"};
		tsp_animate_radio_hand_wrfl_llow_in[] = {"tsp_animate_radio_hand_wrfl_llow_in", "Gesture"};
		tsp_animate_radio_hand_wpst_lnon_in[] = {"tsp_animate_radio_hand_wpst_lnon_in", "Gesture"};
		tsp_animate_radio_hand_wpst_lhig_in[] = {"tsp_animate_radio_hand_wpst_lhig_in", "Gesture"};
		tsp_animate_radio_hand_wpst_llow_in[] = {"tsp_animate_radio_hand_wpst_llow_in", "Gesture"};

		tsp_animate_radio_ear_wnon_lnon_aim[] = {"tsp_animate_radio_ear_wnon_lnon_aim", "Gesture"};
		tsp_animate_radio_ear_wrfl_lnon_aim[] = {"tsp_animate_radio_ear_wrfl_lnon_aim", "Gesture"};
		tsp_animate_radio_ear_wrfl_lhig_aim[] = {"tsp_animate_radio_ear_wrfl_lhig_aim", "Gesture"};
		tsp_animate_radio_ear_wrfl_llow_aim[] = {"tsp_animate_radio_ear_wrfl_llow_aim", "Gesture"};
		tsp_animate_radio_ear_wpst_lnon_aim[] = {"tsp_animate_radio_ear_wpst_lnon_aim", "Gesture"};
		tsp_animate_radio_ear_wpst_lhig_aim[] = {"tsp_animate_radio_ear_wpst_lhig_aim", "Gesture"};
		tsp_animate_radio_ear_wpst_llow_aim[] = {"tsp_animate_radio_ear_wpst_llow_aim", "Gesture"};
		tsp_animate_radio_ear_wnon_lnon_in_aim[] = {"tsp_animate_radio_ear_wnon_lnon_in_aim", "Gesture"};
		tsp_animate_radio_ear_wrfl_lnon_in_aim[] = {"tsp_animate_radio_ear_wrfl_lnon_in_aim", "Gesture"};
		tsp_animate_radio_ear_wrfl_lhig_in_aim[] = {"tsp_animate_radio_ear_wrfl_lhig_in_aim", "Gesture"};
		tsp_animate_radio_ear_wrfl_llow_in_aim[] = {"tsp_animate_radio_ear_wrfl_llow_in_aim", "Gesture"};
		tsp_animate_radio_ear_wpst_lnon_in_aim[] = {"tsp_animate_radio_ear_wpst_lnon_in_aim", "Gesture"};
		tsp_animate_radio_ear_wpst_lhig_in_aim[] = {"tsp_animate_radio_ear_wpst_lhig_in_aim", "Gesture"};
		tsp_animate_radio_ear_wpst_llow_in_aim[] = {"tsp_animate_radio_ear_wpst_llow_in_aim", "Gesture"};

		tsp_animate_radio_vest_wnon_lnon_aim[] = {"tsp_animate_radio_vest_wnon_lnon_aim", "Gesture"};
		tsp_animate_radio_vest_wrfl_lnon_aim[] = {"tsp_animate_radio_vest_wrfl_lnon_aim", "Gesture"};
		tsp_animate_radio_vest_wrfl_lhig_aim[] = {"tsp_animate_radio_vest_wrfl_lhig_aim", "Gesture"};
		tsp_animate_radio_vest_wrfl_llow_aim[] = {"tsp_animate_radio_vest_wrfl_llow_aim", "Gesture"};
		tsp_animate_radio_vest_wpst_lnon_aim[] = {"tsp_animate_radio_vest_wpst_lnon_aim", "Gesture"};
		tsp_animate_radio_vest_wpst_lhig_aim[] = {"tsp_animate_radio_vest_wpst_lhig_aim", "Gesture"};
		tsp_animate_radio_vest_wpst_llow_aim[] = {"tsp_animate_radio_vest_wpst_llow_aim", "Gesture"};
		tsp_animate_radio_vest_wnon_lnon_in_aim[] = {"tsp_animate_radio_vest_wnon_lnon_in_aim", "Gesture"};
		tsp_animate_radio_vest_wrfl_lnon_in_aim[] = {"tsp_animate_radio_vest_wrfl_lnon_in_aim", "Gesture"};
		tsp_animate_radio_vest_wrfl_lhig_in_aim[] = {"tsp_animate_radio_vest_wrfl_lhig_in_aim", "Gesture"};
		tsp_animate_radio_vest_wrfl_llow_in_aim[] = {"tsp_animate_radio_vest_wrfl_llow_in_aim", "Gesture"};
		tsp_animate_radio_vest_wpst_lnon_in_aim[] = {"tsp_animate_radio_vest_wpst_lnon_in_aim", "Gesture"};
		tsp_animate_radio_vest_wpst_lhig_in_aim[] = {"tsp_animate_radio_vest_wpst_lhig_in_aim", "Gesture"};
		tsp_animate_radio_vest_wpst_llow_in_aim[] = {"tsp_animate_radio_vest_wpst_llow_in_aim", "Gesture"};

		tsp_animate_radio_hand_wnon_lnon_aim[] = {"tsp_animate_radio_hand_wnon_lnon_aim", "Gesture"};
		tsp_animate_radio_hand_wrfl_lnon_aim[] = {"tsp_animate_radio_hand_wrfl_lnon_aim", "Gesture"};
		tsp_animate_radio_hand_wrfl_lhig_aim[] = {"tsp_animate_radio_hand_wrfl_lhig_aim", "Gesture"};
		tsp_animate_radio_hand_wrfl_llow_aim[] = {"tsp_animate_radio_hand_wrfl_llow_aim", "Gesture"};
		tsp_animate_radio_hand_wpst_lnon_aim[] = {"tsp_animate_radio_hand_wpst_lnon_aim", "Gesture"};
		tsp_animate_radio_hand_wpst_lhig_aim[] = {"tsp_animate_radio_hand_wpst_lhig_aim", "Gesture"};
		tsp_animate_radio_hand_wpst_llow_aim[] = {"tsp_animate_radio_hand_wpst_llow_aim", "Gesture"};
		tsp_animate_radio_hand_wnon_lnon_in_aim[] = {"tsp_animate_radio_hand_wnon_lnon_in_aim", "Gesture"};
		tsp_animate_radio_hand_wrfl_lnon_in_aim[] = {"tsp_animate_radio_hand_wrfl_lnon_in_aim", "Gesture"};
		tsp_animate_radio_hand_wrfl_lhig_in_aim[] = {"tsp_animate_radio_hand_wrfl_lhig_in_aim", "Gesture"};
		tsp_animate_radio_hand_wrfl_llow_in_aim[] = {"tsp_animate_radio_hand_wrfl_llow_in_aim", "Gesture"};
		tsp_animate_radio_hand_wpst_lnon_in_aim[] = {"tsp_animate_radio_hand_wpst_lnon_in_aim", "Gesture"};
		tsp_animate_radio_hand_wpst_lhig_in_aim[] = {"tsp_animate_radio_hand_wpst_lhig_in_aim", "Gesture"};
		tsp_animate_radio_hand_wpst_llow_in_aim[] = {"tsp_animate_radio_hand_wpst_llow_in_aim", "Gesture"};
	
		tsp_animate_radio_wrist_stand_unarmed[] = {"tsp_animate_radio_wrist_stand_unarmed", "Gesture"};
		tsp_animate_radio_wrist_stand_rifle[] = {"tsp_animate_radio_wrist_stand_rifle", "Gesture"};
		tsp_animate_radio_wrist_stand_pistol[] = {"tsp_animate_radio_wrist_stand_pistol", "Gesture"};
		tsp_animate_radio_wrist_stand_launcher[] = {"tsp_animate_radio_wrist_stand_launcher", "Gesture"};
		tsp_animate_radio_wrist_prone_unarmed[] = {"tsp_animate_radio_wrist_prone_unarmed", "Gesture"};
		tsp_animate_radio_wrist_prone_rifle[] = {"tsp_animate_radio_wrist_prone_rifle", "Gesture"};
		tsp_animate_radio_wrist_prone_pistol[] = {"tsp_animate_radio_wrist_prone_pistol", "Gesture"};
		tsp_animate_radio_wrist_prone_launcher[] = {"tsp_animate_radio_wrist_prone_launcher", "Gesture"};
	
		tsp_animate_radio_helmet_stand_unarmed[] = {"tsp_animate_radio_helmet_stand_unarmed", "Gesture"};
		tsp_animate_radio_helmet_stand_rifle[] = {"tsp_animate_radio_helmet_stand_rifle", "Gesture"};
		tsp_animate_radio_helmet_stand_pistol[] = {"tsp_animate_radio_helmet_stand_pistol", "Gesture"};
		tsp_animate_radio_helmet_stand_launcher[] = {"tsp_animate_radio_helmet_stand_launcher", "Gesture"};
		tsp_animate_radio_helmet_prone_unarmed[] = {"tsp_animate_radio_helmet_prone_unarmed", "Gesture"};
		tsp_animate_radio_helmet_prone_rifle[] = {"tsp_animate_radio_helmet_prone_rifle", "Gesture"};
		tsp_animate_radio_helmet_prone_pistol[] = {"tsp_animate_radio_helmet_prone_pistol", "Gesture"};
		tsp_animate_radio_helmet_prone_launcher[] = {"tsp_animate_radio_helmet_prone_launcher", "Gesture"};
	};
};

class CfgGesturesMale {
	class States {
		class GestureNo;

		//-- Ear
		class tsp_animate_radio_ear_wnon_lnon: GestureNo {
			file = "tsp_animate_radio\anim\ear_wrfl_lhig.rtm";
			mask = "leftArmHead";	
			looped = true;
			speed = 2;
			interpolationSpeed = 5;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {1};
			disableWeapons = false;
			canPullTrigger = true;		
			enableBinocular = true;
			enableMissile = true;
			enableOptics = false;
		};
		class tsp_animate_radio_ear_wrfl_lnon: tsp_animate_radio_ear_wnon_lnon {file = "tsp_animate_radio\anim\ear_wrfl_lhig.rtm";};
		class tsp_animate_radio_ear_wrfl_lhig: tsp_animate_radio_ear_wrfl_lnon {file = "tsp_animate_radio\anim\ear_wrfl_lhig.rtm"; mask = "weaponLeftArmHead"; canPullTrigger = false;};
		class tsp_animate_radio_ear_wrfl_llow: tsp_animate_radio_ear_wrfl_lhig {file = "tsp_animate_radio\anim\ear_wrfl_llow.rtm";};
		class tsp_animate_radio_ear_wpst_lnon: tsp_animate_radio_ear_wrfl_lnon {file = "tsp_animate_radio\anim\ear_wrfl_lhig.rtm";};
		class tsp_animate_radio_ear_wpst_lhig: tsp_animate_radio_ear_wpst_lnon {file = "tsp_animate_radio\anim\ear_wrfl_lhig.rtm"; mask = "bothArmsHead" canPullTrigger = false;};
		class tsp_animate_radio_ear_wpst_llow: tsp_animate_radio_ear_wpst_lhig {file = "tsp_animate_radio\anim\ear_wrfl_lhig.rtm";};		
		class tsp_animate_radio_ear_wnon_lnon_in: tsp_animate_radio_ear_wnon_lnon {file = "tsp_animate_radio\anim\ear_wrfl_lhig_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};
		class tsp_animate_radio_ear_wrfl_lnon_in: tsp_animate_radio_ear_wrfl_lnon {file = "tsp_animate_radio\anim\ear_wrfl_lhig_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};
		class tsp_animate_radio_ear_wrfl_lhig_in: tsp_animate_radio_ear_wrfl_lhig {file = "tsp_animate_radio\anim\ear_wrfl_lhig_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};
		class tsp_animate_radio_ear_wrfl_llow_in: tsp_animate_radio_ear_wrfl_llow {file = "tsp_animate_radio\anim\ear_wrfl_llow_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};
		class tsp_animate_radio_ear_wpst_lnon_in: tsp_animate_radio_ear_wpst_lnon {file = "tsp_animate_radio\anim\ear_wrfl_lhig_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};
		class tsp_animate_radio_ear_wpst_lhig_in: tsp_animate_radio_ear_wpst_lhig {file = "tsp_animate_radio\anim\ear_wrfl_lhig_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};
		class tsp_animate_radio_ear_wpst_llow_in: tsp_animate_radio_ear_wpst_llow {file = "tsp_animate_radio\anim\ear_wrfl_lhig_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};

		//-- Vest
		class tsp_animate_radio_vest_wnon_lnon: tsp_animate_radio_ear_wnon_lnon {file = "tsp_animate_radio\anim\vest_wrfl_lhig.rtm"; mask = "leftArmHead";};
		class tsp_animate_radio_vest_wrfl_lnon: tsp_animate_radio_vest_wnon_lnon {file = "tsp_animate_radio\anim\vest_wrfl_lhig.rtm";};
		class tsp_animate_radio_vest_wrfl_lhig: tsp_animate_radio_vest_wrfl_lnon {file = "tsp_animate_radio\anim\vest_wrfl_lhig.rtm"; mask = "weaponLeftArmHead"; canPullTrigger = false;};
		class tsp_animate_radio_vest_wrfl_llow: tsp_animate_radio_vest_wrfl_lhig {file = "tsp_animate_radio\anim\vest_wrfl_llow.rtm";};
		class tsp_animate_radio_vest_wpst_lnon: tsp_animate_radio_vest_wrfl_lnon {file = "tsp_animate_radio\anim\vest_wrfl_lhig.rtm";};
		class tsp_animate_radio_vest_wpst_lhig: tsp_animate_radio_vest_wpst_lnon {file = "tsp_animate_radio\anim\vest_wrfl_lhig.rtm"; mask = "bothArmsHead" canPullTrigger = false;};
		class tsp_animate_radio_vest_wpst_llow: tsp_animate_radio_vest_wpst_lhig {file = "tsp_animate_radio\anim\vest_wrfl_lhig.rtm";};
		class tsp_animate_radio_vest_wnon_lnon_in: tsp_animate_radio_vest_wnon_lnon {file = "tsp_animate_radio\anim\vest_wrfl_lhig_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};
		class tsp_animate_radio_vest_wrfl_lnon_in: tsp_animate_radio_vest_wrfl_lnon {file = "tsp_animate_radio\anim\vest_wrfl_lhig_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};
		class tsp_animate_radio_vest_wrfl_lhig_in: tsp_animate_radio_vest_wrfl_lhig {file = "tsp_animate_radio\anim\vest_wrfl_lhig_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};
		class tsp_animate_radio_vest_wrfl_llow_in: tsp_animate_radio_vest_wrfl_llow {file = "tsp_animate_radio\anim\vest_wrfl_llow_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};
		class tsp_animate_radio_vest_wpst_lnon_in: tsp_animate_radio_vest_wpst_lnon {file = "tsp_animate_radio\anim\vest_wrfl_lhig_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};
		class tsp_animate_radio_vest_wpst_lhig_in: tsp_animate_radio_vest_wpst_lhig {file = "tsp_animate_radio\anim\vest_wrfl_lhig_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};
		class tsp_animate_radio_vest_wpst_llow_in: tsp_animate_radio_vest_wpst_llow {file = "tsp_animate_radio\anim\vest_wrfl_lhig_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};

		//-- Hand
		class tsp_animate_radio_hand_wnon_lnon: tsp_animate_radio_ear_wnon_lnon {file = "tsp_animate_radio\anim\hand_wrfl_lhig.rtm"; mask = "leftArmHead";};
		class tsp_animate_radio_hand_wrfl_lnon: tsp_animate_radio_hand_wnon_lnon {file = "tsp_animate_radio\anim\hand_wrfl_lhig.rtm";};
		class tsp_animate_radio_hand_wrfl_lhig: tsp_animate_radio_hand_wrfl_lnon {file = "tsp_animate_radio\anim\hand_wrfl_lhig.rtm"; mask = "weaponLeftArmHead"; canPullTrigger = false;};
		class tsp_animate_radio_hand_wrfl_llow: tsp_animate_radio_hand_wrfl_lhig {file = "tsp_animate_radio\anim\hand_wrfl_llow.rtm";};
		class tsp_animate_radio_hand_wpst_lnon: tsp_animate_radio_hand_wrfl_lnon {file = "tsp_animate_radio\anim\hand_wrfl_lhig.rtm";};
		class tsp_animate_radio_hand_wpst_lhig: tsp_animate_radio_hand_wpst_lnon {file = "tsp_animate_radio\anim\hand_wrfl_lhig.rtm"; mask = "bothArmsHead" canPullTrigger = false;};
		class tsp_animate_radio_hand_wpst_llow: tsp_animate_radio_hand_wpst_lhig {file = "tsp_animate_radio\anim\hand_wrfl_lhig.rtm";};		
        class tsp_animate_radio_hand_wnon_lnon_in: tsp_animate_radio_hand_wnon_lnon {file = "tsp_animate_radio\anim\hand_wrfl_lhig_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};
		class tsp_animate_radio_hand_wrfl_lnon_in: tsp_animate_radio_hand_wrfl_lnon {file = "tsp_animate_radio\anim\hand_wrfl_lhig_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};
		class tsp_animate_radio_hand_wrfl_lhig_in: tsp_animate_radio_hand_wrfl_lhig {file = "tsp_animate_radio\anim\hand_wrfl_lhig_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};
		class tsp_animate_radio_hand_wrfl_llow_in: tsp_animate_radio_hand_wrfl_llow {file = "tsp_animate_radio\anim\hand_wrfl_llow_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};
		class tsp_animate_radio_hand_wpst_lnon_in: tsp_animate_radio_hand_wpst_lnon {file = "tsp_animate_radio\anim\hand_wrfl_lhig_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};
		class tsp_animate_radio_hand_wpst_lhig_in: tsp_animate_radio_hand_wpst_lhig {file = "tsp_animate_radio\anim\hand_wrfl_lhig_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};
		class tsp_animate_radio_hand_wpst_llow_in: tsp_animate_radio_hand_wpst_llow {file = "tsp_animate_radio\anim\hand_wrfl_lhig_in.rtm"; looped = false; leftHandIKCurve[] = {0,1,0.5,0};};

		//-- Ear, Aim
		class tsp_animate_radio_ear_wnon_lnon_aim: tsp_animate_radio_ear_wnon_lnon {enableOptics = true;};
		class tsp_animate_radio_ear_wrfl_lnon_aim: tsp_animate_radio_ear_wrfl_lnon {enableOptics = true;};
		class tsp_animate_radio_ear_wrfl_lhig_aim: tsp_animate_radio_ear_wrfl_lhig {};
		class tsp_animate_radio_ear_wrfl_llow_aim: tsp_animate_radio_ear_wrfl_llow {};
		class tsp_animate_radio_ear_wpst_lnon_aim: tsp_animate_radio_ear_wpst_lnon {enableOptics = true;};
		class tsp_animate_radio_ear_wpst_lhig_aim: tsp_animate_radio_ear_wpst_lhig {};
		class tsp_animate_radio_ear_wpst_llow_aim: tsp_animate_radio_ear_wpst_llow {};
		class tsp_animate_radio_ear_wnon_lnon_in_aim: tsp_animate_radio_ear_wnon_lnon_in {enableOptics = true;};
		class tsp_animate_radio_ear_wrfl_lnon_in_aim: tsp_animate_radio_ear_wrfl_lnon_in {enableOptics = true;};
		class tsp_animate_radio_ear_wrfl_lhig_in_aim: tsp_animate_radio_ear_wrfl_lhig_in {};
		class tsp_animate_radio_ear_wrfl_llow_in_aim: tsp_animate_radio_ear_wrfl_llow_in {};
		class tsp_animate_radio_ear_wpst_lnon_in_aim: tsp_animate_radio_ear_wpst_lnon_in {enableOptics = true;};
		class tsp_animate_radio_ear_wpst_lhig_in_aim: tsp_animate_radio_ear_wpst_lhig_in {};
		class tsp_animate_radio_ear_wpst_llow_in_aim: tsp_animate_radio_ear_wpst_llow_in {};

		//-- Vest - Aim
		class tsp_animate_radio_vest_wnon_lnon_aim: tsp_animate_radio_vest_wnon_lnon {enableOptics = true;};
		class tsp_animate_radio_vest_wrfl_lnon_aim: tsp_animate_radio_vest_wrfl_lnon {enableOptics = true;};
		class tsp_animate_radio_vest_wrfl_lhig_aim: tsp_animate_radio_vest_wrfl_lhig {};
		class tsp_animate_radio_vest_wrfl_llow_aim: tsp_animate_radio_vest_wrfl_llow {};
		class tsp_animate_radio_vest_wpst_lnon_aim: tsp_animate_radio_vest_wpst_lnon {enableOptics = true;};
		class tsp_animate_radio_vest_wpst_lhig_aim: tsp_animate_radio_vest_wpst_lhig {};
		class tsp_animate_radio_vest_wpst_llow_aim: tsp_animate_radio_vest_wpst_llow {};
		class tsp_animate_radio_vest_wnon_lnon_in_aim: tsp_animate_radio_vest_wnon_lnon_in {enableOptics = true;};
		class tsp_animate_radio_vest_wrfl_lnon_in_aim: tsp_animate_radio_vest_wrfl_lnon_in {enableOptics = true;};
		class tsp_animate_radio_vest_wrfl_lhig_in_aim: tsp_animate_radio_vest_wrfl_lhig_in {};
		class tsp_animate_radio_vest_wrfl_llow_in_aim: tsp_animate_radio_vest_wrfl_llow_in {};
		class tsp_animate_radio_vest_wpst_lnon_in_aim: tsp_animate_radio_vest_wpst_lnon_in {enableOptics = true;};
		class tsp_animate_radio_vest_wpst_lhig_in_aim: tsp_animate_radio_vest_wpst_lhig_in {};
		class tsp_animate_radio_vest_wpst_llow_in_aim: tsp_animate_radio_vest_wpst_llow_in {};

		//-- Hand - Aim
		class tsp_animate_radio_hand_wnon_lnon_aim: tsp_animate_radio_hand_wnon_lnon {enableOptics = true;};
		class tsp_animate_radio_hand_wrfl_lnon_aim: tsp_animate_radio_hand_wrfl_lnon {enableOptics = true;};
		class tsp_animate_radio_hand_wrfl_lhig_aim: tsp_animate_radio_hand_wrfl_lhig {};
		class tsp_animate_radio_hand_wrfl_llow_aim: tsp_animate_radio_hand_wrfl_llow {};
		class tsp_animate_radio_hand_wpst_lnon_aim: tsp_animate_radio_hand_wpst_lnon {enableOptics = true;};
		class tsp_animate_radio_hand_wpst_lhig_aim: tsp_animate_radio_hand_wpst_lhig {};
		class tsp_animate_radio_hand_wpst_llow_aim: tsp_animate_radio_hand_wpst_llow {};		
        class tsp_animate_radio_hand_wnon_lnon_in_aim: tsp_animate_radio_hand_wnon_lnon_in {enableOptics = true;};
		class tsp_animate_radio_hand_wrfl_lnon_in_aim: tsp_animate_radio_hand_wrfl_lnon_in {enableOptics = true;};
		class tsp_animate_radio_hand_wrfl_lhig_in_aim: tsp_animate_radio_hand_wrfl_lhig_in {};
		class tsp_animate_radio_hand_wrfl_llow_in_aim: tsp_animate_radio_hand_wrfl_llow_in {};
		class tsp_animate_radio_hand_wpst_lnon_in_aim: tsp_animate_radio_hand_wpst_lnon_in {enableOptics = true;};
		class tsp_animate_radio_hand_wpst_lhig_in_aim: tsp_animate_radio_hand_wpst_lhig_in {};
		class tsp_animate_radio_hand_wpst_llow_in_aim: tsp_animate_radio_hand_wpst_llow_in {};


		class tsp_animate_radio_wrist_stand_unarmed: tsp_animate_radio_ear_wnon_lnon {
			file = "tsp_animate_radio\anim\wrist.rtm";
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
			mask = "wrist";
			disableWeapons = true;
			disableWeaponsLong = true;
			canPullTrigger = false;
			enableBinocular = false;
			enableMissile = false;
			enableOptics = false;
		};
		class tsp_animate_radio_wrist_stand_rifle: tsp_animate_radio_wrist_stand_unarmed {leftHandIKCurve[] = {1}; mask = "wrist_rifle";};	
		class tsp_animate_radio_wrist_stand_pistol: tsp_animate_radio_wrist_stand_rifle {mask = "wrist_pistol";};
		class tsp_animate_radio_wrist_stand_launcher: tsp_animate_radio_wrist_stand_rifle {mask = "wrist_launcher";};	
		class tsp_animate_radio_wrist_prone_unarmed: tsp_animate_radio_wrist_stand_unarmed {file = "tsp_animate_radio\anim\wrist_prone.rtm";};
		class tsp_animate_radio_wrist_prone_rifle: tsp_animate_radio_wrist_prone_unarmed {leftHandIKCurve[] = {1}; mask = "wrist_rifle";};	
		class tsp_animate_radio_wrist_prone_pistol: tsp_animate_radio_wrist_prone_unarmed {mask = "wrist_pistol";};
		class tsp_animate_radio_wrist_prone_launcher: tsp_animate_radio_wrist_prone_rifle {mask = "wrist_launcher";};

		class tsp_animate_radio_helmet_stand_unarmed: tsp_animate_radio_wrist_stand_unarmed {file = "tsp_animate_radio\anim\helmet.rtm";};
		class tsp_animate_radio_helmet_stand_rifle: tsp_animate_radio_helmet_stand_unarmed {leftHandIKCurve[] = {1}; mask = "wrist_rifle";};
		class tsp_animate_radio_helmet_stand_pistol: tsp_animate_radio_helmet_stand_rifle {mask = "wrist_pistol";};
		class tsp_animate_radio_helmet_stand_launcher: tsp_animate_radio_helmet_stand_rifle {mask = "wrist_launcher";};
		class tsp_animate_radio_helmet_prone_unarmed: tsp_animate_radio_wrist_stand_unarmed {file = "tsp_animate_radio\anim\helmet_prone.rtm";};
		class tsp_animate_radio_helmet_prone_rifle: tsp_animate_radio_helmet_prone_unarmed {leftHandIKCurve[] = {1}; mask = "wrist_rifle";};
		class tsp_animate_radio_helmet_prone_pistol: tsp_animate_radio_helmet_prone_rifle {mask = "wrist_pistol";};
		class tsp_animate_radio_helmet_prone_launcher: tsp_animate_radio_helmet_prone_rifle {mask = "wrist_launcher";};
	};
	class BlendAnims {
		wrist[] = {
			"neck", 0.5, 
            "RightShoulder", 1, 
            "RightArm", 1, 
            "RightArmRoll", 1,
            "RightForeArm", 1, 
            "RightForeArmRoll", 1,
            "RightHand", 1, 
            "RightHandRing", 1, 
            "RightHandPinky1", 1, 
            "RightHandPinky2", 1, 
            "RightHandPinky3", 1, 
            "RightHandRing1", 1, 
            "RightHandRing2", 1, 
            "RightHandRing3", 1, 
            "RightHandMiddle1", 1, 
            "RightHandMiddle2", 1, 
            "RightHandMiddle3", 1, 
            "RightHandIndex1", 1, 
            "RightHandIndex2", 1, 
            "RightHandIndex3", 1, 
            "RightHandThumb1", 1, 
            "RightHandThumb2", 1, 
            "RightHandThumb3", 1
		};
		wrist_pistol[] = {
			"neck", 0.5, 
            "RightShoulder", 1, 
            "RightArm", 1, 
            "RightArmRoll", 1,
            "RightForeArm", 1, 
            "RightForeArmRoll", 1,
            "RightHand", 1, 
            "RightHandRing", 1, 
            "RightHandPinky1", 1, 
            "RightHandPinky2", 1, 
            "RightHandPinky3", 1, 
            "RightHandRing1", 1, 
            "RightHandRing2", 1, 
            "RightHandRing3", 1, 
            "RightHandMiddle1", 1, 
            "RightHandMiddle2", 1, 
            "RightHandMiddle3", 1, 
            "RightHandIndex1", 1, 
            "RightHandIndex2", 1, 
            "RightHandIndex3", 1, 
            "RightHandThumb1", 1, 
            "RightHandThumb2", 1, 
            "RightHandThumb3", 1,
            "leftShoulder", 1, 
            "leftArm", 1, 
            "leftArmRoll", 1,
            "leftForeArm", 1, 
            "leftForeArmRoll", 1,
            "leftHand", 1, 
            "leftHandRing", 1, 
            "leftHandPinky1", 1, 
            "leftHandPinky2", 1, 
            "leftHandPinky3", 1, 
            "leftHandRing1", 1, 
            "leftHandRing2", 1, 
            "leftHandRing3", 1, 
            "leftHandMiddle1", 1, 
            "leftHandMiddle2", 1, 
            "leftHandMiddle3", 1, 
            "leftHandIndex1", 1, 
            "leftHandIndex2", 1, 
            "leftHandIndex3", 1, 
            "leftHandThumb1", 1, 
            "leftHandThumb2", 1, 
            "leftHandThumb3", 1
		};
		wrist_rifle[] =  {
			"neck", 0.5, 
			"weapon", 1,
            "RightShoulder", 1, 
            "RightArm", 1, 
            "RightArmRoll", 1,
            "RightForeArm", 1, 
            "RightForeArmRoll", 1,
            "RightHand", 1, 
            "RightHandRing", 1, 
            "RightHandPinky1", 1, 
            "RightHandPinky2", 1, 
            "RightHandPinky3", 1, 
            "RightHandRing1", 1, 
            "RightHandRing2", 1, 
            "RightHandRing3", 1, 
            "RightHandMiddle1", 1, 
            "RightHandMiddle2", 1, 
            "RightHandMiddle3", 1, 
            "RightHandIndex1", 1, 
            "RightHandIndex2", 1, 
            "RightHandIndex3", 1, 
            "RightHandThumb1", 1, 
            "RightHandThumb2", 1, 
            "RightHandThumb3", 1,
            "leftShoulder", 1, 
            "leftArm", 1, 
            "leftArmRoll", 1,
            "leftForeArm", 1, 
            "leftForeArmRoll", 1,
            "leftHand", 1, 
            "leftHandRing", 1, 
            "leftHandPinky1", 1, 
            "leftHandPinky2", 1, 
            "leftHandPinky3", 1, 
            "leftHandRing1", 1, 
            "leftHandRing2", 1, 
            "leftHandRing3", 1, 
            "leftHandMiddle1", 1, 
            "leftHandMiddle2", 1, 
            "leftHandMiddle3", 1, 
            "leftHandIndex1", 1, 
            "leftHandIndex2", 1, 
            "leftHandIndex3", 1, 
            "leftHandThumb1", 1, 
            "leftHandThumb2", 1, 
            "leftHandThumb3", 1
		};
		wrist_launcher[] =  {
			"neck", 0.5, 
			"launcher", 1,
            "RightShoulder", 1, 
            "RightArm", 1, 
            "RightArmRoll", 1,
            "RightForeArm", 1, 
            "RightForeArmRoll", 1,
            "RightHand", 1, 
            "RightHandRing", 1, 
            "RightHandPinky1", 1, 
            "RightHandPinky2", 1, 
            "RightHandPinky3", 1, 
            "RightHandRing1", 1, 
            "RightHandRing2", 1, 
            "RightHandRing3", 1, 
            "RightHandMiddle1", 1, 
            "RightHandMiddle2", 1, 
            "RightHandMiddle3", 1, 
            "RightHandIndex1", 1, 
            "RightHandIndex2", 1, 
            "RightHandIndex3", 1, 
            "RightHandThumb1", 1, 
            "RightHandThumb2", 1, 
            "RightHandThumb3", 1,
            "leftShoulder", 1, 
            "leftArm", 1, 
            "leftArmRoll", 1,
            "leftForeArm", 1, 
            "leftForeArmRoll", 1,
            "leftHand", 1, 
            "leftHandRing", 1, 
            "leftHandPinky1", 1, 
            "leftHandPinky2", 1, 
            "leftHandPinky3", 1, 
            "leftHandRing1", 1, 
            "leftHandRing2", 1, 
            "leftHandRing3", 1, 
            "leftHandMiddle1", 1, 
            "leftHandMiddle2", 1, 
            "leftHandMiddle3", 1, 
            "leftHandIndex1", 1, 
            "leftHandIndex2", 1, 
            "leftHandIndex3", 1, 
            "leftHandThumb1", 1, 
            "leftHandThumb2", 1, 
            "leftHandThumb3", 1
		};
	};
};