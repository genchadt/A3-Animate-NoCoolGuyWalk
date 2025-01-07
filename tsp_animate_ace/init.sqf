ace_gestures_showOnInteractionMenu = 1;  //-- REMOVE ACE GESTURES

if (!isNil "ace_explosives_fnc_addDetonateHandler") then {[{if (tsp_cba_animate_clacker) then {_this spawn tsp_fnc_animate_clacker}; true}] call ace_explosives_fnc_addDetonateHandler};  //-- Clacker

if (!isNil "ace_advanced_fatigue_setAnimExclusions") then {ace_advanced_fatigue_setAnimExclusions pushBackUnique [  //-- Exempt from ACE stamina
    "AmovPercMwlkSrasWrflDf","AmovPercMwlkSrasWrflDfr","AmovPercMwlkSrasWrflDfl","AmovPercMwlkSrasWrflDl",
    "AmovPercMwlkSrasWrflDb","AmovPercMwlkSrasWrflDbr","AmovPercMwlkSrasWrflDbl","AmovPercMwlkSrasWrflDr",
    "AmovPercMwlkSrasWpstDf","AmovPercMwlkSrasWpstDfr","AmovPercMwlkSrasWpstDfl","AmovPercMwlkSrasWpstDl",
    "AmovPercMwlkSrasWpstDb","AmovPercMwlkSrasWpstDbr","AmovPercMwlkSrasWpstDbl","AmovPercMwlkSrasWpstDr",
    "AmovPercMwlkSlowWrflDf","AmovPercMwlkSlowWrflDfr","AmovPercMwlkSlowWrflDfl","AmovPercMwlkSlowWrflDl",
    "AmovPercMwlkSlowWrflDb","AmovPercMwlkSlowWrflDbr","AmovPercMwlkSlowWrflDbl","AmovPercMwlkSlowWrflDr",
    "AmovPercMwlkSlowWpstDf","AmovPercMwlkSlowWpstDfr","AmovPercMwlkSlowWpstDfl","AmovPercMwlkSlowWpstDl",
    "AmovPercMwlkSlowWpstDb","AmovPercMwlkSlowWpstDbr","AmovPercMwlkSlowWpstDbl","AmovPercMwlkSlowWpstDr"
]};

//-- Overwrite ACE incremental door control
["ACE3 Common", "ace_interaction_openDoor", "Incemental Door Opening", {
	if (!([ACE_player, objNull, []] call ace_common_fnc_canInteractWith) || ace_interaction_isOpeningDoor || {[2] call ace_interaction_fnc_getDoor select 1 == ''}) exitWith {false};
	if (tsp_cba_animate_door) then {[ACE_player, "doorACE"] call tsp_fnc_animate_tactical}; call ace_interaction_fnc_openDoor;
}, {ace_interaction_isOpeningDoor = false; if ("door" in gestureState ACE_player) then {[ACE_player] call tsp_fnc_gesture_stop}},[57, [false, true, false]], false] call CBA_fnc_addKeybind;

//-- Overwrite ACE throwing control
["ACE3 Weapons", "ace_advanced_throwing_prepare", "Prepare", {
	if (!([ACE_player] call ace_advanced_throwing_fnc_canPrepare)) exitWith {false}; if (ace_common_isReloading) exitWith {true};
	[ACE_player] call ace_advanced_throwing_fnc_prepare;
    ACE_player spawn {
        if (!isNil "tsp_object") then {[tsp_object, true] remoteExec ["hideObjectGlobal", 2]}; sleep 0.001; 
        if (!tsp_cba_animate_grenade || (currentWeapon ACE_player == secondaryWeapon ACE_player && secondaryWeapon ACE_player != "") || stance ACE_player == "PRONE") exitWith {};
        _model = getText(configFile >> "CfgAmmo" >> typeOf (ACE_player getVariable "ace_advanced_throwing_activeThrowable") >> "model");
		[_this, "", "tsp_animate_grenade_wnon", _model, [0.02,0.03,0.02], if ("chem" in _model) then {[0,-90,0]} else {[-90,0,0]}, 
        {sleep 0.1; !(ACE_player getVariable ["ace_advanced_throwing_inHand", false]) || stance ACE_player == "PRONE"}, false] spawn tsp_fnc_gesture_item;
        [_this, 1, "A3\Sounds_F\characters\stances\grenade_throw2.wss", 1] call tsp_fnc_animate_effect;
		while {sleep 0.001; _this getVariable ["ace_advanced_throwing_inHand", false]} do {tsp_ace_throwType = _this getVariable ["ace_advanced_throwing_throwType", ""]};
	};
	true
}, {false}, [34, [true, false, false]], false] call CBA_fnc_addKeybind;

//-- Overwrite ACE tapping control 
["ACE3 Common", "ace_interaction_tapShoulder", "Tap Shoulder", {
	if (tsp_cba_animate_tap) exitWith {};
	if !([ACE_player, objNull, []] call ace_common_canInteractWith) exitWith {false};
	if !([ACE_player, cursorTarget] call ace_interaction_canTapShoulder) exitWith {false};
	private _shoulderNum = [0, 1] select (([ACE_player, cursorTarget] call BIS_fnc_relativeDirTo) < 180);
	[ACE_player, cursorTarget, _shoulderNum] call ace_interaction_fnc_tapShoulder;
}, {false}, [20, [true, false, false]], false] call CBA_fnc_addKeybind;

//-- Modified ACE captives
ACE_captives_fnc_doApplyHandcuffs_modified = {
    params ["_unit", "_target"];
    playSound3D ["z\ace\addons\captives\sounds\cable_tie_zipping.ogg", objNull, false, (getPosASL _target), 1, 1, 10];
    //["ace_captives_setHandcuffed", [_target, true, _unit], [_target]] call CBA_fnc_targetEvent;
    [_target, true, _unit] remoteExec ["ACE_captives_fnc_setHandcuffed_modified"];
    private _cuffs = (_unit call ace_common_fnc_uniqueItems) arrayIntersect ace_captives_restraints;
    _unit removeItem (_cuffs#0);
};
ACE_captives_fnc_setHandcuffed_modified = {
    params ["_unit", "_state", ["_caller", objNull]];

    if (!local _unit) exitWith {};

    if !(missionNamespace getVariable ["ace_captives_captivityEnabled", false]) exitWith {
        if (ace_common_settingsInitFinished) then {[ace_captives_fnc_setHandCuffed, _this, 0.05] call CBA_fnc_waitAndExecute;
        } else {[ace_captives_fnc_setHandCuffed, _this] call ace_common_fnc_runAfterSettingsInit};
    };

    if ((_unit getVariable ["ace_captives_isHandcuffed", false]) isEqualTo _state) exitWith {};

    if (_state) then {
        _unit setVariable ["ace_captives_isHandcuffed", true, true];
        [_unit, "setCaptive", "ace_captives_Handcuffed", true] call ace_common_fnc_statusEffect_set;
        [_unit, "blockRadio", "ace_captives_Handcuffed", true] call ace_common_fnc_statusEffect_set;
        if (_unit getVariable ["ace_captives_isSurrendering", false]) then {[_unit, false] call ace_captives_fnc_setSurrendered};        
        _unit setVariable ["ace_captives_CargoIndex", ((vehicle _unit) getCargoIndex _unit), true];
        if (_unit == ACE_player) then {["captive", [false, false, false, false, false, false, false, false, false, true]] call ace_common_fnc_showHud};        
        [{ 
            params ["_unit"];
            if (!(_unit getVariable ["ace_captives_isHandcuffed", false])) exitWith {};
            if ((vehicle _unit) == _unit) then {
                [_unit] call ace_common_fnc_fixLoweredRifleAnimation;
                [_unit, "ACE_AmovPercMstpScapWnonDnon", 1] call ace_common_fnc_doAnimation;
            } else {
                [_unit, "ACE_HandcuffedFFV", 2] call ace_common_fnc_doAnimation;
                [_unit, "ACE_HandcuffedFFV", 1] call ace_common_fnc_doAnimation;
            };                        
            private _animChangedEHID = _unit getVariable ["ace_captives_handcuffAnimEHID", -1];
            if (_animChangedEHID != -1) then {_unit removeEventHandler ["AnimChanged", _animChangedEHID]};
            _animChangedEHID = _unit addEventHandler ["AnimChanged", {call ACE_captives_fnc_handleAnimChangedHandcuffed_modified}];
            _unit setVariable ["ace_captives_handcuffAnimEHID", _animChangedEHID];
        }, [_unit], 0.01] call CBA_fnc_waitAndExecute;
    } else {
        _unit setVariable ["ace_captives_isHandcuffed", false, true];
        [_unit, "setCaptive", "ace_captives_Handcuffed", false] call ace_common_fnc_statusEffect_set;
        [_unit, "blockRadio", "ace_captives_Handcuffed", false] call ace_common_fnc_statusEffect_set;        
        private _animChangedEHID = _unit getVariable ["ace_captives_handcuffAnimEHID", -1];
        _unit removeEventHandler ["AnimChanged", _animChangedEHID];
        _unit setVariable ["ace_captives_handcuffAnimEHID", -1];
        if (((vehicle _unit) == _unit) && {!(_unit getVariable ["ACE_isUnconscious", false])}) then {[_unit, "ACE_AmovPercMstpScapWnonDnon_AmovPercMstpSnonWnonDnon", 2] call ace_common_fnc_doAnimation};
        if (_unit getVariable ["ace_captives_CargoIndex", -1] != -1) then {_unit setVariable ["ace_captives_CargoIndex", -1, true]};
        if (_unit == ACE_player) then {["captive", []] call ace_common_fnc_showHud};
    };

    ["ace_captiveStatusChanged", [_unit, _state, "SetHandcuffed", _caller]] call CBA_fnc_globalEvent;
};
ACE_captives_fnc_handleAnimChangedHandcuffed_modified = {
    params ["_unit", "_newAnimation"];
    if (_unit == (vehicle _unit)) then {
        if ((_newAnimation != "ACE_AmovPercMstpSsurWnonDnon") && {!(_unit getVariable ["ACE_isUnconscious", false])} && isNull attachedTo _unit) then {
            [_unit, "ACE_AmovPercMstpScapWnonDnon", 1] call ace_common_fnc_doAnimation
        };
    } else {
        private _turretPath = [];
        {_x params ["_xUnit", "", "", "_xTurretPath"]; if (_unit == _xUnit) exitWith {_turretPath = _xTurretPath}} forEach (fullCrew (vehicle _unit));
        if (_turretPath isEqualTo []) exitWith {};
        [_unit, "ACE_HandcuffedFFV", 2] call ace_common_fnc_doAnimation;
        [_unit, "ACE_HandcuffedFFV", 1] call ace_common_fnc_doAnimation;
    };
};

player addEventHandler ["AnimStateChanged", {  //-- No dropping with slings
    params ["_unit", "_anim"]; 
    if ("tsp_sling" in items _unit && isNil "tsp_ace_sling") then {tsp_ace_sling = ace_medical_dropWeaponUnconsciousChance; ace_medical_dropWeaponUnconsciousChance = 0};
    if (!("tsp_sling" in items _unit) && !(isNil "tsp_ace_sling")) then {ace_medical_dropWeaponUnconsciousChance = tsp_ace_sling; tsp_ace_sling = nil};
}];