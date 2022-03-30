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
                statement = "[this, ""Door1 Close"", 'Door_1_source'] execVM "QPATHTOF(functions\fnc_doorOperate.sqf)"; [this, 'Press', 0.5, 'button_f'] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
            };

            class Open_door_F: Close_door_F
            {
                condition = "this animationSourcePhase 'Door_1_source' == 0";
                statement = "[this, ""Door1 Open"", 'Door_1_source'] execVM "QPATHTOF(functions\fnc_doorOperate.sqf)"; [this, 'Press', 0.5, 'button_f'] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
            };
            
            class Close_door_B
            {
                displayNameDefault = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName = CSTRING(Button_Press);
                position = "button_b";
                radius = 1;
                onlyForPlayer = 0;
                condition = "this animationSourcePhase 'Door_1_source' == 1";
                statement = "[this, ""Door1 Close"", 'Door_1_source'] execVM "QPATHTOF(functions\fnc_doorOperate.sqf)"; [this, 'Press', 0.5, 'button_b'] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
            };
            
            class Open_door_B: Close_door_B
            {
                condition = "this animationSourcePhase 'Door_1_source' == 0";
                statement = "[this, ""Door1 Open"", 'Door_1_source'] execVM "QPATHTOF(functions\fnc_doorOperate.sqf)"; [this, 'Press', 0.5, 'button_b'] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
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
                statement = "[this, 'Press (Denied)', 0.5, 'button_f'] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
            };

            class Error_door_B: Error_door_F
            {
                position = "button_b";
                statement = "[this, 'Press (Denied)', 0.5, 'button_b'] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
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
                statement = "[this, 'Press', 0.5, 'button_f'] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
            };

            class NoResponse_door_B: NoResponse_door_F
            {
                position = "button_b";
                statement = "[this, 'Press', 0.5, 'button_b'] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
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
                statement = "[this, 'HeavyDoor Close', 'Door_1_source'] execVM "QPATHTOF(functions\fnc_doorOperate.sqf)"; [this, 'Press', 0.5, 'button_f'] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
            };

            class Open_door_F: Close_door_F
            {
                condition = "this animationSourcePhase 'Door_1_source' == 0";
                statement = "[this, 'HeavyDoor Open', 'Door_1_source'] execVM "QPATHTOF(functions\fnc_doorOperate.sqf)"; [this, 'Press', 0.5, 'button_f'] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
            };
            
            class Close_door_B
            {
                displayNameDefault = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName = CSTRING(Button_Press);
                position = "button_b";
                radius = 1;
                onlyForPlayer = 0;
                condition = "this animationSourcePhase 'Door_1_source' == 1";
                statement = "[this, 'HeavyDoor Close', 'Door_1_source'] execVM "QPATHTOF(functions\fnc_doorOperate.sqf)"; [this, 'Press', 0.5, 'button_b'] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
            };
            
            class Open_door_B: Close_door_B
            {
                condition = "this animationSourcePhase 'Door_1_source' == 0";
                statement = "[this, 'HeavyDoor Open', 'Door_1_source'] execVM "QPATHTOF(functions\fnc_doorOperate.sqf)"; [this, 'Press', 0.5, 'button_b'] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
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
                statement = "[this, 'Press', 0.5, 'button_f'] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
            };
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
                statement = "[this, 'Press', 0.5, 'button_f'] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
            };
        };
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
                statement = "[this, 'Press', 0.5, 'button_f'] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
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
                statement = "[this, 'Press', 0.5, 'button_f'] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
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