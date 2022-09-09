class CfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;

	class UniformItem: InventoryItem_Base_F
	{
		type = 801; //Uniform
	};

	class SCP_CB_Anomaly_SCP106_U: Itemcore
	{
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = CSTRING(SCP106_Skin);
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model = "\A3\characters_f\common\suitpacks\suitpack_civilian_F";

		class ItemInfo: UniformItem
		{
			uniformModel = QPATHTOF(data\SCP106\SCP106.p3d);
			uniformClass = SCP_CB_Anomaly_SCP106;
			containerClass = Supply90;
			mass = 80;
		};
	};

	class SCP_CB_Anomaly_SCP049_U: Itemcore
	{
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = CSTRING(SCP049_Skin);
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model = "\A3\characters_f\common\suitpacks\suitpack_civilian_F";

		class ItemInfo: UniformItem
		{
			uniformModel = QPATHTOF(data\SCP049\SCP049.p3d);
			uniformClass = SCP_CB_Anomaly_SCP049;
			containerClass = Supply90;
			mass = 80;
		};
	};
};