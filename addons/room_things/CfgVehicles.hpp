class CfgVehicles
{
    #define ATTRIBUTES_DOOR_HINGE_STATE \
    class DoorHingeState \
    { \
        displayName     = CSTRING(DoorHingeState_displayname); \
        tooltip         = CSTRING(DoorHingeState_tooltip); \
        property        = "DoorHingeState"; \
        control         = "Combo"; \
        expression      = "_this animateSource ['Door_1_Source', _value, true]; "; \
        defaultValue    = 0; \
        typeName        = "NUMBER"; \
        class Values { \
            class Close { \
                name    = CSTRING(DoorHingeState_Close); \
                tooltip = CSTRING(DoorHingeState_Close_tooltip); \
                value   = 0; \
                picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C1_CA.paa); \
            }; \
            class Open { \
                name    = CSTRING(DoorHingeState_Open); \
                tooltip = CSTRING(DoorHingeState_Open_tooltip); \
                value   = 1; \
                picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C2_CA.paa); \
            }; \
        }; \
    };

    #define ATTRIBUTES_DOOR_LOCK_STATE \
    class DoorLockState \
    { \
        displayName     = CSTRING(DoorLockState_displayname); \
        tooltip         = CSTRING(DoorLockState_tooltip); \
        property        = "DoorLockState"; \
        control         = "Combo"; \
        expression      = "_this setVariable ['SCP_DoorLockState', _value]; "; \
        defaultValue    = 0; \
        typeName        = "NUMBER"; \
        class Values { \
            class Level1 { \
                name    = CSTRING(DoorState_level1); \
                tooltip = CSTRING(DoorState_level1_tooltip); \
                value   = 1; \
                picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C1_CA.paa); \
            }; \
            class Level2 { \
                name    = CSTRING(DoorState_level2); \
                tooltip = CSTRING(DoorState_level2_tooltip); \
                value = 2; \
                picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C2_CA.paa); \
            }; \
        }; \
    };

    #define ATTRIBUTES_BUTTON_EXPRESSION(defaultTarget) \
    class PressExpression \
    { \
        displayName     = CSTRING(PressExpression_displayname); \
        tooltip         = CSTRING(PressExpression_tooltip); \
        property        = "PressExpression"; \
        control         = "EditCodeMulti5"; \
        expression      = "_this setVariable ['SCP_PressExpression', _value]"; \
        defaultValue    = "[""[["", "#defaultTarget" , ""], 'None'] call SCP_fnc_buttonTrigger""] joinString """";"; \
        typeName        = "STRING"; \
    };

    #define ATTRIBUTES_CARDREADER_REQUIRED_CLEARANCE_LEVEL \
    class RequiredClearanceLevel \
    { \
        displayName     = CSTRING(RequiredClearanceLevel_displayname); \
        tooltip         = CSTRING(RequiredClearanceLevel_tooltip); \
        property        = "RequiredClearanceLevel"; \
        control         = "Combo"; \
        expression      = "_this setVariable ['SCP_RequiredClearanceLevel', _value]"; \
        defaultValue    = 1; \
        typeName        = "NUMBER"; \
        class Values { \
            class Level1 { \
                name    = CSTRING(RequiredClearanceLevel_level1); \
                tooltip = CSTRING(RequiredClearanceLevel_level1_tooltip); \
                value   = 1; \
                picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C1_CA.paa); \
            }; \
            class Level2 { \
                name    = CSTRING(RequiredClearanceLevel_level2); \
                tooltip = CSTRING(RequiredClearanceLevel_level2_tooltip); \
                value = 2; \
                picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C2_CA.paa); \
            }; \
            class Level3 { \
                name    = CSTRING(RequiredClearanceLevel_level3); \
                tooltip = CSTRING(RequiredClearanceLevel_level3_tooltip); \
                value = 3; \
                picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C3_CA.paa); \
            }; \
            class Level4 { \
                name    = CSTRING(RequiredClearanceLevel_level4); \
                tooltip = CSTRING(RequiredClearanceLevel_level4_tooltip); \
                value = 4; \
                picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C4_CA.paa); \
            }; \
            class Level5 { \
                name    = CSTRING(RequiredClearanceLevel_level5); \
                tooltip = CSTRING(RequiredClearanceLevel_level5_tooltip); \
                value = 5; \
                picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C5_CA.paa); \
            }; \
        }; \
    };

    
    class Land_ToiletBox_F; 
    class SCP_CB_Things_base: Land_ToiletBox_F
    {
        scope = 0;
        scopeCurator = 0;
        armor = 999999;
        armorStructural = 999;
        model = "\A3\Weapons_F\empty.p3d";
        destrType = "DestructNo";
        simulation = House;
        
        editorCategory = "SCP_Facility";
        mapSize = 20.27;
    };

    class ReammoBox_F;
    class Item_Base_F;

    //*******//
    // Doors //
    //*******//

    //----------    Door1
    class SCP_CB_Things_Door1 : SCP_CB_Things_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Door1); // Name in editor
        model = QPATHTOF(data\Door1\Door1_NoButton.p3d); // Path to model
        hiddenSelections[] = {"camo_door"};
        editorSubCategory = "SCP_Doors";
        EGVAR(operatable,type)[] = {{"Door", "Door1", "Door_1_source", "door_1_trigger"}};
        
        class Attributes
		{
            ATTRIBUTES_DOOR_HINGE_STATE
        };

        class AnimationSources
        {
            class Door_1_source
            {
                source = "user";
                animPeriod = 1.2;
                initPhase = 0;
            };
        };
    };

    class SCP_CB_Things_Door1_Button : SCP_CB_Things_Door1
    {
        displayName = CSTRING(Door1_Button); // Name in editor
        model = QPATHTOF(data\Door1\Door1.p3d); // Path to model
        hiddenSelections[] = {"camo_door", "camo_button"};
        
        class UserActions
        {
            class Close_door_F
            {
                displayNameDefault = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName = CSTRING(Button_Press);
                position = "button_f";
                radius = 1;
                onlyForPlayer = 0;
                condition = "this animationSourcePhase 'Door_1_source' == 1";
                statement = "[[this], 'None'] call SCP_fnc_buttonTrigger; [this, 'Press', 'button_f'] call SCP_fnc_buttonSound;";
            };
            class Open_door_F: Close_door_F
            {
                condition = "this animationSourcePhase 'Door_1_source' == 0";
                statement = "[[this], 'None'] call SCP_fnc_buttonTrigger; [this, 'Press', 'button_f'] call SCP_fnc_buttonSound;";
            };
            class Close_door_B: Close_door_F
            {
                position = "button_b";
                statement = "[[this], 'None'] call SCP_fnc_buttonTrigger; [this, 'Press', 'button_b'] call SCP_fnc_buttonSound;";
            };
            class Open_door_B: Close_door_B
            {
                condition = "this animationSourcePhase 'Door_1_source' == 0";
                statement = "[[this], 'None'] call SCP_fnc_buttonTrigger; [this, 'Press', 'button_b'] call SCP_fnc_buttonSound;";
            };
        };

        class Attributes
		{
            ATTRIBUTES_DOOR_HINGE_STATE
            ATTRIBUTES_BUTTON_EXPRESSION(_this)
        };
    };

    class SCP_CB_Things_Door1_Button_Inverted : SCP_CB_Things_Door1_Button
    {
        displayName = CSTRING(Door1_Button_Inverted);
        model = QPATHTOF(data\Door1\Door1_Inverted.p3d);
    };

    class SCP_CB_Things_Door1_Button_Error : SCP_CB_Things_Door1_Button
    {
        displayName = CSTRING(Door1_Button_Error); // Name in editor

        class UserActions
        {
            class Error_door_F
            {
                displayNameDefault = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName = CSTRING(Button_Press);
                position = "button_f";
                radius = 1;
                onlyForPlayer = 0;
                condition = "this animationSourcePhase 'Door_1_source' == 0";
                statement = "[this, 'Press Error', 'button_f'] call SCP_fnc_buttonSound";
            };

            class Error_door_B: Error_door_F
            {
                position = "button_b";
                statement = "[this, 'Press Error', 'button_b'] call SCP_fnc_buttonSound";
            };
        };
    };

    class SCP_CB_Things_Door1_Button_Error_Inverted : SCP_CB_Things_Door1_Button_Error
    {
        displayName = CSTRING(Door1_Button_Error_Inverted);
        model = QPATHTOF(data\Door1\Door1_Inverted.p3d);
    };

    class SCP_CB_Things_Door1_Button_NoRespose : SCP_CB_Things_Door1_Button
    {
        displayName = CSTRING(Door1_Button_NoResponse); // Name in editor

        class UserActions
        {
            class NoResponse_door_F
            {
                displayNameDefault = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName = CSTRING(Button_Press);
                position = "button_f";
                radius = 1;
                onlyForPlayer = 0;
                condition = "this animationSourcePhase 'Door_1_source' == 0";
                statement = "[this, 'Press', 'button_f'] call SCP_fnc_buttonSound";
            };

            class NoResponse_door_B: NoResponse_door_F
            {
                position = "button_b";
                statement = "[this, 'Press', 'button_b'] call SCP_fnc_buttonSound";
            };
        };
    };

    class SCP_CB_Things_Door1_Button_NoRespose_Inverted : SCP_CB_Things_Door1_Button_NoRespose
    {
        displayName = CSTRING(Door1_Button_NoResponse_Inverted);
        model = QPATHTOF(data\Door1\Door1_Inverted.p3d);
    };

    //----------    Card Reader variants
    class SCP_CB_Things_Door1_CardReader : SCP_CB_Things_Door1
    {
        displayName = CSTRING(Door1_CardReader);
        model = QPATHTOF(data\Door1\Door1_CardReader.p3d);
        hiddenSelections[] = {"camo_door", "camo_button"};

        class Attributes
		{
            ATTRIBUTES_DOOR_HINGE_STATE
            ATTRIBUTES_BUTTON_EXPRESSION(_this select 0)
            ATTRIBUTES_CARDREADER_REQUIRED_CLEARANCE_LEVEL
        };
        
        //See config.cpp for addAction of this object.
    };

    //----------    Scanner variants
    class SCP_CB_Things_Door1_Scanner : SCP_CB_Things_Door1_Button
    {
        displayName = CSTRING(Door1_Scanner);
        model = QPATHTOF(data\Door1\Door1_Scanner.p3d);
    };

    //----------    Numpad variants
    class SCP_CB_Things_Door1_Numpad : SCP_CB_Things_Door1_Button
    {
        displayName = CSTRING(Door1_Numpad);
        model = QPATHTOF(data\Door1\Door1_Numpad.p3d);
    };

    //----------    HeavyDoor
    class SCP_CB_Things_HeavyDoor : SCP_CB_Things_Door1
    {
        displayName = CSTRING(HeavyDoor); // Name in editor
        model = QPATHTOF(data\HeavyDoor\HeavyDoor.p3d); // Path to model
        hiddenSelections[] = {"camo_door", "camo_containmentdoor"};
        EGVAR(operatable,type)[] = {{"Door", "HeavyDoor", "Door_1_source", "door_1_trigger"}};
        
        class AnimationSources
        {
            class Door_1_source
            {
                source = "user";
                animPeriod = 1.2;
                initPhase = 0;
            };
        };
    };

    class SCP_CB_Things_HeavyDoor_Button : SCP_CB_Things_Door1_Button
    {
        displayName = CSTRING(HeavyDoor_Button); // Name in editor
        model = QPATHTOF(data\HeavyDoor\HeavyDoor_Button.p3d); // Path to model
        hiddenSelections[] = {"camo_door", "camo_containmentdoor", "camo_button"};
        EGVAR(operatable,type)[] = {{"Door", "HeavyDoor", "Door_1_source", "door_1_trigger"}};
    };

    //----------    ContainmentDoor
    class SCP_CB_Things_ContainmentDoor : SCP_CB_Things_Door1
    {
        displayName = CSTRING(ContainmentDoor); // Name in editor
        model = QPATHTOF(data\ContainmentDoor\ContainmentDoor.p3d); // Path to model
        hiddenSelections[] = {"camo_containmentdoor"};
        EGVAR(operatable,type)[] = {{"Door", "ContainmentDoor", "Door_1_source", "door_1_trigger"}};
        
        class AnimationSources
        {
            class Door_1_source
            {
                source = "user";
                animPeriod = 1.2;
                initPhase = 0;
            };
        };
    };

    //----------    Elevator
    class SCP_CB_Things_ElevatorRoom_Door : SCP_CB_Things_Door1
    {
        displayName = CSTRING(ElevatorRoom_Door); // Name in editor
        model = QPATHTOF(data\Elevator\ElevatorRoom_Door.p3d); // Path to model
        hiddenSelections[] = {"camo_door", "camo_dirtymetal", "camo_metal", "camo_metal3"};
        EGVAR(operatable,type)[] = {{"Door", "Elevator", "Door_1_source", "door_1_trigger"}};
        
        class AnimationSources
        {
            class Door_1_source
            {
                source = "user";
                animPeriod = 1.2;
                initPhase = 0;
            };
        };
    };

    //**********//
    // Keypads //
    //*********//

    class SCP_CB_Things_Keypad_Button : SCP_CB_Things_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Keypad_Button); // Name in editor
        model = QPATHTOF(data\Keypad\Keypad_Button.p3d); // Path to model
        hiddenSelections[] = {"camo_button"};
        editorSubCategory = "SCP_Keypads";
        
        class UserActions
        {
            class Button_f
            {
                displayNameDefault = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName = CSTRING(Button_Press);
                position = "button_f";
                radius = 1;
                onlyForPlayer = 0;
                condition = "true";
                statement = "_string = this getVariable ['SCP_PressExpression', false]; _code = compile _string; call _code; [this, 'Press', 'button_f'] call SCP_fnc_buttonSound";
            };
        };

        class Attributes
		{
            ATTRIBUTES_BUTTON_EXPRESSION(TARGETS)
        };
    };

    class SCP_CB_Things_Keypad_CardReader : SCP_CB_Things_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Keypad_CardReader); // Name in editor
        model = QPATHTOF(data\Keypad\Keypad_CardReader.p3d); // Path to model
        hiddenSelections[] = {"camo_button"};
        editorSubCategory = "SCP_Keypads";

        class Attributes
		{
            ATTRIBUTES_BUTTON_EXPRESSION(TARGETS)
            ATTRIBUTES_CARDREADER_REQUIRED_CLEARANCE_LEVEL
        };
        
        //See config.cpp for addAction of this object.
    };

    class SCP_CB_Things_Keypad_Code : SCP_CB_Things_Keypad_Button
    {
        displayName = CSTRING(Keypad_Code); // Name in editor
        model = QPATHTOF(data\Keypad\Keypad_Code.p3d); // Path to model
        hiddenSelections[] = {"camo_button"};
        
        class UserActions
        {
            class Button_f
            {
                displayNameDefault = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName = CSTRING(Button_Press);
                position = "button_f";
                radius = 1;
                onlyForPlayer = 0;
                condition = "true";
                statement = "[this, 'Press', 'button_f'] call SCP_fnc_buttonSound";
            };
        };
    };

    class SCP_CB_Things_Keypad_Scanner : SCP_CB_Things_Keypad_Button
    {
        displayName = CSTRING(Keypad_Scanner); // Name in editor
        model = QPATHTOF(data\Keypad\Keypad_Scanner.p3d); // Path to model
        hiddenSelections[] = {"camo_button"};
        
        class UserActions
        {
            class Button_f
            {
                displayNameDefault = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName = CSTRING(Button_Press);
                position = "button_f";
                radius = 1;
                onlyForPlayer = 0;
                condition = "true";
                statement = "[this, 'Press', 'button_f'] call SCP_fnc_buttonSound";
            };
        };
    };

    //********//
    // Props //
    //*******//

    class SCP_CB_Things_FileCabinet : SCP_CB_Things_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(FileCabinet); // Name in editor
        model = QPATHTOF(data\Furniture\Cabinet_a.p3d); // Path to model
        hiddenSelections[] = {"camo_cabinet"};
        editorSubCategory = "SCP_Furnitures";
    };

    class SCP_CB_Things_OfficeSeat : SCP_CB_Things_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(OfficeSeat); // Name in editor
        model = QPATHTOF(data\Furniture\Officeseat_a.p3d); // Path to model
        hiddenSelections[] = {"camo_cabinet"};
        editorSubCategory = "SCP_Furnitures";
    };

    class SCP_CB_Things_Crate1 : ReammoBox_F
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Crate1); // Name in editor
        model = QPATHTOF(data\Crate\Crate1.p3d); // Path to model
        hiddenSelections[] = {"camo_crate"};
        editorCategory = "SCP_Facility";
        editorSubCategory = "SCP_Crates";
        maximumLoad = 800;
        class TransportMagazines{};
        class TransportWeapons{};
		class TransportItems{};
    };

    class SCP_CB_Things_Crate2 : SCP_CB_Things_Crate1
    {
        displayName = CSTRING(Crate2); // Name in editor
        model = QPATHTOF(data\Crate\Crate2.p3d); // Path to model
        hiddenSelections[] = {"camo_crate"};
        maximumLoad = 600;
    };

    class SCP_CB_Things_Crate3 : SCP_CB_Things_Crate1
    {
        displayName = CSTRING(Crate3); // Name in editor
        model = QPATHTOF(data\Crate\Crate3.p3d); // Path to model
        hiddenSelections[] = {"camo_crate"};
        maximumLoad = 800;
    };

    //********//
    // Items //
    //*******//

    class SCP_CB_Things_Item_Keycard_C1 : Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = CSTRING(Keycard_C1);
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		model = "\A3\Weapons_F\DummyItemHorizontal.p3d";
		class TransportItems
		{
			class SCP_CB_Things_Keycard_C1
			{
				name = "SCP_CB_Things_Keycard_C1";
				count = 1;
			};
		};
	};

    class SCP_CB_Things_Item_Keycard_C2 : SCP_CB_Things_Item_Keycard_C1
	{
		displayName = CSTRING(Keycard_C2);
		class TransportItems
		{
			class SCP_CB_Things_Keycard_C2
			{
				name = "SCP_CB_Things_Keycard_C2";
				count = 1;
			};
		};
	};

    class SCP_CB_Things_Item_Keycard_C3 : SCP_CB_Things_Item_Keycard_C1
	{
		displayName = CSTRING(Keycard_C3);
		class TransportItems
		{
			class SCP_CB_Things_Keycard_C3
			{
				name = "SCP_CB_Things_Keycard_C3";
				count = 1;
			};
		};
	};

    class SCP_CB_Things_Item_Keycard_C4 : SCP_CB_Things_Item_Keycard_C1
	{
		displayName = CSTRING(Keycard_C4);
		class TransportItems
		{
			class SCP_CB_Things_Keycard_C4
			{
				name = "SCP_CB_Things_Keycard_C4";
				count = 1;
			};
		};
	};

    class SCP_CB_Things_Item_Keycard_C5 : SCP_CB_Things_Item_Keycard_C1
	{
		displayName = CSTRING(Keycard_C5);
		class TransportItems
		{
			class SCP_CB_Things_Keycard_C5
			{
				name = "SCP_CB_Things_Keycard_C5";
				count = 1;
			};
		};
	};
};