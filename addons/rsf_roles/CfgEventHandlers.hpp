class Extended_PreStart_EventHandlers {
	class rsf_roles {
		init = "call compile preProcessFileLineNumbers 'rsf_roles\XEH_preStart.sqf'";
	};
};

class Extended_PreInit_EventHandlers {
	class rsf_roles {
		init = "call compile preProcessFileLineNumbers 'rsf_roles\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers {
	class rsf_roles {
		init = "call compile preProcessFileLineNumbers 'rsf_roles\XEH_postInit.sqf'";
	};
};
