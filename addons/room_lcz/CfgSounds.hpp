//***************//
// Sound Effects //
//***************//

class CfgSounds
{
    sounds[] = {};
    class SCP_Fan
    {
        name = "SCP_Fan";
        sound[] = {QPATHTOF(data\Hallway_Two_3\Fan.ogg), db+20, 1};
        titles[] ={};
    };
    
    class SCP_Drip
    {
        name = "SCP_Drip";
        sound[] = {QPATHTOF(data\Hallway_Three_1\drip.ogg), db+20, 1};
        titles[]={};
    };
};
