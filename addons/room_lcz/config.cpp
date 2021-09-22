
#include "script_component.hpp"

#include "CfgPatches.hpp"
#include "CfgEditorCategories.hpp"
#include "CfgVehicles.hpp"
#include "CfgSounds.hpp"



//***************//
// Ambient Noise //
//***************//

class Extended_InitPost_EventHandlers 
{
    class SCPLCZ_Hallway_2_Three
    {
        class SCPLCZ_Hallway_2_Three_init 
        {
            init = "_unit = _this select 0; if (local _unit) then {_unit spawn {_soundCache = 'Land_HelipadEmpty_F' createVehicle position _this;_soundCache attachTo [_this,[0,0,0], 'sound_fan'];while {alive _this} do {[_soundCache, 'SCP_Fan', 10] call CBA_fnc_globalSay3d;sleep 2.95;};deleteVehicle _soundCache;};};";
        };
    };
    
    class SCPLCZ_Hallway_3_One
    {
        class SCPLCZ_Hallway_3_One_init
        {
            init = "_unit = _this select 0; if (local _unit) then {_unit spawn {_soundCache = 'Land_HelipadEmpty_F' createVehicle position _this;_soundCache attachTo [_this,[0,0,0], 'sound_drip'];while {alive _this} do {[_soundCache, 'SCP_Drip', 10] call CBA_fnc_globalSay3d;sleep 4.95;};deleteVehicle _soundCache;};};";
        };
    };
};