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

params ["_object", ["_codeString", false]];

if (!_codeString) then {
    _codeString = _object getVariable ["SCP_CB_Operetable_PressExpression", false];
};

systemChat format ["SCP_fnc_buttonExecExpression: The code in _codeString is: %1", _codeString];

if (typeName _codeString == "STRING") then {
    _code = compile _codeString;
    //call _code;
    [_code] remoteExec ["call", 2];
} else {
	systemChat format ["SCP_fnc_buttonExpressionExecute: The expression in %1 is not a string.", _object];
};