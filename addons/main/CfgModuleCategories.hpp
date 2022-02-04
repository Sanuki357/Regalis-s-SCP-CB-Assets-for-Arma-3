class CfgFactionClasses {
    class NO_CATEGORY;
    class SCP_CB: NO_CATEGORY {
        displayName = "SCP_CB";
        priority = 2;
        side = 7;
    };
    class SCP_CB_Logi: SCP_CB {
        displayName = CSTRING(Category);
    };
};

class CfgVehicleClasses {
    class SCP_CB_Vehicles {
        displayName = "SCP_CB Vehicles";
    };
};