class CfgVehicles
{
    class Land_ToiletBox_F; 
    class SCP_CB_LCZ_base: Land_ToiletBox_F
    {
        scope = 0;
        scopeCurator = 0;
        armor = 999999;
        armorStructural = 999;
        model = "\A3\Weapons_F\empty.p3d";
        destrType="DestructNo";
        simulation = House;
        editorCategory = "SCP_Facility";
        editorSubcategory = "SCP_LCZ";
        mapSize = 20.27;
    };
//******************//
// Hallways & Rooms //
//******************//
    class SCP_CB_LCZ_Hallway_Two_1 : SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Hallway_Two_1);
        model = QPATHTOF(data\Hallway_Two_1\Hallway_Two_1.p3d); // Path to model
    };
    class SCP_CB_LCZ_Hallway_Two_2 : SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        model = QPATHTOF(data\Hallway_Two_2\Hallway_Two_2.p3d);
        displayName = CSTRING(Hallway_Two_2);
    };
    class SCP_CB_LCZ_Hallway_Two_3 : SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Hallway_Two_3);
        model = QPATHTOF(data\Hallway_Two_3\Hallway_Two_3.p3d);
        
        class AnimationSources
		{
			class Fan_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};
        };
    };
    class SCP_CB_LCZ_Hallway_Two_4 : SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Hallway_Two_4);
        model = QPATHTOF(data\Hallway_Two_4\Hallway_Two_4.p3d);
    };
    class SCP_CB_LCZ_Hallway_Two_5 : SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Hallway_Two_5);
        model = QPATHTOF(data\Hallway_Two_5\Hallway_Two_5.p3d);
    };
    class SCP_CB_LCZ_Hallway_Three_1 : SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Hallway_Three_1);
        model = QPATHTOF(data\Hallway_Three_1\Hallway_Three_1.p3d);
        hiddenSelections[] = {"camo_floor", "camo_ceiling", "camo_wall"};
    };
    class SCP_CB_LCZ_Hallway_Three_2 : SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Hallway_Three_2);
        model = QPATHTOF(data\Hallway_Three_2\Hallway_Three_2.p3d);
    };
    class SCP_CB_LCZ_Hallway_Three_3 : SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Hallway_Three_3);
        model = QPATHTOF(data\Hallway_Three_3\Hallway_Three_3.p3d);
    };
    class SCP_CB_LCZ_Hallway_Corner_1 : SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Hallway_Corner_1);
        model = QPATHTOF(data\Hallway_Corner_1\Hallway_Corner_1.p3d);
        hiddenSelections[] = {"camo_floor", "camo_ceiling", "camo_wall", "camo_door"};
    };
    class SCP_CB_LCZ_Hallway_Corner_2 : SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Hallway_Corner_2);
        model = QPATHTOF(data\Hallway_Corner_2\Hallway_Corner_2.p3d);
        hiddenSelections[] = {"camo_floor", "camo_ceiling", "camo_wall", "camo_door"};
    };
    class SCP_CB_LCZ_Hallway_Corner_Elevator : SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Hallway_Corner_Elevator);
        model = QPATHTOF(data\Hallway_Corner_Elevator\Hallway_Corner_Elevator.p3d);
        //hiddenSelections[] = {"camo_floor", "camo_ceiling", "camo_wall", "camo_door"};
    };
    class SCP_CB_LCZ_Hallway_Four_1 : SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Hallway_Four_1);
        model = QPATHTOF(data\Hallway_Four_1\Hallway_Four_1.p3d);
        hiddenSelections[] = {"camo_floor", "camo_ceiling", "camo_wall"};
    };
    class SCP_CB_LCZ_Hallway_Four_2 : SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Hallway_Four_2);
        model = QPATHTOF(data\Hallway_Four_2\Hallway_Four_2.p3d);
        hiddenSelections[] = {"camo_floor", "camo_ceiling", "camo_wall", "camo_door", "camo_metal3"};
    };
    class SCP_CB_LCZ_Hallway_Four_3 : SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Hallway_Four_3);
        model = QPATHTOF(data\Hallway_Four_3\Hallway_Four_3.p3d);
        hiddenSelections[] = {"camo_floor", "camo_ceiling1", "camo_ceiling2", "camo_wall", "camo_grey", "camo_slh_miscsigns", "camo_miscsigns", "camo_miscsigns3", "camo_miscsigns4 "};
        numberOfDoors = 1;
		numberOfWindows = 3;
        class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
				displayName = $STR_DN_OUT_O_DOOR;
                //displayName = "Open Door";
				position = "Door_1_trigger";
				radius = 1;
				aiMaxRange = 5.25;
				onlyForPlayer = 0;
				condition = "this animationSourcePhase 'Door_1_source' < 0.5";
				statement = "([this, 'Door_1_rot', 'Door_Handle_1_rot_1', 'Door_Handle_1_rot_2'] call BIS_fnc_DoorOpen)";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayNameDefault = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
				displayName = "$STR_DN_OUT_C_DOOR";
                //displayName = "Clsoe Door";
				condition = "this animationSourcePhase 'Door_1_source' >= 0.5";
				statement = "([this, 'Door_1_rot', 'Door_Handle_1_rot_1', 'Door_Handle_1_rot_2'] call BIS_fnc_DoorClose)";
			};
        };
        class HitPoints
		{
            class Glass_1_hitpoint
            {
                armor = 0.001;
                material = -1;
                name = "Glass_1";
                visual = "Glass_1_hide";
                passThrough = 0;
                radius = 0.4;
                convexComponent = "Glass_1_hide";
                class DestructionEffects
                {
                    class BrokenGlass1
                    {
                        simulation = "particles";
                        type = "BrokenGlass1N_0900_0950";
                        position = "Glass_1_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2
                    {
                        simulation = "particles";
                        type = "BrokenGlass2N_0900_0950";
                        position = "Glass_1_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3
                    {
                        simulation = "particles";
                        type = "BrokenGlass3N_0900_0950";
                        position = "Glass_1_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4
                    {
                        simulation = "particles";
                        type = "BrokenGlass4N_0900_0950";
                        position = "Glass_1_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5
                    {
                        simulation = "particles";
                        type = "BrokenGlass5N_0900_0950";
                        position = "Glass_1_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass6
                    {
                        simulation = "particles";
                        type = "BrokenGlass6N_0900_0950";
                        position = "Glass_1_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass7
                    {
                        simulation = "particles";
                        type = "BrokenGlass7N_0900_0950";
                        position = "Glass_1_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S
                    {
                        simulation = "particles";
                        type = "BrokenGlass1S_0900_0950";
                        position = "Glass_1_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S
                    {
                        simulation = "particles";
                        type = "BrokenGlass2S_0900_0950";
                        position = "Glass_1_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S
                    {
                        simulation = "particles";
                        type = "BrokenGlass3S_0900_0950";
                        position = "Glass_1_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S
                    {
                        simulation = "particles";
                        type = "BrokenGlass4S_0900_0950";
                        position = "Glass_1_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S
                    {
                        simulation = "particles";
                        type = "BrokenGlass5S_0900_0950";
                        position = "Glass_1_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass6S
                    {
                        simulation = "particles";
                        type = "BrokenGlass6S_0900_0950";
                        position = "Glass_1_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass7S
                    {
                        simulation = "particles";
                        type = "BrokenGlass7S_0900_0950";
                        position = "Glass_1_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                };
            };
            class Glass_2_hitpoint
            {
                armor = 0.001;
                material = -1;
                name = "Glass_2";
                visual = "Glass_2_hide";
                passThrough = 0;
                radius = 0.4;
                convexComponent = "Glass_2_hide";
                class DestructionEffects
                {
                    class BrokenGlass1
                    {
                        simulation = "particles";
                        type = "BrokenGlass1N_0900_0950";
                        position = "Glass_2_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2
                    {
                        simulation = "particles";
                        type = "BrokenGlass2N_0900_0950";
                        position = "Glass_2_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3
                    {
                        simulation = "particles";
                        type = "BrokenGlass3N_0900_0950";
                        position = "Glass_2_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4
                    {
                        simulation = "particles";
                        type = "BrokenGlass4N_0900_0950";
                        position = "Glass_2_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5
                    {
                        simulation = "particles";
                        type = "BrokenGlass5N_0900_0950";
                        position = "Glass_2_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass6
                    {
                        simulation = "particles";
                        type = "BrokenGlass6N_0900_0950";
                        position = "Glass_2_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass7
                    {
                        simulation = "particles";
                        type = "BrokenGlass7N_0900_0950";
                        position = "Glass_2_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S
                    {
                        simulation = "particles";
                        type = "BrokenGlass1S_0900_0950";
                        position = "Glass_2_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S
                    {
                        simulation = "particles";
                        type = "BrokenGlass2S_0900_0950";
                        position = "Glass_2_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S
                    {
                        simulation = "particles";
                        type = "BrokenGlass3S_0900_0950";
                        position = "Glass_2_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S
                    {
                        simulation = "particles";
                        type = "BrokenGlass4S_0900_0950";
                        position = "Glass_2_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S
                    {
                        simulation = "particles";
                        type = "BrokenGlass5S_0900_0950";
                        position = "Glass_2_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass6S
                    {
                        simulation = "particles";
                        type = "BrokenGlass6S_0900_0950";
                        position = "Glass_2_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass7S
                    {
                        simulation = "particles";
                        type = "BrokenGlass7S_0900_0950";
                        position = "Glass_2_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                };
            };
            class Glass_3_hitpoint
            {
                armor = 0.001;
                material = -1;
                name = "Glass_3";
                visual = "Glass_3_hide";
                passThrough = 0;
                radius = 0.4;
                convexComponent = "Glass_3_hide";
                class DestructionEffects
                {
                    class BrokenGlass1
                    {
                        simulation = "particles";
                        type = "BrokenGlass1N_0900_0950";
                        position = "Glass_3_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2
                    {
                        simulation = "particles";
                        type = "BrokenGlass2N_0900_0950";
                        position = "Glass_3_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3
                    {
                        simulation = "particles";
                        type = "BrokenGlass3N_0900_0950";
                        position = "Glass_3_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4
                    {
                        simulation = "particles";
                        type = "BrokenGlass4N_0900_0950";
                        position = "Glass_3_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5
                    {
                        simulation = "particles";
                        type = "BrokenGlass5N_0900_0950";
                        position = "Glass_3_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass6
                    {
                        simulation = "particles";
                        type = "BrokenGlass6N_0900_0950";
                        position = "Glass_3_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass7
                    {
                        simulation = "particles";
                        type = "BrokenGlass7N_0900_0950";
                        position = "Glass_3_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S
                    {
                        simulation = "particles";
                        type = "BrokenGlass1S_0900_0950";
                        position = "Glass_3_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S
                    {
                        simulation = "particles";
                        type = "BrokenGlass2S_0900_0950";
                        position = "Glass_3_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S
                    {
                        simulation = "particles";
                        type = "BrokenGlass3S_0900_0950";
                        position = "Glass_3_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S
                    {
                        simulation = "particles";
                        type = "BrokenGlass4S_0900_0950";
                        position = "Glass_3_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S
                    {
                        simulation = "particles";
                        type = "BrokenGlass5S_0900_0950";
                        position = "Glass_3_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass6S
                    {
                        simulation = "particles";
                        type = "BrokenGlass6S_0900_0950";
                        position = "Glass_3_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass7S
                    {
                        simulation = "particles";
                        type = "BrokenGlass7S_0900_0950";
                        position = "Glass_3_effects";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                };
            };
        };
        class AnimationSources
		{
			class Door_1_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "GenericDoorsSound";
				soundPosition = "Door_1_trigger";
			};
            // Animation sources for windows
			class Glass_1_source
			{
				source = "Hit"; // "Hit" = value of this source is the health of an entity
				hitpoint = "Glass_1_hitpoint"; // Specifies health of what is the control value of this animation; "Glass_1_hitpoint" being the class defined in class Hitpoints
				raw = 1;
			};
			class Glass_2_source: Glass_1_source
			{
				hitpoint = "Glass_2_hitpoint";
			};
			class Glass_3_source: Glass_1_source
			{
				hitpoint = "Glass_3_hitpoint";
			};
        };
    };
    class SCP_CB_LCZ_Hallway_Tesla : SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Hallway_Tesla);
        model = QPATHTOF(data\Hallway_Tesla\Hallway_Tesla.p3d);
        hiddenSelections[] = {"camo_ceiling", "camo_floor", "camo_wall", "camo_toroid", "camo_warning_sign"};
    };
	class SCP_CB_LCZ_Room_Endroom : SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Room_Endroom);
        model = QPATHTOF(data\Room_Endroom\Room_Endroom.p3d);
    };
	class SCP_CB_LCZ_Room_Storeroom : SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Room_Storeroom);
        model = QPATHTOF(data\Room_Storeroom\Room_Storeroom.p3d);
    };
	class SCP_CB_LCZ_Room_Archive: SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Room_Archive);
        model = QPATHTOF(data\Room_Archive\Room_Archive.p3d);
        hiddenSelections[] = {"camo_floor", "camo_wall"};
    };

//**********************//
// Containment Chambers //
//**********************//

	class SCP_CB_LCZ_Room_372: SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Room_372);
        model = QPATHTOF(data\Room_372\Room_372.p3d);
        hiddenSelections[] = {"camo_ceiling", "camo_floor", "camo_wall"};
    };
	class SCP_CB_LCZ_Room_1162: SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Room_1162);
        model = QPATHTOF(data\Room_1162\Room_1162.p3d);
		class UserActions
		{
			class SCP1162
			{
				displayNameDefault = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
				displayName = $STR_DN_OUT_O_DOOR;
				position = "scp_1162";
				radius = 2;
				aiMaxRange = 2;
				onlyForPlayer = 0;
				condition = "alive this";
				statement = (this execVM ("z\regalisscp_cb\addons\room_lcz\data\Room_1162\1162_script.sqf"));
			};
		};
	};
};