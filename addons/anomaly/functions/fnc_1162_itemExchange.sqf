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

// Code for producing sound.
_playSound = {
    private _soundOrigin = "#particlesource" createVehicle getPosASL _object;
    _soundOrigin attachTo [_object, [0,0,0], "scp_1162"];
    [_soundOrigin, _this] remoteExec ["say3D", 0];
    [_soundOrigin] spawn {
        sleep 3;
        deleteVehicle (_this select 0);
    };
};

_itemVList = vestItems player; 
_itemBList = backpackItems player; 
_itemUList = uniformItems player; 

_unitInventory = _itemVList + _itemBList + _itemUList;

// Try to give ACE3 damage or vanilla damage if player has no item in thier inventory, then exit this script.
if (count _unitInventory == 0) exitWith {
    if (isClass (configFile >> "CfgPatches" >> "ace_main")) then {
        _handle = [player, 1, "Body", "bullet"] call ace_medical_fnc_addDamageToUnit;
    } else {
        player setDamage 0.9;
    };

    ["SCP_CB_1162_retrieve_body_1"] call _playSound;
};

_commonKind = ["ItemCore", "Greande"];

_IdvPoolCommon = player getVariable ["SCP_CB_1162_IdvPool_Common", []];
_IdvPoolRare = player getVariable ["SCP_CB_1162_IdvPool_Rare", []];
_IdvUseCount = player getVariable ["SCP_CB_1162_IdvUseCount", 0];

if ((count _IdvPoolCommon == 0) || (count _IdvPoolRare == 0)) then {
    _array = (configfile >> "cfgWeapons") call BIS_fnc_getcfgsubclasses;
    { 
        _weapScope = getNumber (configfile >> "CfgWeapons" >> _x >> "scope");
        _weapPic = getText (configfile >> "CfgWeapons" >> _x >> "picture");
        if ((_weapScope == 2) && (_weapPic != "")) then {
            for "_i" from 0 to (count _commonKind - 1) do {
                if (_x isKindOf [_commonKind select _i, configFile >> "CfgWeapons"]) exitWith {
                    _IdvPoolCommon pushBack _x; 
                };

                if ((_i) == (count _commonKind - 1)) then {
                    _IdvPoolRare pushBack _x; 
                };
            };
        };
    } forEach _array;

    _array = (configfile >> "cfgMagazines") call BIS_fnc_getcfgsubclasses;
    { 
        _magAmmo = getText (configfile >> "CfgMagazines" >> _x >> "ammo"); 
        _magPic = getText (configfile >> "CfgMagazines" >> _x >> "picture");
        _isBullet = _magAmmo isKindOf ["BulletCore", configFile >> "CfgAmmo"];
        _magScope = getNumber (configfile >> "cfgMagazines" >> _x >> "scope");
        if ((_magScope == 2) and (_isBullet) and (_magPic != "")) then { 
            _IdvPoolCommon pushBack _x; 
        };
    } forEach _array1;

    _array = (configfile >> "cfgVehicle" >> "Bag_Base") call BIS_fnc_getcfgsubclasses;
    {
        _vehPic = getText (configfile >> "CfgVehicle" >> _x >> "picture");
        _vehScope = getNumber (configfile >> "cfgVehicle" >> _x >> "scope");
        if ((_vehScope == 2) && (_vehPic != "")) then { 
            _IdvPoolRare pushBack _x; 
        };
    } forEach _array2;

    _randomCommon = [];
    _randomRare = [];

    for "_i" from 0 to (floor random [0, 10, 20]) do {
        _randomCommon pushBack selectRandom _IdvPoolCommon;
    };

    for "_i" from 0 to (floor random [0, 5, 20]) do {
        _randomRare pushBack selectRandom _IdvPoolRare;
    };

    //hint format ["_randomCommon: %1. __randomRare: %2", _randomCommon, _randomRare];

    _IdvPoolCommon = _randomCommon;
    _IdvPoolRare = _randomRare;

    player setVariable ["SCP_CB_1162_IdvPool_Common", _IdvPoolCommon, true];
    player setVariable ["SCP_CB_1162_IdvPool_Rare", _IdvPoolRare, true];
};

_rareLoot = false;
if ((floor random 20) > 18) then { _rareLoot = true; };

_randomItem = "";

for "_i" from 0 to 2 do {

    if (_rareLoot) then {
        _randomItem = selectRandom _IdvPoolRare;
    } else {
        _randomItem = selectRandom _IdvPoolCommon;
    };
    
    //systemChat format ["_randomItem is: %1. _i is: %2", _randomItem, _i];

    if (player canAdd _randomItem) exitWith { 
        _removalItem = selectRandom _unitInventory;  
        (player removeItem _removalItem); 

        player addItem _randomItem;

        if (_IdvUseCount > (floor random [5, 25, 30])) then {
            player setVariable ["SCP_CB_1162_IdvPool_Common", [], true];
            player setVariable ["SCP_CB_1162_IdvPool_Rare", [], true];
            player setVariable ["SCP_CB_1162_IdvUseCount", 0, true];

            if (isClass (configFile >> "CfgPatches" >> "ace_main")) then {
                _handle = [player, 0.2, "Body", "bullet"] call ace_medical_fnc_addDamageToUnit;
            } else {
                player setDamage 0.2;
            };
            ["SCP_CB_1162_retrieve_body_3"] call _playSound;
        } else {
            _IdvUseCount = _IdvUseCount + 1;
            player setVariable ["SCP_CB_1162_IdvUseCount", _IdvUseCount, true];

            if (_rareLoot) then {
                ["SCP_CB_1162_retrieve_4"] call _playSound;
            } else {
                if ((random 1) < 0.5) then {
                    ["SCP_CB_1162_retrieve_1"] call _playSound;
                } else {
                    ["SCP_CB_1162_retrieve_2"] call _playSound;
                };
            };
        };        
    };
};