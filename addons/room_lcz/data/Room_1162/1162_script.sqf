_weapArray = []; 
_array = (configfile >> "cfgWeapons") call BIS_fnc_getcfgsubclasses;  
{ 
if ((getNumber (configfile >> "CfgWeapons" >> _x >> "scope") != 0)) then { 
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
 
_canAddV = player canAddItemToVest _randomItem;
_canAddB = player canAddItemToBackpack _randomItem; 
_canAddU = player canAddItemToUniform _randomItem; 
 
_canAddItems = (_canAddV == true) or (_canAddB == true) or (_canAddU == true); 

if (_canAddItems == true) then { 
 
_itemVList = vestItems player; 
_itemBList = backpackItems player; 
_itemUList = uniformItems player; 
 
_randomDelete = _itemVList + _itemBList + _itemUList; 
 
_removalItem = selectRandom _randomDelete;  
(player removeItem _removalItem); 

player addItem _randomItem; 
};


