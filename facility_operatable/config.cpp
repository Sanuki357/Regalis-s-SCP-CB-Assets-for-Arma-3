class CfgPatches
{
	class SCP_CB_Facility
	{
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 0.1;
		units[] =
		{
			"SCP_CB_Facility_Door01_2_2B"
		};
		weapons[] = {};
	};
};

/*
class CfgFunctions
{
	class SCP_CB
	{
		tag = "SCP_CB";

		class facility_operatable
		{

			file = "\SCP_CB\facility_operatable\Function";
			
			class facility_operatable_smoothAnimPhase {};
		};
	};
};
*/

class CfgEditorCategories
{
	class SCP_Facility
	{
		displayName = "Structures (SCP)";
	};
};

class CfgEditorSubcategories
{
	class SCP_DoorAndGate
	{
		displayName = "Door/Gate";
	};
};


class CfgVehicles
{
	class House_F;
	class SCP_CB_Facility_Door01_2_2B: House_F
	{
		scope				= 2;
        curatorScope		= 2;
		displayName			= "Door (2 Ways, 2 Buttons)"; // Name in editor
		model				= "\SCP_CB\facility_operatable\Door01_2_Buttons.p3d"; // Path to model

		editorCategory		= "SCP_Facility";
		editorSubcategory	= "SCP_DoorAndGate";
		mapSize				= 20.27;

		class UserActions
		{
			class Open_Door_1
			{
				displayName		=	"Press Button";
				position		=	"Action_Door_1";
				radius			=	2;
				onlyForPlayer	=	0;
				condition		=	"this animationSourcePhase ""Open_Door"" == 0";
				statement		=	"this animateSource [""Open_Door"", 1, 1]; _array = [""SCP_CB\facility_operatable\Data\DoorOpen1.ogg"", ""SCP_CB\facility_operatable\Data\DoorOpen2.ogg"", ""SCP_CB\facility_operatable\Data\DoorOpen3.ogg""]; _random = _array select floor random count _array; playSound3D [_random, this, false, getPosASL this, 5]; playSound3D [""SCP_CB\facility_operatable\Data\Button.ogg"", this, false, this modelToWorld [1.138, 1.367, -0.334], 5]";
				//[this, ""Open_Door"", 1, 1.75] call SCP_CB_fnc_facility_operatable_smoothAnimPhase
			};

			class Close_Door_1: Open_Door_1
			{
				condition		=	"this animationSourcePhase ""Open_Door"" == 1";
				statement		=	"this animateSource [""Open_Door"", 0, 1]; _array = [""SCP_CB\facility_operatable\Data\DoorClose1.ogg"", ""SCP_CB\facility_operatable\Data\DoorClose2.ogg"", ""SCP_CB\facility_operatable\Data\DoorClose3.ogg""]; _random = _array select floor random count _array; playSound3D [_random, this, false, getPosASL this, 5]; playSound3D [""SCP_CB\facility_operatable\Data\Button.ogg"", this, false, this modelToWorld [1.138, 1.367, -0.334], 5]";
			};
			
			class Open_Door_2: Open_Door_1
			{
				position		= "Action_Door_2";
				statement		= "this animateSource [""Open_Door"", 1, 1]; _array = [""SCP_CB\facility_operatable\Data\DoorOpen1.ogg"", ""SCP_CB\facility_operatable\Data\DoorOpen2.ogg"", ""SCP_CB\facility_operatable\Data\DoorOpen3.ogg""]; _random = _array select floor random count _array; playSound3D [_random, this, false, getPosASL this, 5]; playSound3D [""SCP_CB\facility_operatable\Data\Button.ogg"", this, false, this modelToWorld [-1.138, -1.367, -0.334], 5]";
			};

			class Close_Door_2: Close_Door_1
			{
				position		= "Action_Door_2";
				statement		= "this animateSource [""Open_Door"", 0, 1]; _array = [""SCP_CB\facility_operatable\Data\DoorClose1.ogg"", ""SCP_CB\facility_operatable\Data\DoorClose2.ogg"", ""SCP_CB\facility_operatable\Data\DoorClose3.ogg""]; _random = _array select floor random count _array; playSound3D [_random, this, false, getPosASL this, 5]; playSound3D [""SCP_CB\facility_operatable\Data\Button.ogg"", this, false, this modelToWorld [-1.138, -1.367, -0.334], 5]";
			};
		};

		class AnimationSources
		{
			class Open_Door
			{
				source = "user";
				animPeriod = 1.2;
				initPhase = 0;
			};
		};
    };
};