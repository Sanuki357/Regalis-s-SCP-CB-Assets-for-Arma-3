/*
Author: LeonZ2019

Description: Loop until scp-173 not in range, LOCAL EFFECT

Parameters:
0: Player - Object

Return Value:
BOOLEAN

Example:
[player] call SCP_fnc_173_PlayerSightLocal;
*/

params ["_player"];

if (_player getVariable ["SCP_CB_173_inRange", false]) exitWith {};
_player setVariable ["SCP_CB_173_inRange", true, true];

while { alive _player } do {
	uiSleep (1 / 20);
	_scps = missionNamespace getVariable ["SCP_CB_173", []];
	if (count _scps > 0) then {
		if (_scps findIf { _x distance _player <= 500 } == -1) exitWith {
			_player setVariable ["SCP_CB_173_inRange", false, true];
			_player setVariable ["SCP_CB_173_watchAt", [], true];
		};
		_viewings = _scps select { (_x distance _player <= 500) && { [_player, _x] call SCP_fnc_173_inPlayerSight } };
		_player setVariable ["SCP_CB_173_watchAt", _viewings, true];
	} else {
		_player setVariable ["SCP_CB_173_inRange", false, true];
		_player setVariable ["SCP_CB_173_watchAt", [], true];
		break;
	};
};
_player setVariable ["SCP_CB_173_inRange", false, true];
_player setVariable ["SCP_CB_173_watchAt", [], true];
