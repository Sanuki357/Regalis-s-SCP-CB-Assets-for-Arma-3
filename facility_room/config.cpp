class CfgPatches
{
	class SCP_CB_Facility
	{
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 0.1;
		units[] =
		{
			"SCP_CB_Facility_LCZ_FourWays", "SCP_CB_Facility_LCZ_TwoWays"
		};
		weapons[] = {};
	};
};
// LCZ = Light Containment Zone

class CfgEditorCategories
{
	class SCP_Facility
	{
		displayName = "Structures (SCP)";
	};
};

class CfgEditorSubcategories
{
	class SCP_LCZ
	{
		displayName = "Light Containment Zone";
	};
};


class CfgVehicles
{
	class House_F;
	class SCP_CB_Facility_LCZ_FourWays: House_F
	{
		scope				= 2;
        curatorScope		= 2;
		displayName			= "Four-Ways Hallway"; // Name in editor
		model				= "\SCP_CB\facility_room\FourWays.p3d"; // Path to model

		editorCategory		= "SCP_Facility";
		editorSubcategory	= "SCP_LCZ";
		mapSize				= 20.27;
    };

	class SCP_CB_Facility_LCZ_TwoWays: SCP_CB_Facility_LCZ_FourWays
	{
		displayName			= "Two-Ways Hallway (Low Ceiling)"; // Name in editor
		model				= "\SCP_CB\facility_room\TwoWays.p3d"; // Path to model
	};
};