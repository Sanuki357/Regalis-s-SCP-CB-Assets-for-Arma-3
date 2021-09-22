class CfgVehicles
{
    class Land_ToiletBox_F; 
    class SCPThing_base: Land_ToiletBox_F
    {
        scope = 0;
        scopeCurator = 0;
        armor = 999999;
        armorStructural = 999;
        model = "\A3\Weapons_F\empty.p3d";
        destrType="DestructNo";
        simulation = House;
        
        editorCategory = "SCP_Facility";
        mapSize = 20.27;
    };

//*******//
// Doors //
//*******//

    class SCPThing_Door_1_Static : SCPThing_base
    {
        scope= 2;
        curatorScope = 2;
        displayName = "Door (LCZ)(Static)"; // Name in editor
        model = QPATHTOF(data\StaticDoor1.p3d); // Path to model
        editorSubCategory   = "SCP_Doors";
    };

    class SCPThing_Door_1 : SCPThing_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = "Door (LCZ)"; // Name in editor
        model = QPATHTOF(data\Door1.p3d); // Path to model
        editorSubCategory = "SCP_Doors";
        
        class UserActions
        {
            class Close_door_F
            {
                displayName = "Close Door";
                displayNameDefault = "<img image='z\RegalisSCP_CB\textures\handsymbol.paa' size='2.5' />";
                position = "button_f";
                radius = 1;
                onlyForPlayer = 0;
                condition = "this animationSourcePhase ""open_door"" == 1";
                statement = "this animateSource [""open_door"",0]; _array = ["QPATHTOF(data\Door1\DoorClose1.ogg)", "QPATHTOF(data\Door1\DoorClose2.ogg)", "QPATHTOF(data\Door1\DoorClose3.ogg)"]; _random = _array select floor random count _array; playSound3D [_random, this, false, getPosASL this, 5]; playSound3D ["QPATHTOF(data\Door1\Button.ogg)", this, false, this modelToWorld [-1.06957,0.30788,1.26843], 5]";
            };

            class Open_door_F: Close_door_F
            {
                displayName ="Open Door";
                condition = "this animationSourcePhase ""open_door"" == 0";
                statement = "this animateSource [""open_door"",1]; _array = ["QPATHTOF(data\Door1\DoorOpen1.ogg)", "QPATHTOF(data\Door1\DoorOpen2.ogg)", "QPATHTOF(data\Door1\DoorOpen3.ogg)"]; _random = _array select floor random count _array; playSound3D [_random, this, false, getPosASL this, 5]; playSound3D ["QPATHTOF(data\Door1\Button.ogg)", this, false, this modelToWorld [-1.06957,0.30788,1.26843], 5]";
            };
            
            class Close_door_B
            {
                displayName = "Close Door";
                displayNameDefault = "<img image='z\RegalisSCP_CB\textures\handsymbol.paa' size='2.5' />";
                position = "button_b";
                radius = 1;
                onlyForPlayer = 0;
                condition = "this animationSourcePhase ""open_door"" == 1";
                statement = "this animateSource [""open_door"",0]; _array = ["QPATHTOF(data\Door1\DoorClose1.ogg)", "QPATHTOF(data\Door1\DoorClose2.ogg)", "QPATHTOF(data\Door1\DoorClose3.ogg)"]; _random = _array select floor random count _array; playSound3D [_random, this, false, getPosASL this, 5]; playSound3D ["QPATHTOF(data\Door1\Button.ogg)", this, false, this modelToWorld [1.06957,-0.30788,1.26843], 5]";
            };
            
            class Open_door_B: Close_door_B
            {
                displayName ="Open Door";
                condition = "this animationSourcePhase ""open_door"" == 0";
                statement = "this animateSource [""open_door"",1]; _array = ["QPATHTOF(data\Door1\DoorOpen1.ogg)", "QPATHTOF(data\Door1\DoorOpen2.ogg)", "QPATHTOF(data\Door1\DoorOpen3.ogg)"]; _random = _array select floor random count _array; playSound3D [_random, this, false, getPosASL this, 5]; playSound3D ["QPATHTOF(data\Door1\Button.ogg)", this, false, this modelToWorld [1.06957,-0.30788,1.26843], 5]";
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

};