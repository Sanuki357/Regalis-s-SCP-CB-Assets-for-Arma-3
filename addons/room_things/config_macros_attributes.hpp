#define ATTRIBUTES_DOOR_HINGE_STATE \
class DoorHingeState \
{ \
	displayName     = CSTRING(DoorHingeState_displayname); \
	tooltip         = CSTRING(DoorHingeState_tooltip); \
	property        = "DoorHingeState"; \
	control         = "Combo"; \
	expression      = "_this animateSource ['Door_1_Source', _value, true];"; \
	defaultValue    = 0; \
	typeName        = "NUMBER"; \
	class Values { \
		class Close { \
			name    = CSTRING(DoorHingeState_Close); \
			tooltip = CSTRING(DoorHingeState_Close_tooltip); \
			value   = 0; \
			picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C1_CA.paa); \
		}; \
		class Open { \
			name    = CSTRING(DoorHingeState_Open); \
			tooltip = CSTRING(DoorHingeState_Open_tooltip); \
			value   = 1; \
			picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C2_CA.paa); \
		}; \
	}; \
};

#define ATTRIBUTES_DOOR_LOCK_STATE \
class DoorLockState \
{ \
	displayName     = CSTRING(DoorLockState_displayname); \
	tooltip         = CSTRING(DoorLockState_tooltip); \
	property        = "DoorLockState"; \
	control         = "Combo"; \
	expression      = "_this setVariable ['SCP_CB_Operetable_DoorLockState', _value, true];"; \
	defaultValue    = 0; \
	typeName        = "NUMBER"; \
	class Values { \
		class Level1 { \
			name    = CSTRING(DoorState_level1); \
			tooltip = CSTRING(DoorState_level1_tooltip); \
			value   = 1; \
			picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C1_CA.paa); \
		}; \
		class Level2 { \
			name    = CSTRING(DoorState_level2); \
			tooltip = CSTRING(DoorState_level2_tooltip); \
			value = 2; \
			picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C2_CA.paa); \
		}; \
	}; \
};

#define ATTRIBUTES_BUTTON_EXPRESSION \
class PressExpression \
{ \
	displayName     = CSTRING(PressExpression_displayname); \
	tooltip         = CSTRING(PressExpression_tooltip); \
	property        = "PressExpression"; \
	control         = "EditCodeMulti5"; \
	expression      = "_this setVariable ['SCP_CB_Operetable_PressExpression', _value, true];"; \
	defaultValue    = """[[myDoor0, myDoor1], 'None'] call SCP_fnc_buttonTrigger;"""; \
	typeName        = "STRING"; \
};

#define ATTRIBUTES_CARDREADER_REQUIRED_CLEARANCE_LEVEL \
class RequiredClearanceLevel \
{ \
	displayName     = CSTRING(RequiredClearanceLevel_displayname); \
	tooltip         = CSTRING(RequiredClearanceLevel_tooltip); \
	property        = "RequiredClearanceLevel"; \
	control         = "Combo"; \
	expression      = "_this setVariable ['SCP_CB_Operetable_Required_ClearanceLevel', _value, true];"; \
	defaultValue    = 1; \
	typeName        = "NUMBER"; \
	class Values { \
		class Level1 { \
			name    = CSTRING(RequiredClearanceLevel_level1); \
			tooltip = CSTRING(RequiredClearanceLevel_level1_tooltip); \
			value   = 1; \
			picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C1_CA.paa); \
		}; \
		class Level2 { \
			name    = CSTRING(RequiredClearanceLevel_level2); \
			tooltip = CSTRING(RequiredClearanceLevel_level2_tooltip); \
			value = 2; \
			picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C2_CA.paa); \
		}; \
		class Level3 { \
			name    = CSTRING(RequiredClearanceLevel_level3); \
			tooltip = CSTRING(RequiredClearanceLevel_level3_tooltip); \
			value = 3; \
			picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C3_CA.paa); \
		}; \
		class Level4 { \
			name    = CSTRING(RequiredClearanceLevel_level4); \
			tooltip = CSTRING(RequiredClearanceLevel_level4_tooltip); \
			value = 4; \
			picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C4_CA.paa); \
		}; \
		class Level5 { \
			name    = CSTRING(RequiredClearanceLevel_level5); \
			tooltip = CSTRING(RequiredClearanceLevel_level5_tooltip); \
			value = 5; \
			picture = QPATHTOF(data\Keycard\UI\gear_Keycard_C5_CA.paa); \
		}; \
	}; \
};