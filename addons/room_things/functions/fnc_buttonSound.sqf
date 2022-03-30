// #include "script_component.hpp"
/*
 * Author: 
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

params ["_object", "_soundSet", "_soundPosition"];
_sound = "SCP_CB_Button_Press";

switch (_soundSet) do {
    case "Press": {
        _sound = "SCP_CB_Button_Press";
    };
    case "Press Error": {
        _sound = "SCP_CB_Button_Error";
    };
    default {
        ["fnc_buttonSound error: %1 is not a recognised _soundSet string.", _soundSet] call BIS_fnc_error;
    };
};

//Creates and attaches a source of where _sound will be played from, to the memory point selected with _soundPosition.
private _soundOrigin = "#particlesource" createVehicle position _object;
_soundOrigin attachTo [_object, [0,0,0], _soundPosition];

//Plays _sound from _soundOrigin for button on every client but server.
[_soundOrigin, _sound] remoteExec ["say3D", 0];

//Removes _soundOrigin after _soundDuration seconds.
[_soundOrigin] spawn {
    sleep 1;
    deleteVehicle (_this select 0);
}


/*
_soundOrigin spawn {
	sleep _soundDuration;
	deleteVehicle _soundOrigin;
};
*/