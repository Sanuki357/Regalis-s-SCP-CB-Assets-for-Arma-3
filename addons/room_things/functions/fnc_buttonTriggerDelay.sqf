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

params ["_targets", "_caller", "_delayType", "_delayDur", "_memoryPoint"];

if (_delayType == "Lockroom") then {
    //if (this getVariable [QEGVAR(operatable,requiredClearanceLevel), 0]) then {};
    _handle = [_targets, _caller, _delayDur, _memoryPoint] spawn {
        sleep (_this select 2);
        [_this select 1, "Lockroom Alarm", _this select 3] call SCP_fnc_buttonSound;
        sleep 3;
        systemChat format ["SCP_fnc_buttonTriggerDelay: _target in spawn is: %1", (_this select 0)];
        [(_this select 0), 'None'] call SCP_fnc_buttonTrigger;
    };
};