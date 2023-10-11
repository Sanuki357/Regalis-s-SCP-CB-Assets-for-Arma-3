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

if (!local _scp) exitWith {};
if (_scp getVariable ["SCP_CB_173_Setup", false]) exitWith {};
_scp setVariable ["SCP_CB_173_Setup", true];
_scp enableSimulationGlobal false;

_agent = createAgent ["C_man_1", position _scp, [], 0, "CAN_COLLIDE"];
_scp setVariable ["SCP_CB_173_Agent", _agent, true];
_agent setVariable ["SCP_CB_173_Source", _scp, true];
_agent disableCollisionWith _scp;
_agent allowDamage false;
[_agent, true] remoteExec ["hideObjectGlobal"];
_agent disableAI "ANIM";
_agent addEventHandler ["PathCalculated", { _this spawn SCP_fnc_173_moveTo; }];

_scps = missionNamespace getVariable ["SCP_CB_173", []];
_scps pushBack _scp;
SCP_CB_173 = _scps;
publicVariable "SCP_CB_173";

_slp = 1 / 20;
while { !isNull _scp } do {
	uiSleep _slp;
	if (isNull _scp) exitWith { if (alive _agent) then { deleteVehicle _agent; }; };

	_validUnit = (allUnits select { alive _x && !(_x getVariable ["SCP_CB_173_Ignore", false]) }) - allCurators - allUnitsUAV;
	if (count _validUnit > 0) then {
		// clear cache
		_viewable = [_scp] call SCP_fnc_173_getVisible;
		_scp setVariable ["SCP_CB_173_Visible", _viewable];

		_viewing = (_validUnit - allPlayers) select { _x distance _scp <= 500 } findIf { [_x, _scp, _viewable] call SCP_fnc_173_inUnitSight } != -1;
		if (!_viewing) then {
			_players = _validUnit select { isPlayer _x && _x distance _scp <= 500 };
			if (count _players > 0) then {
				{
					[_x] remoteExec ["SCP_fnc_173_playerSightLocal", _x];
				} forEach (_players select { !(_x getVariable ["SCP_CB_173_inRange", false]) });
			};
			_viewing = _players findIf { _scp in (_x getVariable ["SCP_CB_173_WatchAt", []]) } != -1;
		};
		if (!_viewing) then {
			_victim = [_validUnit select { vehicle _x == _x }, _scp] call BIS_fnc_nearestPosition;
			if (_victim isEqualType objNull) then {
				_agent setVariable ["SCP_CB_173_Victim", _victim];
				_agent setPosASL (getPosASL _scp);
				_agent setDir (_agent getDirVisual _victim);
				if (simulationEnabled _scp) then {
					_scp enableSimulationGlobal false;
				};
				_agent setDestination [ASLToAGL getPosASL _victim, "LEADER PLANNED", true];
			};
		} else {
			_victim = _agent getVariable ["SCP_CB_173_Victim", objNull];
			if (!isNull _victim && { _victim isEqualType objNull }) then {
				_agent setVariable ["SCP_CB_173_Victim", objNull];
				[_scp, 0] call SCP_fnc_173_soundControl;
			};
		}
	};
};
if (alive _agent) then { deleteVehicle _agent; };

_scps = missionNamespace getVariable ["SCP_CB_173", []];
_index = _scps findIf { _x == _scp };
if (_index != -1) then {
	_scps deleteAt _index;
	SCP_CB_173 = _scps;
	publicVariable "SCP_CB_173";
};