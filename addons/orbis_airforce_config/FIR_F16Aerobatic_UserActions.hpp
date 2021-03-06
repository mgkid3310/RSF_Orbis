		class UserActions: UserActions {
			class smoke_off {
				displayName = "Turn off Smoke";
				position = "pos cano";
				priority = 5.9;
				onlyforplayer = 1;
				showWindow = 1;
				hideOnUse = 1;
				radius = 5;
				condition = "(player in this) && (isEngineOn this) && (this getVariable ['smokeReady', true]) && (this getVariable ['smokeMod', 'off'] != 'off')";
				statement = "hintSilent 'Smoke Off'; ['toggleSmoke', [this, 'off', [0, 0, 0, 0]]] call CBA_fnc_globalEvent";
			};
			class smoke_on_white: smoke_off {
				displayName = "Turn on White Smoke";
				showWindow = 0;
				condition = "(player in this) && (isEngineOn this)  && (this getVariable ['smokeReady', true]) && (this getVariable ['smokeMod', 'off'] != 'white')";
				statement = "hintSilent 'White Smoke'; ['toggleSmoke', [this, 'white', [1, 1, 1, 0.15]]] call CBA_fnc_globalEvent";
			};
			class smoke_on_red: smoke_on_white {
				displayName = "Turn on Red Smoke";
				condition = "(player in this) && (isEngineOn this)  && (this getVariable ['smokeReady', true]) && (this getVariable ['smokeMod', 'off'] != 'red')";
				statement = "hintSilent 'Red Smoke'; ['toggleSmoke', [this, 'red', [0.8, 0.0, 0.0, 0.15]]] call CBA_fnc_globalEvent";
			};
			/* class smoke_on_green: smoke_on_white {
				displayName = "Turn on Green Smoke";
				condition = "(player in this) && (isEngineOn this)  && (this getVariable ['smokeReady', true]) && (this getVariable ['smokeMod', 'off'] != 'green')";
				statement = "hintSilent 'Green Smoke'; ['toggleSmoke', [this, 'green', [0.0, 0.8, 0.0, 0.15]]] call CBA_fnc_globalEvent";
			}; */
			class smoke_on_blue: smoke_on_white {
				displayName = "Turn on Blue Smoke";
				condition = "(player in this) && (isEngineOn this)  && (this getVariable ['smokeReady', true]) && (this getVariable ['smokeMod', 'off'] != 'blue')";
				statement = "hintSilent 'Blue Smoke'; ['toggleSmoke', [this, 'blue', [0.0, 0.0, 0.8, 0.15]]] call CBA_fnc_globalEvent";
			};
		};
