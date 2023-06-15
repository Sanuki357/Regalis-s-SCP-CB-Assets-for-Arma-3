#include "script_component.hpp"
/*
 * Author: Sanuki357
 * Adds a action to a desired object to function as a card reader.
 *
 * Arguments:
 * 0: vehicle - Object the event handler is assigned to (player) <OBJECT>
 * 1: damage - Damage inflicted to the object <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [clientExplosionEvent] call ace_hearing_fnc_explosionNear
 *
 * Public: No
 */

params ["_object", "_memoryPoint"];

if (!([_object, _memoryPoint] call SCP_fnc_memoryPointValidation)) exitWith {
    systemChat format ["RegalisSCP_CB - SCP_fnc_addActionCardReader: %1 is a memory point that do not exist in %2", _memoryPoint, _object];
};
 
//systemChat format ["SCP_fnc_addActionCardReader: Beginning of this function. _object is %1. operatable type is: %2", _object, QEGVAR(operatable,type)];

_object addAction [localize CSTRING(CardReader_Insert), {
    systemChat "Action is doing something";
    if ([_this select 0, _this select 1, _this select 0 getVariable ["SCP_CB_Operetable_Required_ClearanceLevel", 0], _this select 3] call SCP_fnc_clearanceLevelCheck) then {
        
        // TL;DR: Private variables won't work within addAction expression. Or maybe because I didn't add a bracket.
        //private _targetKind = _this select 0 getVariable [QEGVAR(operatable,type), 0] select 0 select 0;
        //_targetKind = getArray (configFile >> "CfgVehicles" >> typeOf (_this select 0) >> QEGVAR(operatable,type)) select 0 select 0;
        //systemChat format ["fnc_addActionCardReader: Type check is a success! _targetKind is %1", _targetKind];

        // If the object the one that comes with door, calls a buttonTrigger function to simply open the door.
        // Else, assuming it's the independent variation, looks for expression and calls it.  

        if (getArray (configFile >> "CfgVehicles" >> typeOf (_this select 0) >> QEGVAR(operatable,type)) select 0 select 0 == "Door") then {
            [_this select 0, 'None'] call SCP_fnc_buttonTrigger;
        } else {
            [_this select 0] call SCP_fnc_buttonExpressionExecute;
        };
    };
}, _memoryPoint, 3, true, true, "", "true", 1, false, "", _memoryPoint];

systemChat format ["SCP_fnc_addActionCardReader: End of this function. _id is %1", _object];