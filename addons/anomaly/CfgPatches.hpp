class CfgPatches
{
    class ADDON
    {
        name= COMPONENT_NAME;
        requiredAddons[] = {"A3_Characters_F", "A3_Structures_F", "RegalisSCP_CB_main"};
        requiredVersion = REQUIRED_VERSION;
        units[] =
        {
            "SCP_CB_Anomaly_SCP049",
            "SCP_CB_Anomaly_SCP079",
            "SCP_CB_Anomaly_SCP079_Face",
            "SCP_CB_Anomaly_SCP079_X",
            "SCP_CB_Anomaly_SCP106",
            "SCP_CB_Anomaly_SCP173_Static",
            "SCP_CB_Anomaly_SCP294"
        };
        weapons[] =
        {
            "SCP_CB_Anomaly_SCP049_U",
            "SCP_CB_Anomaly_SCP106_U"
        };
    };
};