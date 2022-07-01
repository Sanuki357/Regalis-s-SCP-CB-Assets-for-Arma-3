#include "script_component.hpp"

#include "CfgPatches.hpp"
#include "CfgEditorCategories.hpp"
#include "CfgVehicles.hpp"
#include "CfgSounds.hpp"

#include "CfgWeapons.hpp"
#include "CfgFunctions.hpp"

#define CARDREADER_INIT_SCRIPT(buttonMemory) "_id = _this select 0 addAction [ localize "CSTRING(CardReader_Insert)", { if ([_this select 0, _this select 1, _this select 0 getVariable ['SCP_RequiredClearanceLevel', 0], "#buttonMemory"] call SCP_fnc_clearanceLevelCheck == true) then { _string = _this select 0 getVariable ['SCP_PressExpression', false]; _code = compile _string; call _code; }; }, nil, 3, true, true, '', 'true', 1, false, '', "#buttonMemory" ];";

class Extended_InitPost_EventHandlers {
    class SCP_CB_Things_Door1_CardReader {
        class SCP_CB_Things_Door1_CardReader_Front_init { init = CARDREADER_INIT_SCRIPT(button_f) };
        class SCP_CB_Things_Door1_CardReader_Back_init { init = CARDREADER_INIT_SCRIPT(button_b) };
    };

    class SCP_CB_Things_Keypad_CardReader {
        class SCP_CB_Things_Keypad_CardReader_init { init = CARDREADER_INIT_SCRIPT(button_f) };
    };
};