/*
Author: LeonZ2019

Description: Check if player is viewing to target, LOCAL EFFECT

Parameters:
0: From - Object
1: To - Object
2: Visible - Boolean

Return Value:
ARRAY

Example:
[player, scp173, true] call SCP_fnc_173_inPlayerSight;
*/

params ["_from", "_target", "_visualVisible"];
private ["_pos", "_left", "_right", "_top", "_bottom", "_inScreen", "_fromPos", "_inSight"];

// onMap, onVehicle, onTurret where will auto check eyePos instead of screen
if (cameraOn != _from) exitWith {
	[_from, _target, _visualvisible] call SCP_fnc_173_inUnitSight;
};

_from setVariable ["SCP_CB_173_WatchAt", false];

// check simple visual
if ((!_visualVisible && (currentVisionMode [_from]) select 0 != 1) || (_visualVisible && (currentVisionMode [_from]) select 0 != 0)) exitWith { false };

// check if object in screen
_pos = _target getVariable ["SCP_CB_173_BoundingPos", []];
if (count _pos == 0) then {
	_pos = [_target, 1] call SCP_fnc_173_getBoundingPos;
	_target setVariable ["SCP_CB_173_BoundingPos", _pos];
};

_pos = _pos select { count (worldToScreen ASLToAGL _x) == 2 };
if (count _pos == 0) exitWith { false };

_left = safeZoneX;
_right = safeZoneX + safeZoneW;
_top = safeZoneY;
_bottom = safeZoneY + safeZoneH;
_inScreen = _pos select { _s = worldToScreen ASLToAGL _x; (_s select 0) >= _left && (_s select 0) <= _right && (_s select 1) >= _top && (_s select 1) <= _bottom };
if (count _inScreen == 0) exitWith { false };

// check visibility
_fromPos = eyePos _from;
_inSight = _inScreen findIf { [objNull, "VIEW"] checkVisibility [_fromPos, _x] != 0 } != -1;

_from setVariable ["SCP_CB_173_WatchAt", _inSight];

_inSight;
