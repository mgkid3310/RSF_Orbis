class CfgPatches {
	class orbis_airforce_config {
		name = "Orbis Airforce Config";
		author = "Orbis2358";
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_pylons", "FIR_AirWeaponSystem_US"/*, "FIR_AV8B_F"*/, "FIR_F15_F"/*, "FIR_F16_F", "FIR_F16D_F"*/};
		units[] = {/* "F16D_ROKAF_Aerobatics", "F16D_ROKAF_Training" */};
		weapons[] = {};
	};
};

#include "CfgEventHandlers.hpp"

#include "baseClasses.hpp"
#include "CfgMagazines.hpp"
// #include "CfgWeapons.hpp"

/* class itc_air_default_jet;
class itc_air_default_heli_ah;
class itc_air_default_heli_uh; */

class CfgVehicles {
	class Plane;
	class Plane_Base_F: Plane {
		// class itc_air: itc_air_default_jet {};
	};
	class Plane_CAS_01_base_F: Plane_Base_F {};
	class Plane_Fighter_03_base_F: Plane_Base_F {};

	class Helicopter;
	class Helicopter_Base_F: Helicopter {
		// class itc_air: itc_air_default_heli_ah {};
	};

	// #include "FIR_AV8B_config.hpp"
	#include "FIR_F15_config.hpp"
	// #include "FIR_F16_config.hpp"
};
