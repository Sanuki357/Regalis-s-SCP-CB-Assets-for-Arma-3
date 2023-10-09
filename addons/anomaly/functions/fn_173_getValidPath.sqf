/*
Author: LeonZ2019

Description: Return unobstruct path

Parameters:
0: Unit - Object
1: Array of PositionASL

Return Value:
ARRAY

Example:
[scp173, [[0,0,0]]] call SCP_fnc_173_getValidPath;
*/

params ["_source", "_path"];
private ["_lastPos", "_center", "_diff", "_path", "_lastIndex"];

_lastPos = getPosASL _source;
_center = _source modelToWorldWorld [0,0,0];
_diff = _center vectorDiff _lastPos;
_path = _path apply { _x vectorAdd _diff };
_lastIndex = (count _path) - 1;
_lastPos = _lastPos vectorAdd _diff;
{
	if ([_source, "VIEW", objNull] checkVisibility [_lastPos, _x] <= 0.01) exitWith {
		_lastIndex = _forEachIndex;
	};
	_lastPos = _x;
} forEach _path;
_path resize _lastIndex;
_path;
