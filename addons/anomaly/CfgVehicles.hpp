class CfgVehicles
{
    class ThingX;
    class SCP_CB_Anomaly_Object_base: ThingX
    {
        mapSize = 0.97;
        scope = 0;
        scopeCurator = 0;
        armor = 999999;
        armorStructural = 999;
        model = "\A3\Weapons_F\empty.p3d";
        icon = "z\RegalisSCP_CB\addons\textures\UI\SCP_iconFoundationSolid_CA.paa";
        destrType = "DestructNo";
        simulation = House;
        editorCategory = "SCP_EdCat_Anomalies";
        editorSubcategory = "SCP_EdSubcat_Inanimate";
    };

    //******************//
    // Static/Immobile  //
    //******************//

    class SCP_CB_Anomaly_SCP079 : SCP_CB_Anomaly_Object_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(SCP079);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Anomaly_SCP079.jpg);
        model = QPATHTOF(data\SCP079\SCP079.p3d); // Path to model
        hiddenSelections[] = {"camo_monitor_screen"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\SCP079\SCP079_monitor_screen_CO.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\SCP079\SCP079_monitor_screen.rvmat)};
        editorSubcategory = "SCP_EdSubcat_Inanimate";
    };

    class SCP_CB_Anomaly_SCP079_Face : SCP_CB_Anomaly_SCP079
    {
        displayName = CSTRING(SCP079_Face);
        hiddenSelectionsTextures[] = {QPATHTOF(data\SCP079\SCP079_AIface_CO.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\SCP079\SCP079_monitor_screen_lit.rvmat)};
    };

    class SCP_CB_Anomaly_SCP079_X : SCP_CB_Anomaly_SCP079_Face
    {
        displayName = CSTRING(SCP079_X);
        hiddenSelectionsTextures[] = {QPATHTOF(data\SCP079\SCP079_AIface2_CO.paa)};
    };

    class SCP_CB_Anomaly_SCP096_Static_Pose1 : SCP_CB_Anomaly_Object_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(SCP096_Static_Pose1);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Anomaly_SCP079.jpg);
        model = QPATHTOF(data\SCP096\Poses\SCP096_Pose1.p3d); // Path to model
        editorSubcategory = "SCP_EdSubcat_Autonomous_Static";
    };

    class SCP_CB_Anomaly_SCP096_Static_Pose2 : SCP_CB_Anomaly_SCP096_Static_Pose1
    {
        displayName = CSTRING(SCP096_Static_Pose2);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Anomaly_SCP079.jpg);
        model = QPATHTOF(data\SCP096\Poses\SCP096_Pose2.p3d); // Path to model
    };

    class SCP_CB_Anomaly_SCP096_Static_Pose3 : SCP_CB_Anomaly_SCP096_Static_Pose1
    {
        displayName = CSTRING(SCP096_Static_Pose3);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Anomaly_SCP079.jpg);
        model = QPATHTOF(data\SCP096\Poses\SCP096_Pose3.p3d); // Path to model
    };

    class SCP_CB_Anomaly_SCP096_Static_Pose4 : SCP_CB_Anomaly_SCP096_Static_Pose1
    {
        displayName = CSTRING(SCP096_Static_Pose4);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Anomaly_SCP079.jpg);
        model = QPATHTOF(data\SCP096\Poses\SCP096_Pose4.p3d); // Path to model
    };

    class SCP_CB_Anomaly_SCP096_Static_Pose5 : SCP_CB_Anomaly_SCP096_Static_Pose1
    {
        displayName = CSTRING(SCP096_Static_Pose5);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Anomaly_SCP079.jpg);
        model = QPATHTOF(data\SCP096\Poses\SCP096_Pose5.p3d); // Path to model
    };

    class SCP_CB_Anomaly_SCP096_Static_Pose6 : SCP_CB_Anomaly_SCP096_Static_Pose1
    {
        displayName = CSTRING(SCP096_Static_Pose6);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Anomaly_SCP079.jpg);
        model = QPATHTOF(data\SCP096\Poses\SCP096_Pose6.p3d); // Path to model
    };

    class SCP_CB_Anomaly_SCP173 : SCP_CB_Anomaly_Object_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(SCP173);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Anomaly_SCP173_Static.jpg);
        model = QPATHTOF(data\SCP173\SCP173.p3d); // Path to model
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\SCP173\SCP173_CO.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\SCP173\SCP173.rvmat)};
        editorSubcategory = "SCP_EdSubcat_Autonomous";
        simulation = "thingX";
        class EventHandlers
        {
	        init = "_this spawn SCP_fnc_173_init;";
        };
    };

    class SCP_CB_Anomaly_SCP173_Spooky : SCP_CB_Anomaly_SCP173
    {
        displayName = CSTRING(SCP173_Spooky);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Anomaly_SCP173_Static.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\SCP173\SCP173_Spooky_CO.paa)};
    };

    class SCP_CB_Anomaly_SCP173_Skibidi : SCP_CB_Anomaly_SCP173
    {
        displayName = CSTRING(SCP173_Skibidi);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Anomaly_SCP173_Static.jpg);
        model = QPATHTOF(data\SCP173\SCP173_Skibidi.p3d);
    };

    class SCP_CB_Anomaly_SCP173_Static : SCP_CB_Anomaly_Object_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(SCP173_Static);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Anomaly_SCP173_Static.jpg);
        model = QPATHTOF(data\SCP173\SCP173.p3d); // Path to model
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\SCP173\SCP173_CO.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\SCP173\SCP173.rvmat)};
        editorSubcategory = "SCP_EdSubcat_Autonomous_Static";
    };

    class SCP_CB_Anomaly_SCP173_Spooky_Static : SCP_CB_Anomaly_SCP173_Static
    {
        displayName = CSTRING(SCP173_Spooky_Static);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Anomaly_SCP173_Static.jpg);
        hiddenSelectionsTextures[] = {QPATHTOF(data\SCP173\SCP173_Spooky_CO.paa)};
    };

    class SCP_CB_Anomaly_SCP173_Skibidi_Static : SCP_CB_Anomaly_SCP173_Static
    {
        displayName = CSTRING(SCP173_Skibidi_Static);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Anomaly_SCP173_Static.jpg);
        model = QPATHTOF(data\SCP173\SCP173_Skibidi.p3d);
    };

    class SCP_CB_Anomaly_SCP294 : SCP_CB_Anomaly_Object_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(SCP294);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Anomaly_SCP294.jpg);
        model = QPATHTOF(data\SCP294\SCP294.p3d); // Path to model
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\SCP294\SCP294_CO.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\SCP294\SCP294.rvmat)};
        editorSubcategory = "SCP_EdSubcat_Inanimate";
    };

    class SCP_CB_Anomaly_SCP1162 : SCP_CB_Anomaly_Object_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(SCP1162);
        editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Anomaly_SCP1162.jpg);
        model = QPATHTOF(data\SCP1162\SCP1162.p3d); // Path to model
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\SCP1162\SCP1162_CA.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\SCP1162\SCP1162.rvmat)};
        editorSubcategory = "SCP_EdSubcat_Inanimate";
        class UserActions
		{
			class SCP1162
			{
				displayNameDefault = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
				displayName = CSTRING(SCP1162_ReachInto);
                priority = 6;
				position = "Action_1162";
				radius = 2;
				aiMaxRange = 2;
				onlyForPlayer = 0;
				condition = "alive this";
                statement = "[this] call SCP_fnc_1162_itemExchange;";
			};
		};
    };

    //******************//
    // Wearable stuff  //
    //******************//

    class I_Soldier_base_F ;
    class SCP_CB_Anomaly_SCP106 : I_Soldier_base_F 
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        identityTypes[] = {"NoVoice","Head_Dummy","NoGlasses"};
        displayName = CSTRING(SCP106);
        cost = 200000;
        camouflage = 1.5;
		sensitivity = 2.5;
		threat[] = {1, 1, 0.8};
		editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Anomaly_SCP106.jpg);
        model = QPATHTOF(data\SCP106\SCP106.p3d);
		uniformClass = "SCP_CB_Anomaly_SCP106_U";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\SCP106\SCP106_CO.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\SCP106\SCP106.rvmat)};
        canDeactivateMines = false;
		engineer = false;
		attendant = 0;
		icon = "z\RegalisSCP_CB\addons\textures\UI\SCP_iconFoundationSolid_CA.paa"; //QPATHTOEF(textures, UI\SCP_iconFoundationSolid_CA.paa);
		picture = "z\RegalisSCP_CB\addons\textures\UI\SCP_iconFoundationSolid_CA.paa"; //QPATHTOEF(textures, UI\SCP_iconFoundationSolid_CA.paa);
        backpack = "";	
        weapons[] = {"Throw", "Put"};				// Which weapons the character has.
		respawnWeapons[] = {"Throw", "Put"};		// Which weapons the character respawns with.
		Items[] = {};				// Which items the character has.
		RespawnItems[] = {};			// Which items the character respawns with.
		magazines[] = {};				// What ammunition the character has.
		respawnMagazines[] = {};		// What ammunition the character respawns with.
		linkedItems[] = {};				// Which items the character has.
		respawnLinkedItems[] = {};	
    };

    class SCP_CB_Anomaly_SCP049 : SCP_CB_Anomaly_SCP106
    {
        displayName = CSTRING(SCP049);
		editorPreview = QPATHTOF(EditorPreviews\SCP_CB_Anomaly_SCP049.jpg);
        model = QPATHTOF(data\SCP049\SCP049.p3d);
        uniformClass = "SCP_CB_Anomaly_SCP049_U";
		hiddenSelections[] = {"camo_cloth", "camo_mask", "camo_eye"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\SCP049\SCP049Cloth_CO.paa), QPATHTOF(data\SCP049\SCP049Mask_CO.paa), QPATHTOF(data\SCP049\SCP049Mask_CO.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\SCP049\SCP049Cloth.rvmat), QPATHTOF(data\SCP049\SCP049Mask.rvmat), QPATHTOF(data\SCP049\SCP049Mask.rvmat)};
    };
};