class CfgVehicles
{
    class Land_ToiletBox_F; 
    class SCPLCZ_base: Land_ToiletBox_F
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
//******************// \\******************************************************\\
// Hallways & Rooms // \\ 2 = Two Way, 3 = Three Way, 4 = Four-Way, C = Corner \\
//******************// \\******************************************************\\
    class SCPLCZ_Hallway_2_One : SCPLCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = "Two-Way Hallway"; // Name in editor
        model = QPATHTOF(data\Hallway2One.p3d); // Path to model
    };
    class SCPLCZ_Hallway_2_Two : SCPLCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = "Two-Way Hallway (Low Ceiling)"; // Name in editor
        model = QPATHTOF(data\Hallway2Two.p3d); // Path to model
    };
    class SCPLCZ_Hallway_2_Three : SCPLCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = "Two-Way Hallway (Fan)"; // Name in editor
        model = QPATHTOF(data\Hallway2Three.p3d); // Path to model
        
    };
    class SCPLCZ_Hallway_2_Four : SCPLCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = "Two-Way Hallway (Floor Lights)"; // Name in editor
        model = QPATHTOF(data\Hallway2Four.p3d); // Path to model
    };
    class SCPLCZ_Hallway_3_One : SCPLCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = "Three-Way Hallway"; // Name in editor
        model = QPATHTOF(data\Hallway3One.p3d); // Path to model
    };
    class SCPLCZ_Hallway_3_Two : SCPLCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = "Three-Way Hallway (Maintenance)"; // Name in editor
        model = QPATHTOF(data\Hallway3Two.p3d); // Path to model
    };
    class SCPLCZ_Hallway_3_Three : SCPLCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = "Three-Way Hallway (Floor Lights)"; // Name in editor
        model = QPATHTOF(data\Hallway3Three.p3d); // Path to model
    };
    class SCPLCZ_Hallway_C_One : SCPLCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = "Corner Hallway"; // Name in editor
        model = QPATHTOF(data\HallwayCOne.p3d); // Path to model
    };
    class SCPLCZ_Hallway_4_One : SCPLCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = "Four-Way Hallway"; // Name in editor
        model = QPATHTOF(data\Hallway4One.p3d); // Path to model
    };
    class SCPLCZ_Hallway_4_Two : SCPLCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = "Four-Way Hallway (Catwalk)"; // Name in editor
        model = QPATHTOF(data\Hallway4Two.p3d); // Path to model
    };
    class SCPLCZ_Hallway_4_Three : SCPLCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = "Four-Way Hallway (Info Desk)"; // Name in editor
        model = QPATHTOF(data\Hallway4Three.p3d); // Path to model
    };
};