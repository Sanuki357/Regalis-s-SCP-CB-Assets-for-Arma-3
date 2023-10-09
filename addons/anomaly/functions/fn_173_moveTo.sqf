/*
Author: LeonZ2019

Description: Calculate desire position

Parameters:
0: Agent - Object
1: Array of PositionASL

Return Value:
NOTHING

Example:
[scp173, [[0,0,0]]] call SCP_fnc_173_moveTo;
*/

params ["_unit", "_path"];
private ["_victim", "_scp", "_path", "_lastIndex", "_ids", "_id", "_sound", "_speed", "_lastPath", "_dir"];

_victim = _unit getVariable ["SCP_CB_173_Victim", objNull];
_scp = _unit getVariable "SCP_CB_173_Source";
_path = [_scp, _path] call SCP_fnc_173_getValidPath;
_path deleteRange [0, 2];
_lastIndex = (count _path) - 1;

// if no valid position, it will not move
if (_lastIndex < 0) exitWith {
	[_scp, _victim] call SCP_fnc_173_neckSnap;
};

// sound control
_ids = _scp getVariable ["SCP_CB_173_SFX", [-1, -1]];
if ((_ids select 0) != -1) then {
	_id = _ids # 1;
	_sound = soundParams _id;
	if ((_id == -1) || (_id != -1 && { (count _sound > 0 && { (_sound # 1) > 0.62 }) || (count _sound == 0) })) then {
		[_scp, 2] call SCP_fnc_173_soundControl;
	};
} else {
	[_scp, 1] call SCP_fnc_173_soundControl;
};
_scp setVariable ["SCP_CB_173_SFX", _ids];

// calculate max distance before it stop
_speed = ((random 2.5) + 22.5) / 20;
_lastPath = getPosASL _scp;

{
	private _distance = _lastPath distance _x;
	if (_speed - _distance < 0) then {
		[_scp, _lastPath, _x, _speed] call SCP_fnc_173_updatePos;
		break;
	} else {
		if (_lastIndex == _forEachIndex) then {
			private _surface = lineIntersectsSurfaces [_lastPath, _x, _victim, _scp, true, 1, "VIEW", "PHYSX"];
			if (count _surface == 0) then {
				[_scp, _lastPath, _x, _lastPath distance _x] call SCP_fnc_173_updatePos;
			} else {
				[_scp, _lastPath, _x, (_surface select 0 select 0) distance _lastPath] call SCP_fnc_173_updatePos;
			};
		} else {
			_lastPath = _x;
			_speed = _speed - _distance;
		};
	};
} forEach _path;
_dir = _scp getDirVisual _victim;
_scp setDir _dir;

[_scp, _victim] call SCP_fnc_173_neckSnap;
