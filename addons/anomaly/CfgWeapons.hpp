class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;

	/*
	The below goes to the naughty list.
	class InventoryItem_Base_F;
	class ItemCore;

	class UniformItem: InventoryItem_Base_F
	{
		type = 801; //Uniform
	};
	*/

	class SCP_CB_Anomaly_SCP106_U: Uniform_Base
	{
		scope = 2;
		displayName = CSTRING(SCP106_Skin);
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model = "\A3\characters_f\common\suitpacks\suitpack_civilian_F";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\SCP106\SCP106_CO.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\SCP106\SCP106.rvmat)};

		class ItemInfo: UniformItem
		{
			//uniformModel = QPATHTOF(data\SCP106\SCP106.p3d);
			uniformModel = "-";
			uniformClass = "SCP_CB_Anomaly_SCP106";
			containerClass = "Supply90";
			mass = 80;
		};
	};

	class SCP_CB_Anomaly_SCP049_U: SCP_CB_Anomaly_SCP106_U
	{
		displayName = CSTRING(SCP049_Skin);
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model = "\A3\characters_f\common\suitpacks\suitpack_civilian_F";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\SCP049\SCP049Cloth_CO.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\SCP049\SCP049Cloth.rvmat)};

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SCP_CB_Anomaly_SCP049";
			containerClass = "Supply90";
			mass = 80;
		};
	};
};