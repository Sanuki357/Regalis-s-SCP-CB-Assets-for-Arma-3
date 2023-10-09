/*
Author: LeonZ2019

Description: SCP173 Init function

Parameters:
0: SCP173 - Object

Return Value:
NOTHING

Example:
[scp173] call SCP_fnc_173_init;
*/

params ["_scp"];
private ["_agent", "_slp", "_validUnit", "_viewable", "_viewing", "_victim"];

// agent, use to find path
_agent = createAgent ["C_man_1", position _scp, [], 0, "CAN_COLLIDE"];
_scp setVariable ["SCP_CB_173_Agent", _agent];
_agent setVariable ["SCP_CB_173_Source", _scp];
_agent disableCollisionWith _scp;
_agent allowDamage false;
_agent hideObjectGlobal true;
_agent disableAI "ANIM";
_agent addEventHandler ["PathCalculated", { _this spawn SCP_fnc_173_moveTo; }];

_slp = 1 / 20;
while { true } do {
	sleep _slp;
	_validUnit = (allUnits select { alive _x && !(_x getVariable ["SCP_CB_173_Ignore", false]) }) - allCurators - allUnitsUAV;
	if (count _validUnit > 0) then {
		_viewable = [_scp] call SCP_fnc_173_getVisible;
		_scp setVariable ["SCP_CB_173_BoundingPos", []];
		_viewing = (_validUnit - allPlayers) findIf { [_x, _scp, _viewable] remoteExec ["SCP_fnc_173_inUnitSight", _x]; _x getVariable ["SCP_CB_173_WatchAt", false] } != -1;
		if (!_viewing) then {
			_viewing = _validUnit select { isPlayer _x } findIf { [_x, _scp, _viewable] remoteExec ["SCP_fnc_173_inPlayerSight", _x]; _x getVariable ["SCP_CB_173_WatchAt", false] } != -1;
		};
		if (!_viewing) then {
			_victim = [_validUnit select { vehicle _x == _x }, _scp] call BIS_fnc_nearestPosition;
			_agent setVariable ["SCP_CB_173_Victim", _victim];
			_agent setDir (_agent getDirVisual _victim);
			_agent setPosASL (getPosASL _scp);
			_agent setDestination [getPosASL _victim, "LEADER PLANNED", true];
		} else {
			_victim = _agent getVariable ["SCP_CB_173_Victim", objNull];
			if (!isNull _victim) then {
				_agent setVariable ["SCP_CB_173_Victim", objNull];
				[_scp, 0] call SCP_fnc_173_soundControl;
			};
		}
	};
};
