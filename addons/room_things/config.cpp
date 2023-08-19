
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
            "SCP_CB_Things_Door1",
            "SCP_CB_Things_Door1_Button",
            "SCP_CB_Things_Door1_Button_Inverted",
            "SCP_CB_Things_Door1_Button_Error",
            "SCP_CB_Things_Door1_Button_Error_Inverted",
            "SCP_CB_Things_Door1_Button_NoRespose",
            "SCP_CB_Things_Door1_Button_NoRespose_Inverted",
            "SCP_CB_Things_Door1_CardReader",
            "SCP_CB_Things_Door1_CardReader_Level1",
            "SCP_CB_Things_Door1_CardReader_Level2",
            "SCP_CB_Things_Door1_CardReader_Level3",
            "SCP_CB_Things_Door1_CardReader_Level4",
            "SCP_CB_Things_Door1_CardReader_Level5",
            "SCP_CB_Things_Door1_Scanner",
            "SCP_CB_Things_Door1_Numpad",
            "SCP_CB_Things_HeavyDoor",
            "SCP_CB_Things_HeavyDoor_Button",
            "SCP_CB_Things_ContainmentDoor",
            "SCP_CB_Things_ElevatorRoom_Door",
            "SCP_CB_Things_Keypad_Button",
            "SCP_CB_Things_Keypad_CardReader",
            "SCP_CB_Things_Keypad_Code",
            "SCP_CB_Things_Keypad_Scanner",
            "SCP_CB_Things_FileCabinet",
            "SCP_CB_Things_OfficeSeat",
            "SCP_CB_Things_Crate1",
            "SCP_CB_Things_Crate2",
            "SCP_CB_Things_Crate3",
            "SCP_CB_Things_Item_Keycard_C1",
            "SCP_CB_Things_Item_Keycard_C2",
            "SCP_CB_Things_Item_Keycard_C3",
            "SCP_CB_Things_Item_Keycard_C4",
            "SCP_CB_Things_Item_Keycard_C5"
        };
        weapons[] = {
            "SCP_CB_Things_Keycard_C1",
            "SCP_CB_Things_Keycard_C2",
            "SCP_CB_Things_Keycard_C3",
            "SCP_CB_Things_Keycard_C4",
            "SCP_CB_Things_Keycard_C5"
        };
    };
};
#include "CfgEditorCategories.hpp"
#include "CfgVehicles.hpp"
#include "CfgSounds.hpp"
#include "CfgWeapons.hpp"
#include "CfgFunctions.hpp"
//#include "CfgEventHandlers.hpp"
//#include "config_macros_attributes.hpp"

//#define CARDREADER_INIT_SCRIPT(buttonMemory) "_id = _this select 0 addAction [ localize "CSTRING(CardReader_Insert)", { if ([_this select 0, _this select 1, _this select 0 getVariable ['SCP_RequiredClearanceLevel', 0], "#buttonMemory"] call SCP_fnc_clearanceLevelCheck == true) then { _string = _this select 0 getVariable ['SCP_PressExpression', false]; _code = compile _string; call _code; }; }, nil, 3, true, true, '', 'true', 1, false, '', "#buttonMemory" ];";
//#define CARDREADER_INIT_BUTTON_TRIGGER(buttonMemory) "_id = _this select 0 addAction [ localize "CSTRING(CardReader_Insert)", { if ([_this select 0, _this select 1, _this select 0 getVariable ['SCP_RequiredClearanceLevel', 0], "#buttonMemory"] call SCP_fnc_clearanceLevelCheck == true) then { [[_this select 0], 'None'] call SCP_fnc_buttonTrigger; }; }, nil, 3, true, true, '', 'true', 1, false, '', "#buttonMemory" ];";
//#define CARDREADER_INIT_BUTTON_TRIGGER_SIMPLE(buttonMemory, clearanceLevel) "_id = _this select 0 addAction [ localize "CSTRING(CardReader_Insert)", { if ([_this select 0, _this select 1, parseNumber "#clearanceLevel", "#buttonMemory"] call SCP_fnc_clearanceLevelCheck == true) then { [[_this select 0], 'None'] call SCP_fnc_buttonTrigger; }; }, nil, 3, true, true, '', 'true', 1, false, '', "#buttonMemory" ];";

class Extended_InitPost_EventHandlers {
    class SCP_CB_Things_Door1_CardReader { 
        class SCP_CB_Things_Door1_CardReader_Front_init { init = "[_this select 0, 'button_f'] call SCP_fnc_addActionCardReader";};
        class SCP_CB_Things_Door1_CardReader_Back_init { init = "[_this select 0, 'button_b'] call SCP_fnc_addActionCardReader";};
    };

    class SCP_CB_Things_Door1_CardReader_Level1 {
        class SCP_CB_Things_Door1_CardReader_Front_init { init = "[_this select 0, 'button_f'] call SCP_fnc_addActionCardReader; _this select 0 setVariable ['SCP_CB_Operetable_Required_ClearanceLevel', 1]";};
        class SCP_CB_Things_Door1_CardReader_Back_init { init = "[_this select 0, 'button_b'] call SCP_fnc_addActionCardReader; _this select 0 setVariable ['SCP_CB_Operetable_Required_ClearanceLevel', 1]";};
    };

    class SCP_CB_Things_Door1_CardReader_Level2 {
        class SCP_CB_Things_Door1_CardReader_Front_init { init = "[_this select 0, 'button_f'] call SCP_fnc_addActionCardReader; _this select 0 setVariable ['SCP_CB_Operetable_Required_ClearanceLevel', 2]";};
        class SCP_CB_Things_Door1_CardReader_Back_init { init = "[_this select 0, 'button_b'] call SCP_fnc_addActionCardReader; _this select 0 setVariable ['SCP_CB_Operetable_Required_ClearanceLevel', 2]";};
    };

    class SCP_CB_Things_Door1_CardReader_Level3 {
        class SCP_CB_Things_Door1_CardReader_Front_init { init = "[_this select 0, 'button_f'] call SCP_fnc_addActionCardReader; _this select 0 setVariable ['SCP_CB_Operetable_Required_ClearanceLevel', 3]";};
        class SCP_CB_Things_Door1_CardReader_Back_init { init = "[_this select 0, 'button_b'] call SCP_fnc_addActionCardReader; _this select 0 setVariable ['SCP_CB_Operetable_Required_ClearanceLevel', 3]";};
    };

    class SCP_CB_Things_Door1_CardReader_Level4 {
        class SCP_CB_Things_Door1_CardReader_Front_init { init = "[_this select 0, 'button_f'] call SCP_fnc_addActionCardReader; _this select 0 setVariable ['SCP_CB_Operetable_Required_ClearanceLevel', 4]";};
        class SCP_CB_Things_Door1_CardReader_Back_init { init = "[_this select 0, 'button_b'] call SCP_fnc_addActionCardReader; _this select 0 setVariable ['SCP_CB_Operetable_Required_ClearanceLevel', 4]";};
    };

    class SCP_CB_Things_Door1_CardReader_Level5 {
        class SCP_CB_Things_Door1_CardReader_Front_init { init = "[_this select 0, 'button_f'] call SCP_fnc_addActionCardReader; _this select 0 setVariable ['SCP_CB_Operetable_Required_ClearanceLevel', 5]";};
        class SCP_CB_Things_Door1_CardReader_Back_init { init = "[_this select 0, 'button_b'] call SCP_fnc_addActionCardReader; _this select 0 setVariable ['SCP_CB_Operetable_Required_ClearanceLevel', 5]";};
    };

    class SCP_CB_Things_Keypad_Button {
        class SCP_CB_Things_Keypad_Button_init { init = "_this select 0 setVariable ['SCP_CB_Operetable_InteractHalt', false]";};
    };

    class SCP_CB_Things_Keypad_CardReader {
        class SCP_CB_Things_Keypad_CardReader_init { init = "[_this select 0, 'button_f'] call SCP_fnc_addActionCardReader; _this select 0 setVariable ['SCP_CB_Operetable_InteractHalt', false]";};
    };
};
