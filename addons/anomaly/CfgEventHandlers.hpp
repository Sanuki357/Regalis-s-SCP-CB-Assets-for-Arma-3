class Extended_PostInit_EventHandlers {
	class SCP_CB_EntityCreated {
		init = "addMissionEventHandler [""EntityCreated"", { _this call SCP_fnc_entityCreate }];"
	};
};
