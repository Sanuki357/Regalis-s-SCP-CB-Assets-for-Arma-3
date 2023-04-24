class CfgVehicles
{
    class House_F;
    class SCP_CB_Things_base: House_F
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

    class SCP_CB_Things_Door1_Button : SCP_CB_Things_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Door1_Button); // Name in editor
        model = QPATHTOF(data\Door1.p3d); // Path to model
        hiddenSelections[] = {"camo_door", "camo_button"};
        editorSubCategory = "SCP_Doors";

        class UserActions
        {
            class Close_door_F
            {
                displayNameDefault = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName = CSTRING(Button_Press);
                position = "button_f";
                radius = 1;
                onlyForPlayer = 0;
                condition = "this animationSourcePhase ""open_door"" == 1";
                statement = "[this, ""Door1 Close"", ""open_door"", 2.5] execVM "QPATHTOF(functions\fnc_doorOperate.sqf)"; [this, ""Press"", 0.5, ""button_f""] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
            };

            class Open_door_F: Close_door_F
            {
                condition = "this animationSourcePhase ""open_door"" == 0";
                statement = "[this, ""Door1 Open"", ""open_door"", 2.5] execVM "QPATHTOF(functions\fnc_doorOperate.sqf)"; [this, ""Press"", 0.5, ""button_f""] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
            };

            class Close_door_B
            {
                displayNameDefault = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName = CSTRING(Button_Press);
                position = "button_b";
                radius = 1;
                onlyForPlayer = 0;
                condition = "this animationSourcePhase ""open_door"" == 1";
                statement = "[this, ""Door1 Close"", ""open_door"", 2.5] execVM "QPATHTOF(functions\fnc_doorOperate.sqf)"; [this, ""Press"", 0.5, ""button_b""] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
            };

            class Open_door_B: Close_door_B
            {
                condition = "this animationSourcePhase ""open_door"" == 0";
                statement = "[this, ""Door1 Open"", ""open_door"", 2.5] execVM "QPATHTOF(functions\fnc_doorOperate.sqf)"; [this, ""Press"", 0.5, ""button_b""] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
            };
        };

        class AnimationSources
        {
            class open_door
            {
                source = "user";
                animPeriod = 1.2;
                initPhase = 0;
            };
        };
    };

    class SCP_CB_Things_Door1_Button_Error : SCP_CB_Things_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Door1_Button_Error); // Name in editor
        model = QPATHTOF(data\Door1.p3d); // Path to model
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
                condition = "this animationSourcePhase ""open_door"" == 0";
                statement = "[this, ""Press (Denied)"", 0.5, ""button_f""] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
            };

            class Error_door_B: Error_door_F
            {
                position = "button_b";
                statement = "[this, ""Press (Denied)"", 0.5, ""button_b""] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
            };
        };
    };

    class SCP_CB_Things_Door1_Button_NoRespose : SCP_CB_Things_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Door1_Button_NoResponse); // Name in editor
        model = QPATHTOF(data\Door1.p3d); // Path to model
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
                condition = "this animationSourcePhase ""open_door"" == 0";
                statement = "[this, ""Press"", 0.5, ""button_f""] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
            };

            class NoResponse_door_B: NoResponse_door_F
            {
                position = "button_b";
                statement = "[this, ""Press"", 0.5, ""button_b""] execVM "QPATHTOF(functions\fnc_buttonSound.sqf)"";
            };
        };
    };
};
