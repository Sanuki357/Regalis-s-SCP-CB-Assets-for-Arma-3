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
        scopeCurator = 2;
        displayName = CSTRING(Hallway_Two_1);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Hallway_Two_1.jpg);
        model = QPATHTOF(data\Hallway_Two_1\Hallway_Two_1.p3d); // Path to model
        icon = "iconObject_1x3";

        class Hitpoints {};
		class AnimationSources {};

        aggregateReflectors[] =
		{
			{"Light_1", "Light_2"}
		};

        class Reflectors
		{
			class Light_1
			{
				color[]				= {1.0,1.0,1.0};
				ambient[]			= {70,75,100};
				intensity			= 2;
				size				= 10;					/// size of the light point seen from distance
				innerAngle			= 100;					/// angle of full light
				outerAngle			= 165;					/// angle of some light
				coneFadeCoef		= 4;					/// attenuation of light between the above angles

				position			= "Light_1_pos";		/// memory point for start of the light and flare
				direction			= "Light_1_dir";		/// memory point for the light direction
				hitpoint			= "Light_1_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection			= "Light_1_hide";		/// selection for artificial glow around the bulb, not much used any more

				useFlare			= true;
				flareSize			= 1;
				flareMaxDistance	= 130;

				class Attenuation
				{
					start			= 0;
					constant		= 0;
					linear			= 1;
					quadratic		= 1;

					hardLimitStart	= 50;
					hardLimitEnd	= 65;
				};
			};
			class Light_2: Light_1
			{
				position			= "Light_2_pos";
				direction			= "Light_2_dir";
				hitpoint			= "Light_2_hitpoint";
				selection			= "Light_2_hide";
			};
        };
    };
    class SCP_CB_LCZ_Hallway_Two_2 : SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Hallway_Two_2.jpg);
        model = QPATHTOF(data\Hallway_Two_2\Hallway_Two_2.p3d);
        displayName = CSTRING(Hallway_Two_2);
        icon = "iconObject_1x3";
    };
    class SCP_CB_LCZ_Hallway_Two_3 : SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Hallway_Two_3);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Hallway_Two_3.jpg);
        model = QPATHTOF(data\Hallway_Two_3\Hallway_Two_3.p3d);
        icon = "iconObject_1x3";

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
        scopeCurator = 2;
        displayName = CSTRING(Hallway_Two_4);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Hallway_Two_4.jpg);
        model = QPATHTOF(data\Hallway_Two_4\Hallway_Two_4.p3d);
        icon = "iconObject_1x3";
    };
    class SCP_CB_LCZ_Hallway_Two_5 : SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Hallway_Two_5);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Hallway_Two_5.jpg);
        model = QPATHTOF(data\Hallway_Two_5\Hallway_Two_5.p3d);
        icon = "iconObject_1x3";
    };
    class SCP_CB_LCZ_Hallway_Two_Toilet : SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Hallway_Two_Toilet);
        //editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Hallway_Two_Toilet.jpg);
        model = QPATHTOF(data\Hallway_Two_Toilet\Hallway_Two_Toilet.p3d);
        hiddenSelections[] = {"camo_miscsign", "camo_concretefloor", "camo_tilefloor"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures,miscsigns.paa),
            QPATHTOEF(textures,concretefloor.paa),
            QPATHTOEF(textures,tilefloor.paa)
        };
        hiddenSelectionsMaterials[] = {
            QPATHTOF(data\Hallway_Two_Toilet\miscsigns.rvmat),
            QPATHTOF(data\Hallway_Two_Toilet\concretefloor.rvmat),
            QPATHTOF(data\Hallway_Two_Toilet\tilefloor.rvmat)
        };
        icon = "iconObject_1x3";
    };
    class SCP_CB_LCZ_Hallway_Three_1 : SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Hallway_Three_1);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Hallway_Three_1.jpg);
        model = QPATHTOF(data\Hallway_Three_1\Hallway_Three_1.p3d);
        hiddenSelections[] = {"camo_floor", "camo_ceiling", "camo_wall"};
        icon = "iconObject_2x1";
    };
    class SCP_CB_LCZ_Hallway_Three_2 : SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Hallway_Three_2);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Hallway_Three_2.jpg);
        model = QPATHTOF(data\Hallway_Three_2\Hallway_Three_2.p3d);
        icon = "iconObject_2x1";
    };
    class SCP_CB_LCZ_Hallway_Three_3 : SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Hallway_Three_3);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Hallway_Three_3.jpg);
        model = QPATHTOF(data\Hallway_Three_3\Hallway_Three_3.p3d);
        icon = "iconObject_2x1";
    };
    class SCP_CB_LCZ_Hallway_Corner_1 : SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Hallway_Corner_1);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Hallway_Corner_1.jpg);
        model = QPATHTOF(data\Hallway_Corner_1\Hallway_Corner_1.p3d);
        hiddenSelections[] = {"camo_floor", "camo_ceiling", "camo_wall", "camo_door"};
        icon = "iconObject_1x2";
    };
    class SCP_CB_LCZ_Hallway_Corner_2 : SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Hallway_Corner_2);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Hallway_Corner_2.jpg);
        model = QPATHTOF(data\Hallway_Corner_2\Hallway_Corner_2.p3d);
        hiddenSelections[] = {"camo_floor", "camo_ceiling", "camo_wall", "camo_door"};
        icon = "iconObject_1x1";
    };
    class SCP_CB_LCZ_Hallway_Corner_Elevator : SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Hallway_Corner_Elevator);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Hallway_Corner_Elevator.jpg);
        model = QPATHTOF(data\Hallway_Corner_Elevator\Hallway_Corner_Elevator.p3d);
        //hiddenSelections[] = {"camo_floor", "camo_ceiling", "camo_wall", "camo_door"};
        icon = "iconObject_1x1";
    };
    class SCP_CB_LCZ_Hallway_Four_1 : SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Hallway_Four_1);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Hallway_Four_1.jpg);
        model = QPATHTOF(data\Hallway_Four_1\Hallway_Four_1.p3d);
        hiddenSelections[] = {"camo_floor", "camo_ceiling", "camo_wall"};
        icon = "iconObject_1x1";
    };
    class SCP_CB_LCZ_Hallway_Four_2 : SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Hallway_Four_2);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Hallway_Four_2.jpg);
        model = QPATHTOF(data\Hallway_Four_2\Hallway_Four_2.p3d);
        hiddenSelections[] = {"camo_floor", "camo_ceiling", "camo_wall", "camo_door", "camo_metal3"};
        icon = "iconObject_1x1";
    };
    class SCP_CB_LCZ_Hallway_Four_3 : SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Hallway_Four_3);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Hallway_Four_3.jpg);
        model = QPATHTOF(data\Hallway_Four_3\Hallway_Four_3.p3d);
        hiddenSelections[] = {"camo_floor", "camo_ceiling1", "camo_ceiling2", "camo_wall", "camo_grey", "camo_slh_miscsigns", "camo_miscsigns", "camo_miscsigns3", "camo_miscsigns4 "};
        icon = "iconObject_1x1";
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
        scopeCurator = 2;
        displayName = CSTRING(Hallway_Tesla);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Hallway_Tesla.jpg);
        model = QPATHTOF(data\Hallway_Tesla\Hallway_Tesla.p3d);
        hiddenSelections[] = {"camo_ceiling", "camo_floor", "camo_wall", "camo_toroid", "camo_warning_sign"};
        icon = "iconObject_1x3";
    };

	class SCP_CB_LCZ_Room_Endroom : SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Room_Endroom);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Room_Endroom.jpg);
        model = QPATHTOF(data\Room_Endroom\Room_Endroom.p3d);
        icon = "iconObject_1x2";
    };
	class SCP_CB_LCZ_Room_Storeroom : SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Room_Storeroom);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Room_Storeroom.jpg);
        model = QPATHTOF(data\Room_Storeroom\Room_Storeroom.p3d);
        icon = "iconObject_1x1";
    };
	class SCP_CB_LCZ_Room_Archive: SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Room_Archive);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Room_Archive.jpg);
        model = QPATHTOF(data\Room_Archive\Room_Archive.p3d);
        hiddenSelections[] = {"camo_floor", "camo_wall"};
        icon = "iconObject_1x2";
    };
    class SCP_CB_LCZ_Room_IntroOffice: SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Room_IntroOffice);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Room_Archive.jpg);
        model = QPATHTOF(data\Room_IntroOffice\Room_IntroOffice.p3d);
        hiddenSelections[] = {"camo_floor", "camo_ceiling", "camo_white", "camo_wall", "camo_scplogo"};
        icon = "iconObject_1x1";
    };
    class SCP_CB_LCZ_Room_Checkpoint_LtH: SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Room_Checkpoint_LtH);
        //editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Room_Archive.jpg);
        model = QPATHTOF(data\Room_Checkpoint_LtH\Room_Checkpoint_LtH.p3d);
        hiddenSelections[] = {"camo_sign", "camo_concretefloor", "camo_tilefloor"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures,miscsigns.paa),
            QPATHTOEF(textures,concretefloor.paa),
            QPATHTOEF(textures,tilefloor.paa)
        };
        hiddenSelectionsMaterials[] = {
            QPATHTOF(data\Room_Checkpoint_LtH\miscsigns.rvmat),
            QPATHTOF(data\Room_Checkpoint_LtH\concretefloor.rvmat),
            QPATHTOF(data\Room_Checkpoint_LtH\tilefloor.rvmat)
        };
        icon = "iconObject_1x1";
    };

//**********************//
// Containment Chambers //
//**********************//

	class SCP_CB_LCZ_Room_372: SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Room_372);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Room_372.jpg);
        model = QPATHTOF(data\Room_372\Room_372.p3d);
        hiddenSelections[] = {"camo_ceiling", "camo_floor", "camo_wall"};
        icon = "iconObject_1x1";
    };
	class SCP_CB_LCZ_Room_1162: SCP_CB_LCZ_Room_372
    {
        displayName = CSTRING(Room_1162);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Room_1162.jpg);
        model = QPATHTOF(data\Room_1162\Room_1162.p3d);
	};
    class SCP_CB_LCZ_Room_173: SCP_CB_LCZ_Room_372
    {
        displayName = CSTRING(Room_173);
        //editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Room_173.jpg);
        model = QPATHTOF(data\Room_173\Room_173.p3d);
        hiddenSelections[] = {"camo_label173", "camo_scplogo"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures,label173_CO.paa),
            QPATHTOEF(textures,scplogo.paa)
        };
        hiddenSelectionsMaterials[] = {
            QPATHTOF(data\Room_173\label173.rvmat),
            QPATHTOF(data\Room_173\scplogo.rvmat)
        };
	};
    class SCP_CB_LCZ_Room_205: SCP_CB_LCZ_Room_372
    {
        displayName = CSTRING(Room_205);
        //editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Room_173.jpg);
        model = QPATHTOF(data\Room_205\Room_205.p3d);
        hiddenSelections[] = {"camo_label205"};
        hiddenSelectionsTextures[] = {QPATHTOEF(textures,label205_CO.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\Room_205\label205.rvmat)};
	};
//********//
// Pieces //
//********//
    class SCP_CB_LCZ_Piece_WhiteWall: SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Piece_WhiteWall);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Piece_WhiteWall.jpg);
        model = QPATHTOF(data\Piece_WhiteWall\Piece_WhiteWall.p3d);
        hiddenSelections[] = {"camo_wall"};
        hiddenSelectionsTextures[] = {QPATHTOEF(textures,whitewall_CO.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\Piece_WhiteWall\whitewall.rvmat)};
        icon = "iconObject_1x3";
        editorSubcategory = "SCP_LCZ_Pieces";
	};

    class SCP_CB_LCZ_Piece_WhiteWall_Wide: SCP_CB_LCZ_Piece_WhiteWall
    {
        displayName = CSTRING(Piece_WhiteWall_Wide);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Piece_WhiteWall_Wide.jpg);
        model = QPATHTOF(data\Piece_WhiteWall_Wide\Piece_WhiteWall_Wide.p3d);
        hiddenSelectionsMaterials[] = {QPATHTOF(data\Piece_WhiteWall_Wide\whitewall.rvmat)};
        icon = "iconObject_1x2";
	};

    class SCP_CB_LCZ_Piece_WhiteWall_Concave: SCP_CB_LCZ_Piece_WhiteWall
    {
        displayName = CSTRING(Piece_WhiteWall_Concave);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Piece_WhiteWall_Concave.jpg);
        model = QPATHTOF(data\Piece_WhiteWall_Concave\Piece_WhiteWall_Concave.p3d);
        hiddenSelectionsMaterials[] = {QPATHTOF(data\Piece_WhiteWall_Concave\whitewall.rvmat)};
        icon = "iconObject_1x3";
	};

    class SCP_CB_LCZ_Piece_WhiteWall_Floorlight: SCP_CB_LCZ_Piece_WhiteWall
    {
        displayName = CSTRING(Piece_WhiteWall_Floorlight);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Piece_WhiteWall_Floorlight.jpg);
        model = QPATHTOF(data\Piece_WhiteWall_Floorlight\Piece_WhiteWall_Floorlight.p3d);
        hiddenSelectionsMaterials[] = {QPATHTOF(data\Piece_WhiteWall_Floorlight\whitewall.rvmat)};
        icon = "iconObject_1x3";
	};

    class SCP_CB_LCZ_Piece_WhiteWall_Doorway: SCP_CB_LCZ_Piece_WhiteWall
    {
        displayName = CSTRING(Piece_WhiteWall_Doorway);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Piece_WhiteWall_Doorway.jpg);
        model = QPATHTOF(data\Piece_WhiteWall_Doorway\Piece_WhiteWall_Doorway.p3d);
        hiddenSelectionsMaterials[] = {QPATHTOF(data\Piece_WhiteWall_Doorway\whitewall.rvmat)};
        icon = "iconObject_1x3";
	};

    class SCP_CB_LCZ_Piece_WhiteWall_Gateway: SCP_CB_LCZ_Piece_WhiteWall
    {
        displayName = CSTRING(Piece_WhiteWall_Gateway);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Piece_WhiteWall_Gateway.jpg);
        model = QPATHTOF(data\Piece_WhiteWall_Gateway\Piece_WhiteWall_Gateway.p3d);
        hiddenSelectionsMaterials[] = {QPATHTOF(data\Piece_WhiteWall_Gateway\whitewall.rvmat)};
        icon = "iconObject_1x3";
	};

    class SCP_CB_LCZ_Piece_Floor_Concrete: SCP_CB_LCZ_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Piece_Floor_Concrete);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Piece_Floor_Concrete.jpg);
        model = QPATHTOF(data\Piece_Floor\Piece_ConcreteFloor.p3d);
        hiddenSelections[] = {"camo_floor"};
        hiddenSelectionsTextures[] = {QPATHTOEF(textures,concretefloor.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\Piece_Floor\concretefloor.rvmat)};
        icon = "iconObject_1x1";
        editorSubcategory = "SCP_LCZ_Pieces";
	};

    class SCP_CB_LCZ_Piece_Floor_Concrete_Big: SCP_CB_LCZ_Piece_Floor_Concrete
    {
        displayName = CSTRING(Piece_Floor_Concrete_Big);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Piece_Floor_Concrete_Big.jpg);
        model = QPATHTOF(data\Piece_Floor\Piece_ConcreteFloor_Big.p3d);
	};

    class SCP_CB_LCZ_Piece_Floor_Tile: SCP_CB_LCZ_Piece_Floor_Concrete
    {
        displayName = CSTRING(Piece_Floor_Tile);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Piece_Floor_Tile.jpg);
        model = QPATHTOF(data\Piece_Floor\Piece_TileFloor.p3d);
        hiddenSelectionsTextures[] = {QPATHTOEF(textures,tilefloor.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\Piece_Floor\tilefloor.rvmat)};
	};

    class SCP_CB_LCZ_Piece_Floor_Tile_Big: SCP_CB_LCZ_Piece_Floor_Tile
    {
        displayName = CSTRING(Piece_Floor_Tile_Big);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Piece_Floor_Tile_Big.jpg);
        model = QPATHTOF(data\Piece_Floor\Piece_TileFloor_Big.p3d);
	};

    class SCP_CB_LCZ_Piece_Staircase_Tile: SCP_CB_LCZ_Piece_Floor_Tile
    {
        displayName = CSTRING(Piece_Staircase_Tile);
        //editorPreview = QPATHTOF(EditorPreviews\SCP_CB_LCZ_Piece_Staircase_Tile.jpg);
        model = QPATHTOF(data\Piece_Stairs\Piece_TileStaircase.p3d);
        hiddenSelections[] = {"camo_dirtymetal", "camo_metalpanels2", "camo_tilefloor", "camo_whitewall"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(textures,dirtymetal.paa),
            QPATHTOEF(textures,metalpanels2.paa),
            QPATHTOEF(textures,tilefloor.paa),
            QPATHTOEF(textures,whitewall.paa)
        };
        hiddenSelectionsMaterials[] = {
            QPATHTOF(data\Piece_Stairs\piece_tilestaircase_dirtymetal.rvmat),
            QPATHTOF(data\Piece_Stairs\piece_tilestaircase_metalpanels2.rvmat),
            QPATHTOF(data\Piece_Stairs\piece_tilestaircase_tilefloor.rvmat),
            QPATHTOF(data\Piece_Stairs\piece_tilestaircase_whitewall.rvmat)
        };
	};
};
