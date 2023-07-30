#include "script_component.hpp"
/*
 * Author: Sanuki357
 * Simillar to SCP_fnc_buttonTrigger, but this also puts scheduled delayed activation of operatables and prevents player from press while in delay.
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

params [
    ["_targets",        objNull,    [[], objNull]],
    ["_caller",         objNull,    [objNull]],
    ["_delayType",      "Lockroom", [""]],
    ["_delayDur",       3,          [1]],
    ["_memoryPoint",    "button_f", [""]],
    ["_cooldownDur",    1.2,        [1]]
];

if (_delayType == "Lockroom") then {
    [_targets, 'None'] call SCP_fnc_buttonTrigger;
    _caller setVariable ["SCP_CB_Operetable_InteractHalt", true, true];

    _handle = [_targets, _caller, _delayDur, _memoryPoint, _cooldownDur] spawn {
        params ["_targets", "_caller", "_delayDur", "_memoryPoint", "_cooldownDur"];
        sleep _delayDur;
        //systemChat format ["SCP_fnc_buttonTriggerDelay: _targets is: %1. _memoryPoint is: %2", _targets, _memoryPoint];
        [_caller, "Lockroom Alarm", _memoryPoint] call SCP_fnc_buttonSound;
        sleep 3;
        //systemChat format ["SCP_fnc_buttonTriggerDelay: _target in spawn is: %1", (_this select 0)];
        [_targets, 'None'] call SCP_fnc_buttonTrigger;
        sleep _cooldownDur;
        _caller setVariable ["SCP_CB_Operetable_InteractHalt", false, true];
    };
};