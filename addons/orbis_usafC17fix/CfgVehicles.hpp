class CfgVehicles {
	class Air;
	class Plane: Air {
		class HitPoints;
		class AnimationSources;
		class NewTurret;
		class ViewPilot;
	};

	class USAF_C17: Plane {
		class UserActions {
			class Attach_Current {
				displayName = "<t color='#FF0000'>Attach Current Vehicle</t";
				priority = 6;
				onlyforplayer = 0;
				position = "pos nose open";
				radius = 50;
				showWindow = 0;
				condition = "(ACE_player != vehicle ACE_player) && (this != vehicle ACE_player) && !(vehicle ACE_player getVariable ['inCargo', false])";
				statement = "[this] spawn orbis_fnc_attachCurrent";
			};
			class Paradrop_Cargos {
				displayName = "<t color='#FF0000'>Paradrop All Cargos</t";
				priority = 5;
				onlyforplayer = 0;
				position = "pos nose open";
				radius = 50;
				showWindow = 0;
				condition = "(ACE_player in [driver this, commander this]) && !(attachedObjects this isEqualTo []) && (this animationPhase 'back_ramp_half_switch' == 1)";
				statement = "[this] spawn orbis_fnc_paradropCargos";
			};
		};
		class EventHandlers {
			init = "_this spawn orbis_fnc_c17init;_this execVM '\USAF_C17\scripts\IntLight.sqf';"; // [(_this select 0)] spawn Lala_C17_fnc_addActions;
			Gear = "_this execVM '\USAF_C17\scripts\gear.sqf'";
		};
	};
};
