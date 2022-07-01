// #include "script_component.hpp"
/*
 * Author: Sanuki357
 * Handles opening a door and emit a appopriate sound effect.
 *
 * Possible soundSet input:
 *  "Door1 Open"    |
 *  "Door1 Closed"  \ Simple opening and closing of Door1 with 3 audio variants.
 *  "HeavyDoor Open"    |
 *  "HeavyDoor Closed"  \ HeavyDoor version with 3 audio variants. 0.8 times slower to open or close.
 *  "ContainmentDoor Open"      |
 *  "ContainmentDoor Closed"    \ ContainmentDoor version with 3 audio variants. 0.4 times slower to open or close.
 *
 * Arguments:
 * 0: object - Object to be controled its animateSource phase and origin of sounds <OBJECT>
 * 1: soundSet - String from one of pre-defined set of strings. Determines the object to be opened or closed, and what sounds to play <STRING>
 * 2: animSource - String of the animation source from AnimationSources class. Required for animateSource <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [this, 'Door1 Open', 'open_door'] execVM "QPATHTOF(functions\fnc_doorOperate.sqf)"
 * [this, 'Door1 Open', 'open_door'] call SCP_fnc_doorOperate
 *
 * Public: No
 */

params ["_object", "_soundSet", "_animSource"];

//Creates and attaches a source of where _inputSound will be played from, to the memory point selected with _inputSoundPosition.
private _soundOrigin = "#particlesource" createVehicle position _object;
//_soundOrigin attachTo [_object, [0,0,0], _soundPosition];

switch (_soundSet) do {
    case "Door1 Open": {
        _soundSet = ["SCP_CB_Door1_Open_1", "SCP_CB_Door1_Open_2", "SCP_CB_Door1_Open_3"];
        _object animateSource [_animSource, 1];
    };
    case "Door1 Close": {
        _soundSet = ["SCP_CB_Door1_Close_1", "SCP_CB_Door1_Close_2", "SCP_CB_Door1_Close_3"];
        _object animateSource [_animSource, 0];
    };
    case "HeavyDoor Open": {
        _soundSet = ["SCP_CB_HeavyDoor_Open_1", "SCP_CB_HeavyDoor_Open_2", "SCP_CB_HeavyDoor_Open_3"];
        _object animateSource [_animSource, 1, 0.8];
    };
    case "HeavyDoor Close": {
        _soundSet = ["SCP_CB_HeavyDoor_Close_1", "SCP_CB_HeavyDoor_Close_2", "SCP_CB_HeavyDoor_Close_3"];
        _object animateSource [_animSource, 0, 0.8];
    };
    case "ContainmentDoor Open": {
        _soundSet = ["SCP_CB_ContainmentDoor_Open_1", "SCP_CB_ContainmentDoor_Open_2", "SCP_CB_ContainmentDoor_Open_3"];
        _object animateSource [_animSource, 1, 0.4];
    };
    case "ContainmentDoor Close": {
        _soundSet = ["SCP_CB_ContainmentDoor_Close_1", "SCP_CB_ContainmentDoor_Close_2", "SCP_CB_ContainmentDoor_Close_3"];
        _object animateSource [_animSource, 0, 0.4];
    };
    case "Elevator Open": {
        _soundSet = ["SCP_CB_Elevator_Open_1", "SCP_CB_Elevator_Open_2", "SCP_CB_Elevator_Open_3"];
        _object animateSource [_animSource, 1, 1];
    };
    case "Elevator Open Beep": {
        _soundSet = ["SCP_CB_Elevator_Open_1", "SCP_CB_Elevator_Open_2", "SCP_CB_Elevator_Open_3"];
        _object animateSource [_animSource, 1, 1];
        [_this select 0, "SCP_CB_Elevator_Beep"] remoteExec ["say3D", 0];
    };
    case "Elevator Close": {
        _soundSet = ["SCP_CB_Elevator_Close_1", "SCP_CB_Elevator_Close_2", "SCP_CB_Elevator_Close_3"];
        _object animateSource [_animSource, 0, 1];
    };
    case "Elevator Close Beep": {
        _soundSet = ["SCP_CB_Elevator_Close_1", "SCP_CB_Elevator_Close_2", "SCP_CB_Elevator_Close_3"];
        _object animateSource [_animSource, 0, 1];
        [_this select 0, "SCP_CB_Elevator_Beep"] remoteExec ["say3D", 0];
    };
    default {
        ["fnc_doorOperate error: %1 is not a recognised _soundSet string.", _soundSet] call BIS_fnc_error;
    };
};

//Randomly selects a sound from _soundSet to play. 
_randomSound = _soundSet select floor random count _soundSet;

//Plays _randomSound from _object for door on every client but server.
[_object, _randomSound] remoteExec ["say3D", 0];

//Removes _soundOrigin after _soundDuration seconds.
[_soundOrigin] spawn {
    sleep 2.5;
    deleteVehicle (_this select 0);
};