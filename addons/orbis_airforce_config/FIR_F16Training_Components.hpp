		class Components: Components {
			class TransportPylonsComponent: TransportPylonsComponent {
				class Presets {
					class Clean {
						displayName = "Clean";
						dataname = "Clean";
						attachment[] = {"FIR_Empty_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Empty_P_1rnd_M", "FIR_Empty_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Empty_P_1rnd_M"};
					};
					class Camera {
						displayName = "Camera";
						dataname = "Camera";
						attachment[] = {"FIR_Empty_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Empty_P_1rnd_M", "FIR_SniperXR_1_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Empty_P_1rnd_M"};
					};
					class Ferry {
						displayName = "Ferry";
						dataname = "Ferry";
						attachment[] = {"FIR_Empty_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_F16C_Fueltank_P_1rnd_M", "FIR_F16C_center_Fueltank_P_1rnd_M", "FIR_Empty_P_1rnd_M", "FIR_F16C_Fueltank_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Empty_P_1rnd_M"};
					};
				};
				class pylons: pylons {
					class pylons1: pylons1 {
						hardpoints[] = {"FIR_MISC"};
						attachment = "FIR_Empty_P_1rnd_M";
					};
					class pylons2: pylons2 {
						hardpoints[] = {"FIR_Clean_MISC", "FIR_MISC"};
						attachment = "FIR_Clean_P_1rnd_M";
					};
					class pylons3: pylons3 {
						hardpoints[] = {"FIR_Clean_MISC", "FIR_MISC"};
						attachment = "FIR_Clean_P_1rnd_M";
					};
					class pylons4: pylons4 {
						hardpoints[] = {"FIR_Training_Side", "FIR_Clean_MISC", "FIR_MISC"};
						attachment = "FIR_F16C_Fueltank_P_1rnd_M";
					};
					class pylons5: pylons5 {
						hardpoints[] = {"FIR_Training_Center", "FIR_MISC"};
						attachment = "FIR_F16C_center_Fueltank_P_1rnd_M";
					};
					class pylons6: pylons6 {
						hardpoints[] = {"FIR_Training_Aux", "FIR_MISC"};
						attachment = "FIR_Empty_P_1rnd_M";
					};
					class pylons7: pylons7 {
						hardpoints[] = {"FIR_Training_Side", "FIR_Clean_MISC", "FIR_MISC"};
						attachment = "FIR_F16C_Fueltank_P_1rnd_M";
					};
					class pylons8: pylons8 {
						hardpoints[] = {"FIR_Clean_MISC", "FIR_MISC"};
						attachment = "FIR_Clean_P_1rnd_M";
					};
					class pylons9: pylons9 {
						hardpoints[] = {"FIR_Clean_MISC", "FIR_MISC"};
						attachment = "FIR_Clean_P_1rnd_M";
					};
					class pylons10: pylons10 {
						hardpoints[] = {"FIR_MISC"};
						attachment = "FIR_Empty_P_1rnd_M";
					};
				};
			};
		};
