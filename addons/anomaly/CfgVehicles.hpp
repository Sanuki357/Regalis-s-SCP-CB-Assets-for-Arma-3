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
        curatorScope = 2;
        displayName = CSTRING(SCP079);
        model = QPATHTOF(data\SCP079\SCP079.p3d); // Path to model
        hiddenSelections[] = {"camo_monitor_screen"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\SCP079\SCP079_monitor_screen_CO.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\SCP079\SCP079_monitor_screen.rvmat)};
        editorSubcategory = "SCP_EdSubcat_Inanimate";
    };

    class SCP_CB_Anomaly_SCP173_Static : SCP_CB_Anomaly_Object_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(SCP173_Static);
        model = QPATHTOF(data\SCP173\SCP173.p3d); // Path to model
        hiddenSelections[] = {"camo"};
        editorSubcategory = "SCP_EdSubcat_Autonomous_Static";
    };

    class SCP_CB_Anomaly_SCP294 : SCP_CB_Anomaly_Object_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(SCP294);
        model = QPATHTOF(data\SCP294\SCP294.p3d); // Path to model
        hiddenSelections[] = {"camo"};
        editorSubcategory = "SCP_EdSubcat_Inanimate";
    };

    /*
    class SCP_CB_Anomaly_SCP079_Active : SCP_CB_Anomaly_SCP079
    {
        displayName = CSTRING(SCP079_Active);
        hiddenSelectionsTextures[] = {QPATHTOF(data\SCP079\SCP079_AIface_CO.paa)};
    };

    class SCP_CB_Anomaly_SCP079_Refuse : SCP_CB_Anomaly_SCP079
    {
        displayName = CSTRING(SCP079_Refuse);
        hiddenSelectionsTextures[] = {QPATHTOF(data\SCP079\SCP079_AIface2_CO.paa)};
    };
    */

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
		model = QPATHTOF(data\SCP106\SCP106.p3d);
		uniformClass = "U_B_soldier_new";
		hiddenSelections[] = {"camo"};
        canDeactivateMines = false;
		engineer = false;
		attendant = 0;
		icon = "z\RegalisSCP_CB\addons\textures\UI\SCP_iconFoundationSolid_CA.paa";
		picture = "z\RegalisSCP_CB\addons\textures\UI\SCP_iconFoundationSolid_CA.paa";
    };

    class SCP_CB_Anomaly_SCP049 : SCP_CB_Anomaly_SCP106
    {
        displayName = CSTRING(SCP049);
		model = QPATHTOF(data\SCP049\SCP049.p3d);
		hiddenSelections[] = {"camo_cloth", "camo_mask", "camo_eye"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\SCP049\SCP049Cloth_CO.paa), QPATHTOF(data\SCP049\SCP049Mask_CO.paa), QPATHTOF(data\SCP049\SCP049Mask_CO.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\SCP049\SCP049Cloth.rvmat), QPATHTOF(data\SCP049\SCP049Mask.rvmat), QPATHTOF(data\SCP049\SCP049Mask.rvmat)};
    };
};