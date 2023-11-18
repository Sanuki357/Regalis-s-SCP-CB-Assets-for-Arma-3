#include "config_macros_attributes.hpp"

class CfgVehicles
{
    class ThingX; 
    class SCP_CB_Things_base: ThingX
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
        scopeCurator = 2;
        displayName = CSTRING(Door1); // Name in editor
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_Door1.jpg);
        model = QPATHTOF(data\Door1\Door1_NoButton.p3d); // Path to model
        hiddenSelections[] = {"camo_door"};
        editorSubCategory = "SCP_Doors";
        icon = "z\RegalisSCP_CB\addons\room_things\data\UI\iconSCPDoor_CA.paa";
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
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_Door1_Button.jpg);
        model = QPATHTOF(data\Door1\Door1.p3d); // Path to model
        hiddenSelections[] = {"camo_door", "camo_button"};

        class UserActions
        {
            class Close_door_F
            {
                displayNameDefault  = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName         = CSTRING(Button_Press);
                priority            = 6;
                position            = "button_f";
                radius              = 1;
                onlyForPlayer       = 0;
                condition           = "this animationSourcePhase 'Door_1_source' == 1";
                statement           = "[[this], 'None'] call SCP_fnc_buttonTrigger; [this, 'Press', 'button_f'] call SCP_fnc_buttonSound;";
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
        };
    };

    class SCP_CB_Things_Door1_Button_Inverted : SCP_CB_Things_Door1_Button
    {
        displayName = CSTRING(Door1_Button_Inverted);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_Door1_Button_Inverted.jpg);
        model = QPATHTOF(data\Door1\Door1_Inverted.p3d);
    };

    class SCP_CB_Things_Door1_Button_Error : SCP_CB_Things_Door1_Button
    {
        displayName = CSTRING(Door1_Button_Error); // Name in editor
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_Door1_Button_Error.jpg);

        class UserActions
        {
            class Error_door_F
            {
                displayNameDefault  = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName         = CSTRING(Button_Press);
                priority            = 6;
                position            = "button_f";
                radius              = 1;
                onlyForPlayer       = 0;
                condition           = "this animationSourcePhase 'Door_1_source' == 0";
                statement           = "[this, 'Press Error', 'button_f'] call SCP_fnc_buttonSound";
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
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_Door1_Button_Error_Inverted.jpg);
        model = QPATHTOF(data\Door1\Door1_Inverted.p3d);
    };

    class SCP_CB_Things_Door1_Button_NoRespose : SCP_CB_Things_Door1_Button
    {
        displayName = CSTRING(Door1_Button_NoResponse); // Name in editor
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_Door1_Button_NoRespose.jpg);
        

        class UserActions
        {
            class NoResponse_door_F
            {
                displayNameDefault  = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName         = CSTRING(Button_Press);
                priority            = 6;
                position            = "button_f";
                radius              = 1;
                onlyForPlayer       = 0;
                condition           = "this animationSourcePhase 'Door_1_source' == 0";
                statement           = "[this, 'Press', 'button_f'] call SCP_fnc_buttonSound";
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
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_Door1_Button_NoRespose_Inverted.jpg);
        model = QPATHTOF(data\Door1\Door1_Inverted.p3d);
    };

    //----------    Card Reader variants
    class SCP_CB_Things_Door1_CardReader : SCP_CB_Things_Door1
    {
        scopeCurator = 1;
        displayName = CSTRING(Door1_CardReader);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_Door1_CardReader.jpg);
        model = QPATHTOF(data\Door1\Door1_CardReader.p3d);
        hiddenSelections[] = {"camo_door", "camo_button"};
        //EGVAR(operatable,clearanceLevel)[] = {{1}};

        class Attributes
		{
            ATTRIBUTES_DOOR_HINGE_STATE
            ATTRIBUTES_CARDREADER_REQUIRED_CLEARANCE_LEVEL
        };
        
        //See config.cpp for addAction of this object.
    };

    // Zeus only variants with pre-defined clearance level requirement for each one.
    class SCP_CB_Things_Door1_CardReader_Level1 : SCP_CB_Things_Door1_CardReader
    {
        displayName = CSTRING(Door1_CardReader_Level1);
        scope = 1;
        scopeCurator = 2;
        //EGVAR(operatable,clearanceLevel)[] = {{1}};

        //See config.cpp for addAction of this object.
    };

    class SCP_CB_Things_Door1_CardReader_Level2 : SCP_CB_Things_Door1_CardReader_Level1
    {
        displayName = CSTRING(Door1_CardReader_Level2);
        //EGVAR(operatable,clearanceLevel)[] = {{2}};
        //See config.cpp for addAction of this object.
    };

    class SCP_CB_Things_Door1_CardReader_Level3 : SCP_CB_Things_Door1_CardReader_Level1
    {
        displayName = CSTRING(Door1_CardReader_Level3);
        //EGVAR(operatable,clearanceLevel)[] = {{3}};

        //See config.cpp for addAction of this object.
    };

    class SCP_CB_Things_Door1_CardReader_Level4 : SCP_CB_Things_Door1_CardReader_Level1
    {
        displayName = CSTRING(Door1_CardReader_Level4);
        //EGVAR(operatable,clearanceLevel)[] = {{4}};
        
        //See config.cpp for addAction of this object.
    };

    class SCP_CB_Things_Door1_CardReader_Level5 : SCP_CB_Things_Door1_CardReader_Level1
    {
        displayName = CSTRING(Door1_CardReader_Level5);
        //EGVAR(operatable,clearanceLevel)[] = {{5}};
        
        //See config.cpp for addAction of this object.
    };

    //----------    Scanner variants
    class SCP_CB_Things_Door1_Scanner : SCP_CB_Things_Door1_Button
    {
        displayName = CSTRING(Door1_Scanner);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_Door1_Scanner.jpg);
        model = QPATHTOF(data\Door1\Door1_Scanner.p3d);
    };

    //----------    Numpad variants
    class SCP_CB_Things_Door1_Numpad : SCP_CB_Things_Door1_Button
    {
        displayName = CSTRING(Door1_Numpad);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_Door1_Numpad.jpg);
        model = QPATHTOF(data\Door1\Door1_Numpad.p3d);
    };

    //----------    HeavyDoor
    class SCP_CB_Things_HeavyDoor : SCP_CB_Things_Door1
    {
        displayName = CSTRING(HeavyDoor); // Name in editor
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_HeavyDoor.jpg);
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
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_HeavyDoor_Button.jpg);
        model = QPATHTOF(data\HeavyDoor\HeavyDoor_Button.p3d); // Path to model
        hiddenSelections[] = {"camo_door", "camo_containmentdoor", "camo_button"};
        EGVAR(operatable,type)[] = {{"Door", "HeavyDoor", "Door_1_source", "door_1_trigger"}};
    };

    //----------    ContainmentDoor
    class SCP_CB_Things_ContainmentDoor : SCP_CB_Things_Door1
    {
        displayName = CSTRING(ContainmentDoor); // Name in editor
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_ContainmentDoor.jpg);
        model = QPATHTOF(data\ContainmentDoor\ContainmentDoor.p3d); // Path to model
        hiddenSelections[] = {"camo_containmentdoor"};
        icon = "z\RegalisSCP_CB\addons\room_things\data\UI\iconSCPContainmentDoor_CA.paa";
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
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_ElevatorRoom_Door.jpg);
        model = QPATHTOF(data\Elevator\ElevatorRoom_Door.p3d); // Path to model
        hiddenSelections[] = {"camo_door", "camo_dirtymetal", "camo_metal", "camo_metal3"};
        icon = "iconObject_1x1";
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
        scopeCurator = 2;
        displayName = CSTRING(Keypad_Button); // Name in editor
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_Keypad_Button.jpg);
        model = QPATHTOF(data\Keypad\Keypad_Button.p3d); // Path to model
        hiddenSelections[] = {"camo_button"};
        editorSubCategory = "SCP_Keypads";
        icon = "z\RegalisSCP_CB\addons\room_things\data\UI\iconSCPButton_CA.paa";
        EGVAR(operatable,expression)[] = {{""}};

        class UserActions
        {
            class Button_f
            {
                displayNameDefault  = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName         = CSTRING(Button_Press);
                priority            = 6;
                position            = "button_f";
                radius              = 1;
                onlyForPlayer       = 0;
                condition           = "!(this getVariable ['SCP_CB_Operetable_InteractHalt', 0])";
                statement           = "[this] call SCP_fnc_buttonExecExpression; [this, 'Press', 'button_f'] call SCP_fnc_buttonSound;";
            };
        };

        class Attributes
		{
            ATTRIBUTES_BUTTON_EXPRESSION
        };
    };

    class SCP_CB_Things_Keypad_CardReader : SCP_CB_Things_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Keypad_CardReader); // Name in editor
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_Keypad_CardReader.jpg);
        model = QPATHTOF(data\Keypad\Keypad_CardReader.p3d); // Path to model
        hiddenSelections[] = {"camo_button"};
        editorSubCategory = "SCP_Keypads";
        icon = "z\RegalisSCP_CB\addons\room_things\data\UI\iconSCPButton_CA.paa";

        class Attributes
		{
            ATTRIBUTES_BUTTON_EXPRESSION
            ATTRIBUTES_CARDREADER_REQUIRED_CLEARANCE_LEVEL
        };
        
        //See config.cpp for addAction of this object.
    };

    class SCP_CB_Things_Keypad_Code : SCP_CB_Things_Keypad_Button
    {
        displayName = CSTRING(Keypad_Code); // Name in editor
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_Keypad_Code.jpg);
        model = QPATHTOF(data\Keypad\Keypad_Code.p3d); // Path to model
        hiddenSelections[] = {"camo_button"};
        
        class UserActions
        {
            class Button_f
            {
                displayNameDefault  = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName         = CSTRING(Button_Press);
                priority            = 6;
                position            = "button_f";
                radius              = 1;
                onlyForPlayer       = 0;
                condition           = "true";
                statement           = "[this, 'Press', 'button_f'] call SCP_fnc_buttonSound";
            };
        };
    };

    class SCP_CB_Things_Keypad_Scanner : SCP_CB_Things_Keypad_Button
    {
        displayName = CSTRING(Keypad_Scanner); // Name in editor
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_Keypad_Scanner.jpg);
        model = QPATHTOF(data\Keypad\Keypad_Scanner.p3d); // Path to model
        hiddenSelections[] = {"camo_button"};
        
        class UserActions
        {
            class Button_f
            {
                displayNameDefault  = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName         = CSTRING(Button_Press);
                priority            = 6;
                position            = "button_f";
                radius              = 1;
                onlyForPlayer       = 0;
                condition           = "true";
                statement           = "[this, 'Press', 'button_f'] call SCP_fnc_buttonSound";
            };
        };
    };

    //********//
    // Props //
    //*******//

    class SCP_CB_Things_FileCabinet : SCP_CB_Things_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(FileCabinet);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_FileCabinet.jpg);
        model = QPATHTOF(data\Furniture\Cabinet_a.p3d);
        hiddenSelections[] = {"camo_cabinet"};
        hiddenSelectionsTextures[] = {QPATHTOEF(textures,cabinet\cabinet_a_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\furniture\cabinet_a.rvmat)};
        editorSubCategory = "SCP_Furnitures";
        icon = "iconObject_1x2";
    };

    class SCP_CB_Things_MetalShelf : SCP_CB_Things_FileCabinet
    {
        displayName = CSTRING(MetalShelf);
        //editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_FileCabinet.jpg);
        model = QPATHTOF(data\Furniture\MetalShelf.p3d);
        hiddenSelections[] = {"camo_dirtymetal", "camo_metal"};
        hiddenSelectionsTextures[] = {QPATHTOEF(textures,dirtymetal.paa), QPATHTOEF(textures,metal.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\furniture\metalshelf_dirtymetal.rvmat), QPATHTOF(data\furniture\metalshelf_metal.rvmat)};
        icon = "iconObject_1x2";
    };

    class SCP_CB_Things_MetalTable : SCP_CB_Things_FileCabinet
    {
        displayName = CSTRING(MetalTable);
        //editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_FileCabinet.jpg);
        model = QPATHTOF(data\Furniture\MetalTable.p3d);
        hiddenSelections[] = {"camo_dirtymetal", "camo_metal"};
        hiddenSelectionsTextures[] = {QPATHTOEF(textures,dirtymetal.paa), QPATHTOEF(textures,metal.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\furniture\metaltable_dirtymetal.rvmat), QPATHTOF(data\furniture\metaltable_metal.rvmat)};
        icon = "iconObject_2x1";
    };

    class SCP_CB_Things_MetalTable_Divider : SCP_CB_Things_FileCabinet
    {
        displayName = CSTRING(MetalTable_Divider);
        //editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_FileCabinet.jpg);
        model = QPATHTOF(data\Furniture\MetalTable_Divider.p3d);
        hiddenSelections[] = {"camo_dirtymetal", "camo_metal"};
        hiddenSelectionsTextures[] = {QPATHTOEF(textures,dirtymetal.paa), QPATHTOEF(textures,metal.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\furniture\metaltable_divider_dirtymetal.rvmat), QPATHTOF(data\furniture\metaltable_divider_metal.rvmat)};
        icon = "iconObject_1x1";
    };

    class SCP_CB_Things_AcousticScreen : SCP_CB_Things_FileCabinet
    {
        displayName = CSTRING(AcousticScreen);
        //editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_FileCabinet.jpg);
        model = QPATHTOF(data\Furniture\AcousticScreen.p3d);
        hiddenSelections[] = {"camo_dirtymetal", "camo_metal", "camo_glass"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures,dirtymetal.paa),
            QPATHTOEF(textures,metal.paa),
            QPATHTOEF(textures,glass_CO.paa)
        };
        hiddenSelectionsMaterials[] = {
            QPATHTOF(data\furniture\AcousticScreen_dirtymetal.rvmat),
            QPATHTOF(data\furniture\AcousticScreen_metal.rvmat),
            QPATHTOF(data\furniture\AcousticScreen_glass.rvmat)
        };
        icon = "iconObject_1x2";
    };

    class SCP_CB_Things_OfficeSeat : SCP_CB_Things_FileCabinet
    {
        displayName = CSTRING(OfficeSeat);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_OfficeSeat.jpg);
        model = QPATHTOF(data\Furniture\Officeseat_a.p3d);
        hiddenSelections[] = {"camo_officeseat"};
        hiddenSelectionsTextures[] = {QPATHTOEF(textures,officeseat\officeseat_a_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\furniture\officeseat_a.rvmat)};
        icon = "iconObject_1x1";
    };

    class SCP_CB_Things_ControlPanel_Box : SCP_CB_Things_FileCabinet
    {
        displayName = CSTRING(ControlPanel_Box);
        //editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_OfficeSeat.jpg);
        model = QPATHTOF(data\ControlPanel\ControlPanel_Box.p3d);
        icon = "iconObject_1x1";
    };

    class SCP_CB_Things_ControlPanel_Desk : SCP_CB_Things_ControlPanel_Box
    {
        displayName = CSTRING(ControlPanel_Desk);
        //editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_OfficeSeat.jpg);
        model = QPATHTOF(data\ControlPanel\ControlPanel_Desk.p3d);
    };

    class SCP_CB_Things_ControlPanel_Rack : SCP_CB_Things_ControlPanel_Box
    {
        displayName = CSTRING(ControlPanel_Rack);
        //editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_OfficeSeat.jpg);
        model = QPATHTOF(data\ControlPanel\ControlPanel_Rack.p3d);
        icon = "iconObject_1x2";
    };

    class SCP_CB_Things_SCPsign : SCP_CB_Things_FileCabinet
    {
        displayName = CSTRING(SCPsign);
        //editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_FileCabinet.jpg);
        model = QPATHTOF(data\Furniture\SCPsign.p3d);
        hiddenSelections[] = {"camo_metal", "camo_scplogo"};
        hiddenSelectionsTextures[] = {QPATHTOEF(textures,metal.paa), QPATHTOEF(textures,scplogo.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\furniture\scpsign_metal.rvmat), QPATHTOF(data\furniture\scpsign_scplogo.rvmat)};
        icon = "iconObject_2x1";
    };

    class SCP_CB_Things_Toilet : SCP_CB_Things_FileCabinet
    {
        displayName = CSTRING(Toilet);
        //editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_FileCabinet.jpg);
        model = QPATHTOF(data\Furniture\Toilet.p3d);
        hiddenSelections[] = {"camo_metal", "camo_dirtymetal"};
        hiddenSelectionsTextures[] = {QPATHTOEF(textures,metal.paa), QPATHTOEF(textures,dirtymetal.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\furniture\Toilet_metal.rvmat), QPATHTOF(data\furniture\Toilet_dirtymetal.rvmat)};
        icon = "iconObject_1x2";
    };

    class SCP_CB_Things_Toilet_Open : SCP_CB_Things_FileCabinet
    {
        displayName = CSTRING(Toilet_Open);
        //editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_FileCabinet.jpg);
        model = QPATHTOF(data\Furniture\Toilet_Open.p3d);
        hiddenSelections[] = {"camo_metal", "camo_dirtymetal"};
        hiddenSelectionsTextures[] = {QPATHTOEF(textures,metal.paa), QPATHTOEF(textures,dirtymetal.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\furniture\Toilet_metal.rvmat), QPATHTOF(data\furniture\Toilet_dirtymetal.rvmat)};
        icon = "iconObject_1x2";
    };

    class SCP_CB_Things_Crate1 : ReammoBox_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Crate1); // Name in editor
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_Crate1.jpg);
        model = QPATHTOF(data\Crate\Crate1.p3d); // Path to model
        hiddenSelections[] = {"camo_crate"};
        editorCategory = "SCP_Facility";
        editorSubCategory = "SCP_Crates";
        icon = "iconCrate";
        maximumLoad = 800;
        class TransportMagazines {};
        class TransportWeapons {};
		class TransportItems {};
    };

    class SCP_CB_Things_Crate2 : SCP_CB_Things_Crate1
    {
        displayName = CSTRING(Crate2); // Name in editor
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_Crate2.jpg);
        model = QPATHTOF(data\Crate\Crate2.p3d); // Path to model
        hiddenSelections[] = {"camo_crate"};
        maximumLoad = 600;
    };

    class SCP_CB_Things_Crate3 : SCP_CB_Things_Crate1
    {
        displayName = CSTRING(Crate3); // Name in editor
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Things_Crate3.jpg);
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
        icon = "iconObject_1x1";
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