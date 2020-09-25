params ["_vehicle", "_loopData"];
_loopData params [["_flare", 0], ["_turretPath", [-1]]];

while {alive _vehicle} do {
	if (local _vehicle) then {
		private _className = typeOf _vehicle;
		private _class = (configFile >> "CfgVehicles" >> _className);
		private _magazinesAllTurrets = magazinesAllTurrets _vehicle;
		private _magazines = _magazinesAllTurrets apply {_x select 0};

		if !("FIR_M61A2" in getArray (_class >> "weapons")) then {
			if (_vehicle hasWeapon "FIR_M61A2") then {
				_vehicle removeMagazines "FIR_M61A2_511rnd_M";
				_vehicle removeMagazines "FIR_M61A2_TWAS_511rnd_M";
				_vehicle removeMagazines "FIR_M61A2_TWAS_Red_511rnd_M";

				_vehicle removeWeapon "FIR_M61A2";
			};
		};

		if (_flare isEqualType "") then {
			if ("FIR_240rnd_CMFlare_Chaff_Magazine" in _magazines) then {
				if (_turretPath isEqualType []) then {
					_vehicle removeMagazinesTurret ["FIR_240rnd_CMFlare_Chaff_Magazine", _turretPath];
					if (_flare isEqualTo "") then {
						_vehicle removeWeaponTurret ["FIR_CMLauncher", _turretPath];
					} else {
						_vehicle addMagazineTurret [_flare, _turretPath];
					};
				} else {
					_vehicle removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
					if (_flare isEqualTo "") then {
						_vehicle removeWeapon "FIR_CMLauncher";
					} else {
						_vehicle addMagazine _flare;
					};
				};
			};
		};

		private _pylons = getPylonMagazines _vehicle;
		{
			if (toLower (_pylons select (_x select 0)) isEqualTo "fir_clean_p_1rnd_m") then {
				_vehicle animate [_x select 1, 1];
			} else {
				_vehicle animate [_x select 1, 0];
			};
		} forEach [[1, "hp2_hide"], [2, "hp3_hide"], [3, "hp4_hide"], [6, "hp6_hide"], [7, "hp7_hide"], [8, "hp8_hide"]];

		private _fuelcount = {_x == "FIR_F16C_Fueltank_P_1rnd_M"} count _pylons;
		private _fuelcount2 = {_x == "FIR_F16C_center_Fueltank_P_1rnd_M"} count _pylons;
		private _fuelLevel = 0.5 + 0.2 * _fuelcount + 0.1 * _fuelcount2;
		_vehicle setFuel (_fuelLevel min fuel _vehicle);
	};

	private _frameNo = diag_frameNo;
	waitUntil {diag_frameNo > _frameNo};
};
