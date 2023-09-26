#include "script_component.hpp"

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
            "SCP_CB_Anomaly_SCP294",
            "SCP_CB_Anomaly_SCP1162"
        };
        weapons[] =
        {
            "SCP_CB_Anomaly_SCP049_U",
            "SCP_CB_Anomaly_SCP106_U"
        };
    };
};

#include "CfgEditorCategories.hpp"
#include "CfgVehicles.hpp"
#include "CfgSounds.hpp"
#include "CfgWeapons.hpp"
#include "CfgFunctions.hpp"

class UniformSlotInfo;

class CfgFaces
{
	class Default;
	class Man_A3: Default
	{
		class Default;
		class SCP_DummyHead: Default
		{
			displayname = CSTRING(DummyHead);
			head = "SCP_DummyHead";
			texture = "\A3\Characters_F\Heads\Data\m_Miller_co.paa";
			identityTypes[] = {"Head_Dummy"};
			//material = "\A3\Characters_F\Heads\Data\m_Miller.rvmat";
			//materialWounded1 = "A3\Characters_F\Heads\Data\m_Miller_injury.rvmat";
			//materialWounded2 = "A3\Characters_F\Heads\Data\m_Miller_injury.rvmat";
			//textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			//materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			//textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			//materialHL2 = "A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};
	};
};

class CfgHeads
{
    class Default_A3;
    class SCP_DummyHead: Default_A3
	{
		model = QPATHTOF(data\DummyHead);
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_miller.rvmat","A3\Characters_F\Heads\Data\m_miller_injury.rvmat","A3\Characters_F\Heads\Data\m_miller_injury.rvmat"};
		};
	};
};
