class CfgVehicles
{
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

    class SCP_CB_Things_base_cardReader: SCP_CB_Things_base
    {
        class Attributes
		{
			class RequiredClearanceLevel
			{
				displayName     = CSTRING(RequiredClearanceLevel_displayname);
				tooltip         = CSTRING(RequiredClearanceLevel_tooltip);
				property        = "RequiredClearanceLevel";
				control         = "Combo";
				expression      = "_this setVariable ['SCP_RequiredClearanceLevel', _value]";
				defaultValue    = 1;
                typeName        = "NUMBER";
                class Values {
                    class Level1 {
                        name    = CSTRING(RequiredClearanceLevel_level1);
                        tooltip = CSTRING(RequiredClearanceLevel_level1_tooltip);
                        value   = 1;
                        picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C1_CA.paa);
                        //pictureRight = "\a3\data_f_tacops\logos\arma3_tacops_icon_ca.paa";
                    };
                    class Level2 {
                        name    = CSTRING(RequiredClearanceLevel_level2);
                        tooltip = CSTRING(RequiredClearanceLevel_level2_tooltip);
                        value = 2;
                        picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C2_CA.paa);
                    };
                    class Level3 {
                        name    = CSTRING(RequiredClearanceLevel_level3);
                        tooltip = CSTRING(RequiredClearanceLevel_level3_tooltip);
                        value = 3;
                        picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C3_CA.paa);
                    };
                    class Level4 {
                        name    = CSTRING(RequiredClearanceLevel_level4);
                        tooltip = CSTRING(RequiredClearanceLevel_level4_tooltip);
                        value = 4;
                        picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C4_CA.paa);
                    };
                    class Level5 {
                        name    = CSTRING(RequiredClearanceLevel_level5);
                        tooltip = CSTRING(RequiredClearanceLevel_level5_tooltip);
                        value = 5;
                        picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C5_CA.paa);
                    };
                };
			};
        };
    };

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
                // old statement: [daar, "ContainmentDoor Open", "Door_1_source", 3] execVM "z\RegalisSCP_CB\addons\room_things\functions\fnc_doorOperate.sqf"
                statement = "[this, 'Door1 Close', 'Door_1_source'] call SCP_fnc_doorOperate; [this, 'Press', 'button_f'] call SCP_fnc_buttonSound";
            };

            class Open_door_F: Close_door_F
            {
                condition = "this animationSourcePhase 'Door_1_source' == 0";
                statement = "[this, 'Door1 Open', 'Door_1_source'] call SCP_fnc_doorOperate; [this, 'Press', 'button_f'] call SCP_fnc_buttonSound";
            };
            
            class Close_door_B
            {
                displayNameDefault = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName = CSTRING(Button_Press);
                position = "button_b";
                radius = 1;
                onlyForPlayer = 0;
                condition = "this animationSourcePhase 'Door_1_source' == 1";
                statement = "[this, 'Door1 Close', 'Door_1_source'] call SCP_fnc_doorOperate; [this, 'Press', 'button_b'] call SCP_fnc_buttonSound";
            };
            
            class Open_door_B: Close_door_B
            {
                condition = "this animationSourcePhase 'Door_1_source' == 0";
                statement = "[this, 'Door1 Open', 'Door_1_source'] call SCP_fnc_doorOperate; [this, 'Press', 'button_b'] call SCP_fnc_buttonSound";
            };
        };
    };

    class SCP_CB_Things_Door1_Button_Inverted : SCP_CB_Things_Door1_Button
    {
        displayName = CSTRING(Door1_Button_Inverted);
        model = QPATHTOF(data\Door1\Door1_Inverted.p3d);
    };

    class SCP_CB_Things_Door1_Button_Error : SCP_CB_Things_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Door1_Button_Error); // Name in editor
        model = QPATHTOF(data\Door1\Door1.p3d); // Path to model
        editorSubCategory   = "SCP_Doors";

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

    class SCP_CB_Things_Door1_Button_NoRespose : SCP_CB_Things_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Door1_Button_NoResponse); // Name in editor
        model = QPATHTOF(data\Door1\Door1.p3d); // Path to model
        editorSubCategory   = "SCP_Doors";

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
    class SCP_CB_Things_Door1_CardReader : SCP_CB_Things_Door1_Button
    {
        displayName = CSTRING(Door1_CardReader);
        model = QPATHTOF(data\Door1\Door1_CardReader.p3d);
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
    class SCP_CB_Things_HeavyDoor : SCP_CB_Things_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(HeavyDoor); // Name in editor
        model = QPATHTOF(data\HeavyDoor\HeavyDoor.p3d); // Path to model
        hiddenSelections[] = {"camo_door", "camo_containmentdoor"};
        editorSubCategory = "SCP_Doors";
        
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

    class SCP_CB_Things_HeavyDoor_Button : SCP_CB_Things_HeavyDoor
    {
        displayName = CSTRING(HeavyDoor_Button); // Name in editor
        model = QPATHTOF(data\HeavyDoor\HeavyDoor_Button.p3d); // Path to model
        hiddenSelections[] = {"camo_door", "camo_containmentdoor", "camo_button"};
        
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
                statement = "[this, 'HeavyDoor Close', 'Door_1_source'] call SCP_fnc_doorOperate; [this, 'Press', 'button_f'] call SCP_fnc_buttonSound";
            };

            class Open_door_F: Close_door_F
            {
                condition = "this animationSourcePhase 'Door_1_source' == 0";
                statement = "[this, 'HeavyDoor Open', 'Door_1_source'] call SCP_fnc_doorOperate; [this, 'Press', 'button_f'] call SCP_fnc_buttonSound";
            };
            
            class Close_door_B
            {
                displayNameDefault = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName = CSTRING(Button_Press);
                position = "button_b";
                radius = 1;
                onlyForPlayer = 0;
                condition = "this animationSourcePhase 'Door_1_source' == 1";
                statement = "[this, 'HeavyDoor Close', 'Door_1_source'] call SCP_fnc_doorOperate; [this, 'Press', 'button_b'] call SCP_fnc_buttonSound";
            };
            
            class Open_door_B: Close_door_B
            {
                condition = "this animationSourcePhase 'Door_1_source' == 0";
                statement = "[this, 'HeavyDoor Open', 'Door_1_source'] call SCP_fnc_doorOperate; [this, 'Press', 'button_b'] call SCP_fnc_buttonSound";
            };
        };
    };

    //----------    ContainmentDoor
    class SCP_CB_Things_ContainmentDoor : SCP_CB_Things_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(ContainmentDoor); // Name in editor
        model = QPATHTOF(data\ContainmentDoor\ContainmentDoor.p3d); // Path to model
        hiddenSelections[] = {"camo_containmentdoor"};
        editorSubCategory = "SCP_Doors";
        
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
                statement = "[this, 'Press', 'button_f'] call SCP_fnc_buttonSound";
            };
        };
    };

    class SCP_CB_Things_Keypad_CardReader : SCP_CB_Things_base_cardReader
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Keypad_CardReader); // Name in editor
        model = QPATHTOF(data\Keypad\Keypad_CardReader.p3d); // Path to model
        hiddenSelections[] = {"camo_button"};
        editorSubCategory = "SCP_Keypads";
        
        /*
        class UserActions
        {
            class Button_f
            {
                displayNameDefault = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName = CSTRING(CardReader_Insert);
                position = "button_f";
                radius = 1;
                onlyForPlayer = 0;
                condition = "true";
                statement = "[this, this, this getVariable ['SCP_RequiredClearanceLevel', 0], 'button_f'] call SCP_fnc_clearanceLevelCheck";
            };
        };
        */
    };

    class SCP_CB_Things_Keypad_Code : SCP_CB_Things_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Keypad_Code); // Name in editor
        model = QPATHTOF(data\Keypad\Keypad_Code.p3d); // Path to model
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
                statement = "[this, 'Press', 'button_f'] call SCP_fnc_buttonSound";
            };
        };
    };

    class SCP_CB_Things_Keypad_Scanner : SCP_CB_Things_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Keypad_Scanner); // Name in editor
        model = QPATHTOF(data\Keypad\Keypad_Scanner.p3d); // Path to model
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
                statement = "[this, 'Press', 'button_f'] call SCP_fnc_buttonSound";
            };
        };
    };

    //************//
    // Furnitures //
    //************//

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
};