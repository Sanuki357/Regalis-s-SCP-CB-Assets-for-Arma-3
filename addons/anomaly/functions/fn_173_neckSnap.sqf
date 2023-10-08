/*
Author: LeonZ2019

Description: Neck snap if close enough

Parameters:
0: SCP - Object
1: Unit - Object

Return Value:
NOTHING

Example:
[scp173, player] call SCP_fnc_173_neckSnap;
*/

params ["_scp", "_victim"];

if (_scp distance _victim < 2.3 && alive _victim && ([_scp, "VIEW", _victim] checkVisibility [_scp modelToWorldWorld [0,0,0], _victim modelToWorldWorld [0,0,0]]) > 0.5) then {
	private _dmg = damage _victim;
	[_scp, 0] call SCP_fnc_173_soundControl;
	[_victim, 3] call SCP_fnc_173_soundControl;
	_victim setHitPointDamage ["hitneck", 1, true];
	_victim setDamage [(((1 - _dmg) / 2) + _dmg), true, _scp];
	uiSleep 0.09;
	_victim setDamage [1, true, _scp];
};
