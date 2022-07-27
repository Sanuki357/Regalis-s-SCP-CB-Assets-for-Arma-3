class CfgVehicles
{
    class Land_ToiletBox_F; 
    class SCP_CB_Anomaly_base: Land_ToiletBox_F
    {
        scope = 0;
        scopeCurator = 0;
        armor = 999999;
        armorStructural = 999;
        model = "\A3\Weapons_F\empty.p3d";
        destrType = "DestructNo";
        simulation = House;
        editorCategory = "SCP_Anomalies";
        editorSubcategory = "SCP_Sentient_Static";
        mapSize = 20.27;
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
    };
};