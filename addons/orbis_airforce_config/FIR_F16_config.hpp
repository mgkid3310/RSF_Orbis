	class FIR_F16_Base: Plane_Fighter_03_base_F {
		class EventHandlers: EventHandlers {
			class orbis_config {
				init = "[(_this select 0), []] spawn orbis_airforce_fnc_F16Loop;";
			};
		};
	};

	class FIR_F16D_Base: Plane_Fighter_03_base_F {
		class EventHandlers: EventHandlers {
			class orbis_config {
				init = "[(_this select 0), []] spawn orbis_airforce_fnc_F16Loop;";
			};
		};
	};

	class FIR_F16D: FIR_F16D_Base {};
	class FIR_F16D_ROKAF: FIR_F16D {};
	class F16D_ROKAF_Aerobatics: FIR_F16D_ROKAF {
		displayName = "F-16D Fighting Falcon (ROKAF Aerobatics)";
		weapons[] = {"FIR_MasterArm", "FIR_CMLauncher"};
		magazines[] = {"FIR_960rnd_CMFlare_Chaff_Magazine"};
		/* fir_f16d_custom_skin = 1;
		fir_f16d_custom_name = "ROKAF Aerobatics";
		fir_f16d_custom_code = "FIR_F16D_ROKAF_Aerobatics";
		fir_f16d_custom_preview_pic = "\FIR_F16D\ui\preview\pic_rokaf.paa";
		hiddenselectionstextures[] = {"FIR_F16D\skin\body_rokaf_d_co.paa", "FIR_F16D\skin\wing_rokaf_co.paa"}; */
		// editorPreview = "\FIR_F16D\ui\preview\pic_rokaf.paa";

		#include "FIR_F16Aerobatic_Components.hpp"
		#include "FIR_F16Aerobatic_UserActions.hpp"

		class EventHandlers: EventHandlers {
			class orbis_config {
				init = "_this spawn orbis_airforce_fnc_F16DAerobaticInit;";
				engine = "['toggleSmoke', [_this select 0, 'off', [0, 0, 0, 0]]] call CBA_fnc_globalEvent;";
				killed = "['toggleSmoke', [_this select 0, 'off', [0, 0, 0, 0]]] call CBA_fnc_globalEvent;";
			};
		};
	};
	class F16D_ROKAF_Training: FIR_F16D_ROKAF {
		displayName = "F-16D Fighting Falcon (ROKAF Training)";
		weapons[] = {"FIR_MasterArm"};
		magazines[] = {};
		/* fir_f16d_custom_skin = 1;
		fir_f16d_custom_name = "ROKAF Training";
		fir_f16d_custom_code = "FIR_F16D_ROKAF_Training";
		fir_f16d_custom_preview_pic = "\FIR_F16D\ui\preview\pic_rokaf.paa";
		hiddenselectionstextures[] = {"FIR_F16D\skin\body_rokaf_d_co.paa", "FIR_F16D\skin\wing_rokaf_co.paa"}; */
		// editorPreview = "\FIR_F16D\ui\preview\pic_rokaf.paa";

		#include "FIR_F16Training_Components.hpp"

		class EventHandlers: EventHandlers {
			class orbis_config {
				init = "_this spawn orbis_airforce_fnc_F16TrainingInit;";
			};
		};
	};
