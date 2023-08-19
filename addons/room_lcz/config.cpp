
#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = COMPONENT_NAME;
        requiredAddons[] = {"A3_Structures_F", "RegalisSCP_CB_main"};
        requiredVersion = REQUIRED_VERSION;
        units[] =
        {
            "SCP_CB_LCZ_Hallway_Two_1",
            "SCP_CB_LCZ_Hallway_Two_2",
            "SCP_CB_LCZ_Hallway_Two_3",
            "SCP_CB_LCZ_Hallway_Two_4",
            "SCP_CB_LCZ_Hallway_Two_5",
            "SCP_CB_LCZ_Hallway_Three_1",
            "SCP_CB_LCZ_Hallway_Three_2",
            "SCP_CB_LCZ_Hallway_Three_3",
            "SCP_CB_LCZ_Hallway_Corner_1",
            "SCP_CB_LCZ_Hallway_Corner_2",
            "SCP_CB_LCZ_Hallway_Corner_Elevator",
            "SCP_CB_LCZ_Hallway_Four_1",
            "SCP_CB_LCZ_Hallway_Four_2",
            "SCP_CB_LCZ_Hallway_Four_3",
            "SCP_CB_LCZ_Hallway_Tesla",
			"SCP_CB_LCZ_Room_Archive",
			"SCP_CB_LCZ_Room_Endroom",
			"SCP_CB_LCZ_Room_Storeroom",
			"SCP_CB_LCZ_Room_327",
			"SCP_CB_LCZ_Room_1162",
            "SCP_CB_LCZ_Piece_WhiteWall",
            "SCP_CB_LCZ_Piece_WhiteWall_Wide",
            "SCP_CB_LCZ_Piece_WhiteWall_Concave",
            "SCP_CB_LCZ_Piece_WhiteWall_Floorlight",
            "SCP_CB_LCZ_Piece_WhiteWall_Doorway",
            "SCP_CB_LCZ_Piece_WhiteWall_Gateway",
            "SCP_CB_LCZ_Piece_Floor_Concrete",
            "SCP_CB_LCZ_Piece_Floor_Concrete_Big",
            "SCP_CB_LCZ_Piece_Floor_Tile",
            "SCP_CB_LCZ_Piece_Floor_Tile_Big"
        };
        weapons[] = {};
    };
};
#include "CfgEditorCategories.hpp"
#include "CfgVehicles.hpp"
#include "CfgSounds.hpp"

//***************//
// Ambient Noise //
//***************//

class Extended_InitPost_EventHandlers {
    class SCP_CB_LCZ_Hallway_Two_3 {
        class SCP_CB_LCZ_Hallway_Two_3_init {
            init = "_unit = _this select 0; if (local _unit) then { _unit spawn { _soundCache = 'Land_HelipadEmpty_F' createVehicle position _this; _soundCache attachTo [_this, [0,0,0], 'sound_fan']; while {alive _this} do { [_soundCache, 'SCP_Fan', 10] call CBA_fnc_globalSay3d; sleep 3.50; }; deleteVehicle _soundCache; }; _unit spawn { while {alive _this} do { _this animateSource ['Fan_source', 0, 1]; waitUntil {(_this animationSourcePhase 'Fan_source') == 0}; _this animateSource ['Fan_source', 1, true]; }; }; };";
        };
    };

    class SCP_CB_LCZ_Hallway_Three_1 {
        class SCP_CB_LCZ_Hallway_Three_1_init {
            init = "_unit = _this select 0; if (local _unit) then {_unit spawn {_soundCache = 'Land_HelipadEmpty_F' createVehicle position _this;_soundCache attachTo [_this,[0,0,0], 'sound_drip']; while {alive _this} do {[_soundCache, 'SCP_Drip', 10] call CBA_fnc_globalSay3d; sleep 4.95;}; deleteVehicle _soundCache;};};";
        };
    };
};
