// #include "script_component.hpp"
/*
 * Author: Sanuki357
 * Handles opening a door and emit a appopriate sound effect.
 *
 * Possible soundSet input:
 *  "Door1 Open"    |
 *  "Door1 Closed"  \ Simple opening and closing of Door1 with 3 audio valiants.
 *
 * Arguments:
 * 0: object - Object to be controled its animateSource phase and origin of sounds <OBJECT>
 * 1: soundSet - String from one of pre-defined set of strings. Determines the object to be opened or closed, and what sounds to play <STRING>
 * 2: animSource - String of the animation source from AnimationSources class. Required for animateSource <STRING>
 * 3: soundDuration - Number for the duration of say3D in seconds. To not let say3D loop the sound effect <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [this, ""Door1 Open"", ""open_door"", 2.5] execVM "QPATHTOF(functions\fnc_doorOperate.sqf)"
 * [this, ""Door1 Open"", ""open_door"", 2.5] call fnc_doorOperate???????????????????????
 *
 * Public: No
 */

params ["_object", "_soundSet", "_animSource", "_soundDuration"];

switch (_soundSet) do {
    case "Door1 Open": {
        _soundSet = ["SCP_CB_Door1_Open_1", "SCP_CB_Door1_Open_2", "SCP_CB_Door1_Open_3"];
        _object animateSource [_animSource, 1];
    };
    case "Door1 Close": {
        _soundSet = ["SCP_CB_Door1_Close_1", "SCP_CB_Door1_Close_2", "SCP_CB_Door1_Close_3"];
        _object animateSource [_animSource, 0];
    };
    default {
        systemChat format ["fnc_doorOpen error: %1 is not a recognised _soundSet string."];
    };
};

//Randomly selects a sound from _soundSet to play. 
_randomSound = _soundSet select floor random count _soundSet;

//Creates and attaches a source of where _inputSound will be played from, to the memory point selected with _inputSoundPosition.
private _soundOrigin = "#particlesource" createVehicle position _object;
//_soundOrigin attachTo [_object, [0,0,0], _soundPosition];

//Plays _randomSound from _object for door on every client but server.
[_object, _randomSound] remoteExec ["say3D", 0];

//Removes _soundOrigin after _soundDuration seconds.
[_soundOrigin, _soundDuration] spawn {
    sleep (_this select 1);
    deleteVehicle (_this select 0);
};