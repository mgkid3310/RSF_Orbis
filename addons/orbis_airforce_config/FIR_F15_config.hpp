	class FIR_F15E_Base: Plane_Fighter_03_base_F {
		/* receiveRemoteTargets = true;
		reportRemoteTargets = true;
		reportOwnPosition = true; */

		/* class UserActions {
			class F15E_Gui_Open {
				condition = "player in this and (((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)))";
				showWindow = 0;
			};
		}; */

		/* class Turrets {
			class MainTurret: NewTurret {
				// isCopilot = 0;
				primaryGunner = 0;

				class Components: Components {
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot {
						class Components: components {
							class SensorDisplay {
								componentType = "SensorsDisplayComponent";
								resource = "RscCustomInfoSensors";
								range[] = {2000, 4000, 8000, 16000, 30000};
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot {
						class Components: components {
							class SensorDisplay {
								componentType = "SensorsDisplayComponent";
								resource = "RscCustomInfoSensors";
								range[] = {2000, 4000, 8000, 16000, 30000};
							};
						};
					};
				};
			};
		};*/

		class Components: Components {
			class TransportPylonsComponent {
				class pylons {
					class pylons1 {
						hardpoints[] = {"FIR_F15E_AA_HP", "FIR_MISC"};
						attachment = "FIR_AIM9L_P_1rnd_M";
					};
					class pylons2: pylons1 {
						hardpoints[] = {"FIR_F15E_AA_HP", "FIR_MISC"};
						attachment = "FIR_AIM120_P_1rnd_M";
					};
					class pylons3: pylons2 {
						hardpoints[] = {"FIR_F15E_AA_HP", "FIR_MISC"};
						attachment = "FIR_AIM120_P_1rnd_M";
					};
					class pylons4: pylons1 {
						hardpoints[] = {"FIR_F15E_AA_HP", "FIR_MISC"};
						attachment = "FIR_AIM9L_P_1rnd_M";
					};

					class pylons5: pylons1 {
						hardpoints[] = {"FIR_F15E_AA_UNDER_HP", "FIR_F15E_AG2000_HP", "FIR_F15E_AGM_HP", "FIR_F15E_SDB_HP", "FIR_F15E_AG_HP", "FIR_MISC"};
						attachment = "FIR_GBU12_P_1rnd_M";
					};
					class pylons6: pylons5 {
						hardpoints[] = {"FIR_F15E_AG_HP", "FIR_F15E_AG2000_HP", "FIR_MISC"};
						attachment = "FIR_Empty_P_1rnd_M";
					};
					class pylons7: pylons5 {
						hardpoints[] = {"FIR_F15E_AA_UNDER_HP", "FIR_F15E_AG2000_HP", "FIR_F15E_AGM_HP", "FIR_F15E_SDB_HP", "FIR_F15E_AG_HP", "FIR_MISC"};
						attachment = "FIR_GBU12_P_1rnd_M";
					};

					class pylons8: pylons5 {
						hardpoints[] = {"FIR_F15E_AG_HP", "FIR_MISC"};
						attachment = "FIR_GBU12_P_1rnd_M";
					};
					class pylons9: pylons5 {
						hardpoints[] = {"FIR_F15E_AG_HP", "FIR_MISC"};
						attachment = "FIR_Empty_P_1rnd_M";
					};
					class pylons10: pylons5 {
						hardpoints[] = {"FIR_F15E_AG_HP", "FIR_MISC"};
						attachment = "FIR_GBU12_P_1rnd_M";
					};

					class pylons11: pylons5 {
						hardpoints[] = {"FIR_F15E_AA_UNDER_HP", "FIR_F15E_AG2000_HP", "FIR_F15E_AGM_HP", "FIR_F15E_SDB_HP", "FIR_F15E_AG_HP", "FIR_MISC"};
						attachment = "FIR_GBU12_P_1rnd_M";
					};
					class pylons12: pylons5 {
						hardpoints[] = {"FIR_F15E_AG_HP", "FIR_F15E_AG2000_HP", "FIR_MISC"};
						attachment = "FIR_Empty_P_1rnd_M";
					};
					class pylons13: pylons5 {
						hardpoints[] = {"FIR_F15E_AA_UNDER_HP", "FIR_F15E_AG2000_HP", "FIR_F15E_AGM_HP", "FIR_F15E_SDB_HP", "FIR_F15E_AG_HP", "FIR_MISC"};
						attachment = "FIR_GBU12_P_1rnd_M";
					};

					class pylons14: pylons5 {
						hardpoints[] = {"FIR_F15E_AG_HP", "FIR_MISC"};
						attachment = "FIR_GBU12_P_1rnd_M";
					};
					class pylons15: pylons5 {
						hardpoints[] = {"FIR_F15E_AG_HP", "FIR_MISC"};
						attachment = "FIR_Empty_P_1rnd_M";
					};
					class pylons16: pylons5 {
						hardpoints[] = {"FIR_F15E_AG_HP", "FIR_MISC"};
						attachment = "FIR_GBU12_P_1rnd_M";
					};

					class pylons17: pylons1 {
						hardpoints[] = {"FIR_F15E_AG_HP", "FIR_F15E_AG2000_HP", "FIR_F15E_SDB_HP", "FIR_F15E_AGM_HP", "FIR_F15E_MISC_HP", "FIR_MISC"};
						attachment = "FIR_F15E_Fueltank_P_1rnd_M";
					};
					class pylons18: pylons1 {
						hardpoints[] = {"FIR_F15E_AG_HP", "FIR_F15E_AG2000_HP", "FIR_F15E_SDB_HP", "FIR_F15E_AGM_HP", "FIR_F15E_MISC_HP", "FIR_MISC"};
						attachment = "FIR_F15E_Fueltank_P_1rnd_M";
					};
					class pylons19: pylons1 {
						hardpoints[] = {"FIR_F15E_AG_HP", "FIR_F15E_AG2000_HP", "FIR_F15E_SDB_HP", "FIR_F15E_MISC_HP", "FIR_MISC"};
						attachment = "FIR_F15E_Fueltank_P_1rnd_M";
					};
					class pylons20: pylons1 {
						hardpoints[] = {"FIR_F15E_TGP_HP", "FIR_MISC"};
						attachment = "FIR_SniperXR_2_P_1rnd_M";
					};
				};
			};
		};

		class EventHandlers {
			// init = "[_this select 0] execVM '\FIR_F16\sqs\init\init.sqf'";
			class orbis_config {
				init = "_this spawn orbis_airforce_fnc_F15EInit;";
			};
		};
	};
