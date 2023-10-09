/*
Author: LeonZ2019

Description: Check if unit is viewing to target

Parameters:
0: From - Object
1: To - Object
2: Visible - Boolean

Return Value:
ARRAY

Example:
[myUnit, scp173, true] call SCP_fnc_173_inUnitSight;
*/

params ["_from", "_target", "_visualVisible"];
private ["_fromPos", "_fromDir", "_pos", "_viewAngle", "_inVertical", "_angle", "_watchDir", "_dirS", "_dirE", "_inHorizontal", "_dir", "_inSight"];

_from setVariable ["SCP_CB_173_WatchAt", false];

// check simple visual
if ((!_visualVisible && (currentVisionMode [_from]) select 0 != 1) || (_visualVisible && (currentVisionMode [_from]) select 0 != 0)) exitWith { false };

_fromPos = eyePos _from;
_fromDir = getCameraViewDirection _from;
_pos = _target getVariable ["SCP_CB_173_BoundingPos", []];
if (count _pos == 0) then {
	_pos = [_target, 1] call SCP_fnc_173_getBoundingPos;
	_target setVariable ["SCP_CB_173_BoundingPos", _pos];
};

// check Vertical 60 degree
_viewAngle = deg (_fromDir select 2);
_inVertical = _pos select {
	_angle = deg ((_fromPos vectorFromTo _x) select 2);
	((_angle <= (_viewAngle + 30)) && (_angle >= (_viewAngle - 30)))
};
if (count _inVertical == 0) exitWith { false };

// check Horizon 90 degree
_watchDir = [_fromDir] call SCP_fnc_173_vectorToDir;
_dirS = (_watchDir - 45 + 360) % 360;
_dirE = (_watchDir + 45) % 360;
_inHorizontal = _inVertical select {
	_dir = ([_fromPos, _x] call BIS_fnc_dirTo) % 360;
	((_dirS > _dirE && {(_dir > _dirS) || (_dir < _dirE)}) || (_dirE > _dirS && {_dirS < _dir && _dir < _dirE}))
};

// check visibility
_inSight = _inHorizontal findIf { [objNull, "VIEW"] checkVisibility [_fromPos, _x] != 0 } != -1;

_from setVariable ["SCP_CB_173_WatchAt", _inSight];
_inSight;
