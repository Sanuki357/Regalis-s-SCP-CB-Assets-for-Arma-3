class CfgVehicles
{
    class ThingX;
    class SCP_CB_Anomaly_base: ThingX
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
        editorCategory = "SCP_Anomalies";
        editorSubcategory = "SCP_Inanimate";
    };

//******************//
// Hallways & Rooms //
//******************//

    class SCP_CB_Anomaly_SCP173_Static : SCP_CB_Anomaly_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(SCP173_Static);
        model = QPATHTOF(data\SCP173\SCP173.p3d); // Path to model
        hiddenSelections[] = {"camo"};
        editorSubcategory = "SCP_Autonomous_Static";
    };

    class SCP_CB_Anomaly_SCP079 : SCP_CB_Anomaly_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(SCP079);
        model = QPATHTOF(data\SCP079\SCP079.p3d); // Path to model
        hiddenSelections[] = {"camo_monitor_screen"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\SCP079\SCP079_monitor_screen_CO.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\SCP079\SCP079_monitor_screen.rvmat)};
        editorSubcategory = "SCP_Inanimate";
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
};