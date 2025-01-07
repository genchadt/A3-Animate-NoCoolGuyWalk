class CfgPatches {
	class tsp_animate_ace {
		requiredAddons[] = {"tsp_core", "tsp_animate", "cba_common", "ace_common", "ace_interaction", "ace_captives", "ace_gestures"};		
        skipWhenMissingDependencies = 1;
		units[] = {};
	};
};
 
class CfgFunctions {
    class ace_common {class functions {class doGesture {file = "tsp_animate_ace\gesture.sqf";};};};
    class ace_gestures {class functions {class playSignal {file = "tsp_animate_ace\signal.sqf";};};};
    class ace_captives {class functions {class handleAnimChangedHandcuffed {file = "tsp_animate_ace\captive.sqf";};};};
};
class Extended_PreInit_EventHandlers {class tsp_animate_ace_cba {init = "[] call compileScript ['\tsp_animate_ace\cba.sqf']";};};
class Extended_PostInit_EventHandlers {class tsp_animate_ace_init {init = "['CBA_settingsInitialized', {[] spawn compileScript ['\tsp_animate_ace\init.sqf']}] call CBA_fnc_addEventHandler;";};};  

//-- ACE Actions - Overwrite Tapping
class CfgVehicles {
	class Man;
	class CAManBase: Man {
        class ACE_Actions {
			class ACE_TapShoulderRight {
                displayName = "Tap Shoulder"; selection = "rightshoulder"; distance = 2; condition = "[_player, _target] call ace_interaction_fnc_canTapShoulder"; 
                statement = "if (tsp_cba_animate_tap) exitWith {[_player,'shoulder','laut',[_target,0]] call tsp_fnc_animate_tactical}; [_player, _target, 1] call ace_interaction_fnc_tapShoulder";
            };
            class ACE_TapShoulderLeft: ACE_TapShoulderRight {
                selection = "leftshoulder"; 
                statement = "if (tsp_cba_animate_tap) exitWith {[_player,'shoulder','laut',[_target,1]] call tsp_fnc_animate_tactical}; [_player, _target, 1] call ace_interaction_fnc_tapShoulder";
            };
			class ACE_SqueezeLegRight: ACE_TapShoulderRight {
                displayName = "Squeeze Leg"; selection = "rightupleg"; 
                condition = "[_player, _target] call ace_interaction_fnc_canTapShoulder && tsp_cba_animate_tap"; 
                statement = "[_player,'leg','laut',[_target,0]] call tsp_fnc_animate_tactical";
            };
            class ACE_SqueezeLegLeft: ACE_SqueezeLegRight {
                displayName = "Squeeze Leg"; selection = "leftupleg"; 
                statement = "[_player,'leg','laut',[_target,1]] call tsp_fnc_animate_tactical";
            };
            class ACE_ApplyHandcuffs {
                displayName = "Take Prisoner"; icon = "\z\ace\addons\captives\UI\handcuff_ca.paa"; distance = 2;
                condition = "[_player,_target] call ace_captives_fnc_canApplyHandcuffs"; exceptions[] = {"isNotSwimming","isNotInside"};
                statement = "if (tsp_cba_animate_captive) then {[_player,_target] call ACE_captives_fnc_doApplyHandcuffs_modified} else {[_player,_target] call ACE_captives_fnc_doApplyHandcuffs}";
                selection = "righthand";
            };
            class ACE_MainActions {
                class ACE_EscortCaptive {
                    displayName = "Escort Captive"; icon = "\z\ace\addons\captives\UI\captive_ca.paa"; distance = 4;
                    condition = "[_player,_target] call ace_captives_fnc_canEscortCaptive"; exceptions[] = {"isNotSwimming"};
                    statement = "[_player,_target,true] call ace_captives_fnc_doEscortCaptive; if (tsp_cba_animate_captive) then {[_player,_target] spawn tsp_fnc_animate_captive}";
                    showDisabled = 0;
                };
			};
		};
	};
};