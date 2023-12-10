/*
Author: LeonZ2019

Description: Private function, set SCP173 safePos

Parameters:
0: Unit - Object
1: Position, PositionASL, from position
2: Position, PositionASL, to position
3: Distance - NUMBER, in meter

Return Value:
NOTHING

Example:
[scp173, [0,0,0], [0,1,0], 0.5] call SCP_fnc_173_updatePos;
*/

params ["_scp", "_before", "_after", "_distance"];
private ["_safeDist", "_toDir", "_pos"];

// SCP173 safe distance
_safeDist = 0.28;
_toDir = [_before, _after] call BIS_fnc_dirTo;

_scp setPosASL _before;
_pos = AGLtoASL (_scp getPos [_distance - _safeDist, _toDir]);
_scp setPosASL _pos;
