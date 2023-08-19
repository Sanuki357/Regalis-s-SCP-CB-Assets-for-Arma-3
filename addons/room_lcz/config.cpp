
#include "script_component.hpp"

#include "CfgPatches.hpp"
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
