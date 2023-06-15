#include "script_component.hpp"
/*
 * Author: Sanuki357
 * Returns true if this function detects a memory point in _object's P3D of same name as _memoryPoint.
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

params ["_object", "_memoryPoint"];

_selectionList = _object selectionNames "Memory";
if (_selectionList find _memoryPoint != -1) then {
    //systemChat "fnc_memoryPointValidation: Good to go.";
	true
} else {
    false
};
