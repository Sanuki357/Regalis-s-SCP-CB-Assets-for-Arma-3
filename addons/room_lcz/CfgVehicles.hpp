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
    class SCP_CB_LCZ_Hallway_Two_5_NoDoor : SCP_CB_LCZ_base
    {
        scope = 2;
        curatorScope = 2;
        displayName = CSTRING(Hallway_Two_5_NoDoor);
        model = QPATHTOF(data\Hallway_Two_5\Hallway_Two_5_NoDoor.p3d);
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
    };
};