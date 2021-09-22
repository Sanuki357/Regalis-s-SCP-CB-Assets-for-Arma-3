//***************//
// Sound Effects //
//***************//

class CfgSounds
{
    sounds[] = {};
    class SCP_Fan
    {
    name = "SCP_Fan";
    sound[] = {QPATHTOF(data\Hallway2Three\Fan.ogg), db+20, 1};
    titles[] ={};
    };
    
    class SCP_Drip
    {
    name = "SCP_Drip";
    sound[] = {QPATHTOF(data\Hallway3One\drip.ogg), db+20, 1};
    titles[]={};
    };
};
