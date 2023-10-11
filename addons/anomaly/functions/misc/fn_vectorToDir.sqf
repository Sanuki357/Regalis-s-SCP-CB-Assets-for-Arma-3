/*
Author: LeonZ2019

Description: Private function, use for convert vector direction to direction

Parameters:
0: VectorDir

Return Value:
Number - Direction 0 to 359

Example:
[[0, 1, 0]] call SCP_fnc_vectorToDir;
*/

params ["_vector"];

private _dir = 0;
if (_vector # 0 > 0) then {
	_dir = acos (_vector # 1);
} else {
	_dir = 360 - (acos (_vector # 1));
};
_dir;
