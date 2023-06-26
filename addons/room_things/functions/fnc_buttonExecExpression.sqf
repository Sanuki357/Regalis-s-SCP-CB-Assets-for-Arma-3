#include "script_component.hpp"
/*
 * Author: Sanuki357
 * Executes the retrived script from SCP_CB_Operetable_PressExpression in a object.
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
    _code = { [_object] call SCP_fnc_buttonTriggerNear };
    [_code] remoteExec ["call", 2];
	//diag_log format ["SCP_fnc_buttonExpressionExecute: The expression in %1 is not a string. Resorting to the default expression", _object];
};