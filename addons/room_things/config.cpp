#include "script_component.hpp"

#include "CfgPatches.hpp"
#include "CfgEditorCategories.hpp"
#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgFunctions.hpp"

/*
class Extended_InitPost_EventHandlers {
    class SCP_CB_Things_Keypad_CardReader {
        class SCP_CB_Things_Keypad_CardReader_init {
            init = "_this select 0 addAction ['<img image=""z\RegalisSCP_CB\addons\textures\handsymbol.paa"" size=""2.5""' /> CSTRING(CardReader_Insert), {[_this select 0, _this select 1, _this select 0 getVariable ['SCP_RequiredClearanceLevel', 0], 'button_f'] call SCP_fnc_clearanceLevelCheck]}, nil, 3, true, true, '', 'true', 1, false, '', 'button_f'];";
        };
    };
};
*/