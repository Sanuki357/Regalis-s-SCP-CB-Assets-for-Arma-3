/*
Author: LeonZ2019

Description: Private function, use for get bounding position

Parameters:
0: Unit - Object
1: Detail - Number

Return Value:
ARRAY of PositionASL

Example:
[scp173, 2] call SCP_fnc_getBoundingPos;
*/

params ["_target", ["_detail", 0, [0]]];
private ["_detail", "_box", "_x1", "_x2", "_y1", "_y2", "_d", "_u", "_xPos", "_yPos", "_zPos", "_distX", "_distY", "_distZ", "_min", "_array"];

_detail = (_detail max 0) min 10;
_box = boundingBoxReal [_target, "Geometry"];

_x1 = _box # 0 # 0;
_x2 = _box # 1 # 0;
_y1 = _box # 0 # 1;
_y2 = _box # 1 # 1;
_d = _box # 0 # 2;
_u = _box # 1 # 2;

_xPos = [_x1];
_yPos = [_y1];
_zPos = [_d];
if (_detail > 0) then {
	_distX = ((abs _x1) + (abs _x2)) / (_detail + 1);
	_distY = ((abs _y1) + (abs _y2)) / (_detail + 1);
	_distZ = ((abs _d) + (abs _u)) / (_detail + 1);
	_min = [_x1 min _x2, _y1 min _y2, _d min _u];
	for "_i" from 1 to _detail do {
		_xPos pushBack ((_min # 0) + _distX);
		_yPos pushBack ((_min # 1) + _distY);
		_zPos pushBack ((_min # 2) + _distZ);
	};
};
_xPos pushBack _x2;
_yPos pushBack _y2;
_zPos pushBack _u;

_array = [];
{
	private _z = _x;
	{
		private _y = _x;
		{
			_array pushBack (_target modelToWorldWorld  [_x, _y, _z]);
		} forEach _xPos;
	} forEach _yPos;
} forEach _zPos;
_array;
