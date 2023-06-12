#include "script_component.hpp"
/*
 * Author: Sanuki357
 * Handles deafness due to explosions going off near the player.
 *
 * Arguments:
 * 0: vehicle - Object the event handler is assigned to (player) <OBJECT>
 * 1: damage - Damage inflicted to the object <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [clientExplosionEvent] call ace_hearing_fnc_explosionNear
 *
 * Public: No
 */

params ["_object", "_soundSet", "_memoryPoint"];
_sound = "SCP_CB_Button_Press";

_soundDur = 1;

switch (_soundSet) do {
    case "Press": {
        _sound = "SCP_CB_Button_Press";
    };
    case "Press Error": {
        _sound = "SCP_CB_Button_Error";
    };
    case "Keycard Granted": {
        _sound = "SCP_CB_CardReader_Granted";
    };
    case "Keycard Denied": {
        _sound = "SCP_CB_CardReader_Denied";
    };
    case "Lockroom Alarm": {
        _sound = "SCP_CB_Lockroom_Alarm";
        _soundDur = 3;
    };
    default {
        ["SCP_fnc_buttonSound error: %1 is not a recognised _soundSet string.", _soundSet] call BIS_fnc_error;
    };
};

private _soundOrigin = "#particlesource" createVehicle position _object;

// Creates and attaches a source of where _sound will be played from, to the memory point selected with _memoryPoint.
// If no memory point of the given _memoryPoint exists, it resorts to the position of the object.
if (([_object, _memoryPoint] call SCP_fnc_memoryPointValidation)) then {
    _soundOrigin attachTo [_object, [0,0,0], _memoryPoint];
} else {
    diag_log format ["RegalisSCP_CB - SCP_fnc_buttonSound.sqf: %1 is a memory point that do not exist in %2. Attempting to play from the object's position.", _memoryPoint, _object];
    _soundOrigin attachTo [_object, [0,1,0]];
};

//Plays _sound from _soundOrigin for button on every client but server.
[_soundOrigin, _sound] remoteExec ["say3D", 0];

//Removes _soundOrigin after _soundDuration seconds.
[_soundOrigin, _soundDur] spawn {
    sleep (_this select 1);
    deleteVehicle (_this select 0);
};