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
	case "SCP_CB_Anomaly_SCP173": { [_entity] remoteExec ["SCP_fnc_173_init", _entity]; };
	case "SCP_CB_Anomaly_SCP173_Spooky" : { [_entity] remoteExec ["SCP_fnc_173_init", _entity]; };
	case "SCP_CB_Anomaly_SCP173_Skibidi" : { [_entity] remoteExec ["SCP_fnc_173_init", _entity]; };
};
