tsp_fnc_animate_attention = {
	params ["_unit", ["_anim", ""], ["_gesture", ""]];

	if ("tsp_animate_attention" in animationState _unit) exitWith {tsp_animate_attention_stop = true};
	
	if (currentWeapon _unit == primaryWeapon _unit) then {_anim = "tsp_animate_attention_rifle_idle"; _gesture = "tsp_animate_attention_rifle_loop"};
	if (currentWeapon _unit == "tsp_banderin") then {_anim = "tsp_animate_attention_launcher_idle"; _gesture = "tsp_animate_attention_launcher_loop"};
	if (currentWeapon _unit == "") then {_anim = "tsp_animate_attention_idle"; _gesture = "GestureNod"};
	if (_anim == "") exitWith {};	
	
	_unit playMoveNow (_anim + "_in"); 
	_unit playAction _gesture;	
	waitUntil {sleep 0.1; "tsp_animate_attention" in animationState _unit || !alive _unit};

	tsp_animate_attention_stop = false; 
	waitUntil {sleep 0.1; tsp_animate_attention_stop || !("attention" in animationState _unit) || !alive _unit || (currentWeapon _unit != "" && !("attention" in gestureState _unit))}; 

	_unit playMoveNow (_anim + "_out");	
	_unit playAction "GestureNod";
};