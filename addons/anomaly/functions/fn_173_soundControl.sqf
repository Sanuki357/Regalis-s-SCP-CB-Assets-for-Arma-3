/*
Author: LeonZ2019

Description: Private function, play and stop sound for SCP173

Parameters:
0: Agent - OBJECT
1: Type - NUMBER
+------+-------------------+
| Type |      Action       |
+------+-------------------+
|    0 | Stop movement     |
|    1 | Start movement    |
|    2 | Continue movement |
|    3 | Neck snap         |
+------+-------------------+

Return Value:
NOTHING

Example:
[scp173, [[0,0,0]]] call SCP_fnc_173_soundControl;
*/

params ["_parent", "_type"];
private ["_ids", "_needUpdate", "_path"];

_ids = _parent getVariable ["SCP_CB_173_SFX", [-1, -1]];
_needUpdate = true;
switch (_type) do {
	case 0: {
		playSound3D ["z\RegalisSCP_CB\addons\anomaly\data\SCP173\GroundScrapping_end.ogg", _parent, false, getPosASL _parent, 1, 1, 30];
		{
			if (_x != -1) then {
				stopSound _x;
			};
		} forEach _ids;
		_ids = [-1, -1];
	};
	case 1: {
		_ids set [0, playSound3D ["z\RegalisSCP_CB\addons\anomaly\data\SCP173\GroundScrapping_start.ogg", _parent, false, getPosASL _parent, 1.1, 1, 45]];
	};
	case 2: {
		_path = format ["z\RegalisSCP_CB\addons\anomaly\data\SCP173\GroundScrapping_idle_0%1.ogg", selectRandom [1,2,3,4]];
		_ids set [1, playSound3D [_path, _parent, false, getPosASL _parent, 0.75, 1, 60]];
	};
	case 3: {
		playSound3D ["z\RegalisSCP_CB\addons\anomaly\data\SCP173\Neck_Snap.ogg", _parent, false, getPosASL _parent, 1.4, 1, 20];
		_needUpdate = false;
	};
};
if (_needUpdate) then {
	_parent setVariable ["SCP_CB_173_SFX", _ids];
};
