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

params ["_object"];

if (!local player) exitWith { diag_log format ["%1 is not local", player]; };

_weapArray = []; 
_array = (configfile >> "cfgWeapons") call BIS_fnc_getcfgsubclasses; { 
    if ((getNumber (configfile >> "CfgWeapons" >> _x >> "scope") == 2)) then { 
    _weapArray pushBack _x; 
}; 
} forEach _array;

_magArray = []; 
_array1 = (configfile >> "cfgMagazines") call BIS_fnc_getcfgsubclasses;
{ 
    _magAmmo = getText (configfile >> "CfgMagazines" >> _x >> "ammo"); 
    _magPic = getText (configfile >> "CfgMagazines" >> _x >> "picture");
    _isBullet = _magAmmo isKindOf ["BulletCore", configFile >> "CfgAmmo"]; 
    if ((getNumber (configfile >> "cfgMagazines" >> _x >> "scope") == 2) and (_isBullet) and (_magPic != "")) then { 
        _magArray pushBack _x; 
    }; 
} forEach _array1;

_allArrays = _weapArray + _magArray; 
_randomItem = selectRandom _allArrays; 

// Checks if you can add an item into the player's inventory.
_canAddV = player canAddItemToVest _randomItem;
_canAddB = player canAddItemToBackpack _randomItem; 
_canAddU = player canAddItemToUniform _randomItem; 

_canAddItems = _canAddV or _canAddB or _canAddU; 

//systemChat format ["_canAddV is: %1 _canAddB is: %2 _canAddU is: %3", _canAddV, _canAddB, _canAddU];
//systemChat format ["_canAddItems is: %1", _canAddItems];

// Gets the full list of the player's inventory.
// They better have something in their pocket when reach into it!
_itemVList = vestItems player; 
_itemBList = backpackItems player; 
_itemUList = uniformItems player; 

_unitInventory = _itemVList + _itemBList + _itemUList;

// Code for producing sound.
_playSound = {
    private _soundOrigin = "#particlesource" createVehicle position _object;
    _soundOrigin attachTo [_object, [0,0,0], "scp_1162"];
    [_soundOrigin, _this] remoteExec ["say3D", 0];
    [_soundOrigin] spawn {
        sleep 3;
        deleteVehicle (_this select 0);
    };
};

if (_canAddItems) then { 
    _removalItem = selectRandom _unitInventory;  
    (player removeItem _removalItem); 

    player addItem _randomItem; 

    ["SCP_CB_1162_retrieve"] call _playSound;
};

if (count _unitInventory == 0) then {
    if (isClass (configFile >> "CfgPatches" >> "ace_main")) then {
        _handle = [player, 1, "Body", "bullet"] call ace_medical_fnc_addDamageToUnit;
    } else {
        player setDamage 0.9;
    };

    ["SCP_CB_1162_retrieve_body"] call _playSound;
};


