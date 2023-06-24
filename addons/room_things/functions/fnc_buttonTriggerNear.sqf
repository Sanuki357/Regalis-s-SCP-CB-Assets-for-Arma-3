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
params [["_caller", objNull, [[], objNull]], ["_radius", 5, [1]]];

_objs = _caller nearEntities ["ThingX", _radius];
_targets = [];

{ 
    _targetType = (configFile >> "CfgVehicles" >> typeOf _x >> QEGVAR(operatable,type)) call BIS_fnc_getCfgData select 0 select 0;
    if (!isNil "_targetType") then {
		_targets pushBack _x;
	};
} foreach _objs;

[_targets] call SCP_fnc_buttonTrigger;