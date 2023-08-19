#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"};
        authors[] = {"RvanBoxtel"};
        VERSION_CONFIG;
    };
};

#include "CfgMods.hpp"


#include "CfgSettings.hpp"
#include "CfgModuleCategories.hpp"
#include "CfgEditorSubcategories.hpp"
