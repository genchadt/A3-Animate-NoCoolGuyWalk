#include "\a3\editor_f\Data\Scripts\dikCodes.h"; disableSerialization;

["tsp_cba_animate_clacker", "CHECKBOX", ["Clacker Animation", "Enable/disable animation when using ACE clacker."], ["TSP Animate", "ACE"], true] call CBA_fnc_addSetting;
["tsp_cba_animate_captive", "CHECKBOX", ["Captive Animation", "Enable/disable animation when using escorting ACE Captive."], ["TSP Animate", "ACE"], true] call CBA_fnc_addSetting;
["tsp_cba_animate_grenade", "CHECKBOX", ["Grenade Throw", "Enable/disable grenade throw animation."], ["TSP Animate", "ACE"], true] call CBA_fnc_addSetting;

["TSP Animate", "tsp_animate_tactical_tap", "Tap/Squeeze Shoulder/Leg", {
    if (!tsp_cba_animate_tap || "leg" in gestureState ACE_player || "shoulder" in gestureState ACE_player) exitWith {};  //-- Prevent spam
	_targets = [ACE_player, eyePos ACE_player, [0,15,30,45,60,-15,-30,-45,-60], 3, getCameraViewDirection ACE_player] call tsp_fnc_obstruction select {alive (_x#0) && _x#0 isKindOf "CAManBase"};
	if (count _targets > 0) then {[ACE_player,'tap','laut',[_targets#0#0,[0,1] select([ACE_player, _targets#0#0] call BIS_fnc_relativeDirTo < 180)]] call tsp_fnc_animate_tactical};
}, {}, [20, [true, false, false]]] call CBA_fnc_addKeybind;

["TSP Animate", "tsp_animate_tactical_shoulder", "Tap Shoulder", {
    if (!tsp_cba_animate_tap || "leg" in gestureState ACE_player || "shoulder" in gestureState ACE_player) exitWith {};  //-- Prevent spam
	_targets = [ACE_player, eyePos ACE_player, [0,15,30,45,60,-15,-30,-45,-60], 3, getCameraViewDirection ACE_player] call tsp_fnc_obstruction select {alive (_x#0) && _x#0 isKindOf "CAManBase"};
	if (count _targets > 0) then {[ACE_player,'shoulder','laut',[_targets#0#0,[0,1] select([ACE_player, _targets#0#0] call BIS_fnc_relativeDirTo < 180)]] call tsp_fnc_animate_tactical};
}, {}, [0, [false, false, false]]] call CBA_fnc_addKeybind;

["TSP Animate", "tsp_animate_tactical_leg", "Squeeze Leg", {
    if (!tsp_cba_animate_tap || "leg" in gestureState ACE_player || "shoulder" in gestureState ACE_player) exitWith {};  //-- Prevent spam
	_targets = [ACE_player, eyePos ACE_player, [0,15,30,45,60,-15,-30,-45,-60], 3, getCameraViewDirection ACE_player] call tsp_fnc_obstruction select {alive (_x#0) && _x#0 isKindOf "CAManBase"};
	if (count _targets > 0) then {[ACE_player,'leg','laut',[_targets#0#0,[0,1] select([ACE_player, _targets#0#0] call BIS_fnc_relativeDirTo < 180)]] call tsp_fnc_animate_tactical};
}, {}, [0, [false, false, false]]] call CBA_fnc_addKeybind;