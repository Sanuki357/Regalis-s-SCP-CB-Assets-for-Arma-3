/*
Author: LeonZ2019

Description: Check SCP173 if have light on it, useful in dark enviroment, like night or inside building with no light

Parameters:
0: OBJECT - SCP-173

Return Value:
BOOLEAN

Example:
[scp173] call SCP_fnc_173_getVisible;
*/

params ["_scp"];

private _lights = getLightingAt _scp;
private _brightness = (_lights # 1) + (_lights # 3);
(_brightness > 0.5)
