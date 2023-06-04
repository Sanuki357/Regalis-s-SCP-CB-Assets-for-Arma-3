class CfgWeapons
{
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;

    //**********//
    // Keycards //
    //**********//

	class SCP_CB_Things_Keycard_C1: CBA_MiscItem
	{
		scope                       = 2;
		scopeArsenal                = 2;
		scopeCurator                = 2;
        displayName                 = CSTRING(Keycard_C1);
        descriptionShort            = CSTRING(Keycard_C1_desc);
		model                       = QPATHTOF(data\Keycard\SCP_Keycard.p3d);
		picture                     = QPATHTOF(data\Keycard\UI\gear_Keycard_C1_CA.paa);
		hiddenSelections[]          = {"camo"};
		hiddenSelectionsTextures[]  = {QPATHTOF(data\Keycard\Keycard_C1_CO.paa)};
		
	    class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass    = 2;
		};
	};
	
	class SCP_CB_Things_Keycard_C2: SCP_CB_Things_Keycard_C1
	{
		displayName                 = CSTRING(Keycard_C2);
        descriptionShort            = CSTRING(Keycard_C2_desc);
		picture                     = QPATHTOF(data\Keycard\UI\gear_Keycard_C2_CA.paa);
		hiddenSelectionsTextures[]  = {QPATHTOF(data\Keycard\Keycard_C2_CO.paa)};
	};
	
	class SCP_CB_Things_Keycard_C3: SCP_CB_Things_Keycard_C1
	{
		displayName                 = CSTRING(Keycard_C3);
        descriptionShort            = CSTRING(Keycard_C3_desc);
		picture                     = QPATHTOF(data\Keycard\UI\gear_Keycard_C3_CA.paa);
		hiddenSelectionsTextures[]  = {QPATHTOF(data\Keycard\Keycard_C3_CO.paa)};
	};
	
	class SCP_CB_Things_Keycard_C4: SCP_CB_Things_Keycard_C1
	{
		displayName                 = CSTRING(Keycard_C4);
        descriptionShort            = CSTRING(Keycard_C4_desc);
		picture                     = QPATHTOF(data\Keycard\UI\gear_Keycard_C4_CA.paa);
		hiddenSelectionsTextures[]  = {QPATHTOF(data\Keycard\Keycard_C4_CO.paa)};
	};
	
	class SCP_CB_Things_Keycard_C5: SCP_CB_Things_Keycard_C1
	{
		displayName                 = CSTRING(Keycard_C5);
        descriptionShort            = CSTRING(Keycard_C5_desc);
		picture                     = QPATHTOF(data\Keycard\UI\gear_Keycard_C5_CA.paa);
		hiddenSelectionsTextures[]  = {QPATHTOF(data\Keycard\Keycard_C5_CO.paa)};
	};
};