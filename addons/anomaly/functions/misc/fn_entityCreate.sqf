/*
Author: LeonZ2019

Description: Execute when entity create

Parameters:
0: Object

Return Value:
NOTHING

Example:
*/

params ["_entity"];
switch (typeOf _entity) do {
	case "SCP_CB_Anomaly_SCP173_Static": { [_entity] remoteExec ["SCP_fnc_173_init", _entity]; }
};
