class CfgPatches
{
	class SCP_CB_LCZ
	{
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 0.1;
		units[] =
		{
			"SCPLCZ_Hallway_2_One",
			"SCPLCZ_Hallway_2_Two",
			"SCPLCZ_Hallway_2_Three",
			"SCPLCZ_Hallway_2_Four",
			"SCPLCZ_Hallway_3_One",
			"SCPLCZ_Hallway_3_Two",
			"SCPLCZ_Hallway_3_Three",
			"SCPLCZ_Hallway_C_One",
			"SCPLCZ_Hallway_4_One",
			"SCPLCZ_Hallway_4_Two",
			"SCPLCZ_Hallway_4_Three"
		};
		weapons[] = {};
	};
};

//*****//
// LCZ //
//*****//

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


//************//
// Base Class //
//************//

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
		simulation          = House;
		
		editorCategory		= "SCP_Facility";
		editorSubcategory	= "SCP_LCZ";
		mapSize				= 20.27;
	};

//******************// \\******************************************************\\
// Hallways & Rooms // \\ 2 = Two Way, 3 = Three Way, 4 = Four-Way, C = Corner \\
//******************// \\******************************************************\\

    class SCPLCZ_Hallway_2_One : SCPLCZ_base
	{
		scope               = 2;
		curatorScope		= 2;
		displayName			= "Two-Way Hallway"; // Name in editor
		model				= "\RegalisSCP_CB\room_LCZ\Hallway2One.p3d"; // Path to model
	};
	
	class SCPLCZ_Hallway_2_Two : SCPLCZ_base
	{
		scope               = 2;
		curatorScope		= 2;
		displayName			= "Two-Way Hallway (Low Ceiling)"; // Name in editor
		model				= "\RegalisSCP_CB\room_LCZ\Hallway2Two.p3d"; // Path to model
	};
	
	class SCPLCZ_Hallway_2_Three : SCPLCZ_base
	{
		scope               = 2;
		curatorScope		= 2;
		displayName			= "Two-Way Hallway (Fan)"; // Name in editor
		model				= "\RegalisSCP_CB\room_LCZ\Hallway2Three.p3d"; // Path to model
		
	};
	
	class SCPLCZ_Hallway_2_Four : SCPLCZ_base
	{
		scope               = 2;
		curatorScope		= 2;
		displayName			= "Two-Way Hallway (Floor Lights)"; // Name in editor
		model				= "\RegalisSCP_CB\room_LCZ\Hallway2Four.p3d"; // Path to model
	};
	
	class SCPLCZ_Hallway_3_One : SCPLCZ_base
	{
		scope               = 2;
		curatorScope		= 2;
		displayName			= "Three-Way Hallway"; // Name in editor
		model				= "\RegalisSCP_CB\room_LCZ\Hallway3One.p3d"; // Path to model
	};
	
	class SCPLCZ_Hallway_3_Two : SCPLCZ_base
	{
		scope               = 2;
		curatorScope		= 2;
		displayName			= "Three-Way Hallway (Maintenance)"; // Name in editor
		model				= "\RegalisSCP_CB\room_LCZ\Hallway3Two.p3d"; // Path to model
	};
	
	class SCPLCZ_Hallway_3_Three : SCPLCZ_base
	{
		scope               = 2;
		curatorScope		= 2;
		displayName			= "Three-Way Hallway (Floor Lights)"; // Name in editor
		model				= "\RegalisSCP_CB\room_LCZ\Hallway3Three.p3d"; // Path to model
	};
	
	class SCPLCZ_Hallway_C_One : SCPLCZ_base
	{
		scope               = 2;
		curatorScope		= 2;
		displayName			= "Corner Hallway"; // Name in editor
		model				= "\RegalisSCP_CB\room_LCZ\HallwayCOne.p3d"; // Path to model
	};
	
	class SCPLCZ_Hallway_4_One : SCPLCZ_base
	{
		scope               = 2;
		curatorScope		= 2;
		displayName			= "Four-Way Hallway"; // Name in editor
		model				= "\RegalisSCP_CB\room_LCZ\Hallway4One.p3d"; // Path to model
	};
	
	class SCPLCZ_Hallway_4_Two : SCPLCZ_base
	{
		scope               = 2;
		curatorScope		= 2;
		displayName			= "Four-Way Hallway (Catwalk)"; // Name in editor
		model				= "\RegalisSCP_CB\room_LCZ\Hallway4Two.p3d"; // Path to model
	};
	
	class SCPLCZ_Hallway_4_Three : SCPLCZ_base	
	{
		scope               = 2;
		curatorScope		= 2;
		displayName			= "Four-Way Hallway (Info Desk)"; // Name in editor
		model				= "\RegalisSCP_CB\room_LCZ\Hallway4Three.p3d"; // Path to model
	};
};

//***************//
// Sound Effects //
//***************//

class CfgSounds
{
    sounds[] = {};
	class SCP_Fan
    {
    name = "SCP_Fan";
    sound[]		= {"RegalisSCP_CB\room_LCZ\data\Hallway2Three\Fan.ogg", db+20, 1};
    titles[]	={};
	};
	
	class SCP_Drip
	{
	name = "SCP_Drip";
	sound[] = {"RegalisSCP_CB\room_LCZ\data\Hallway3One\drip.ogg", db+20, 1};
	titles[]={};
	};
};

//***************//
// Ambient Noise //
//***************//

class Extended_InitPost_EventHandlers 
{
	class SCPLCZ_Hallway_2_Three
	{
		class SCPLCZ_Hallway_2_Three_init 
		{
			init = "_unit = _this select 0; if (local _unit) then {_unit spawn {_soundCache = 'Land_HelipadEmpty_F' createVehicle position _this;_soundCache attachTo [_this,[0,0,0], 'sound_fan'];while {alive _this} do {[_soundCache, 'SCP_Fan', 10] call CBA_fnc_globalSay3d;sleep 2.95;};deleteVehicle _soundCache;};};";
        };
	};
	
	class SCPLCZ_Hallway_3_One
	{
		class SCPLCZ_Hallway_3_One_init
		{
			init = "_unit = _this select 0; if (local _unit) then {_unit spawn {_soundCache = 'Land_HelipadEmpty_F' createVehicle position _this;_soundCache attachTo [_this,[0,0,0], 'sound_drip'];while {alive _this} do {[_soundCache, 'SCP_Drip', 10] call CBA_fnc_globalSay3d;sleep 4.95;};deleteVehicle _soundCache;};};";
        };
	};
};