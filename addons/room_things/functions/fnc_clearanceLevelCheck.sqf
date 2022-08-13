#include "script_component.hpp"
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

params ["_object", "_caller", "_requiredLvl", "_soundPosition"];

_idCardLvl = 0;

if (true) then {
    if ("SCP_CB_Things_Keycard_C5" in items _caller) exitWith {_idCardLvl = 5;};
    if ("SCP_CB_Things_Keycard_C4" in items _caller) exitWith {_idCardLvl = 4;};
    if ("SCP_CB_Things_Keycard_C3" in items _caller) exitWith {_idCardLvl = 3;};
    if ("SCP_CB_Things_Keycard_C2" in items _caller) exitWith {_idCardLvl = 2;};
    if ("SCP_CB_Things_Keycard_C1" in items _caller) exitWith {_idCardLvl = 1;};
};

if (_idCardLvl == 0) exitWith {
    //systemChat "You do not have any ID card in your inventory.";
    false
};

if (_idCardLvl >= _requiredLvl) exitWith {
    /*
    for "_i" from 0 to count synchronizedObjects _object do {
        [synchronizedObjects _object select _i, 'Door1 Close', 'Door_1_source'] call SCP_fnc_doorOperate;
    };
    */
    [_object, 'Keycard Granted', _soundPosition] call SCP_fnc_buttonSound;
    true
};

if (_idCardLvl < _requiredLvl) exitWith {
    [_object, 'Keycard Denied', _soundPosition] call SCP_fnc_buttonSound;
    false
};

["fnc_clearanceLevelCheck error: %1 is not a recognised _soundSet string.", _idCardLvl] call BIS_fnc_error;
false