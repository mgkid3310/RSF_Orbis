params ["_targetPos", ["_maxDistance", 1]];

private _spots = [];
{
	_x params ["_obj", "_owner", "_laserMethod", "_emitterWavelength", "_laserCode", "_divergence"];

	if (alive _obj) then {

		private _laser = [];
		switch (true) do {
			case (_laserMethod isEqualType ""): {
				_laser = _x call (missionNamespace getVariable [_laserMethod, []]);
			};
			case (_laserMethod isEqualType {}): {
				_laser = _x call _laserMethod;
			};
			case (_laserMethod isEqualType []): {
				if (count _laserMethod isEqualTo 2) then {
					_laser = [AGLtoASL (_obj modelToWorldVisual (_laserMethod select 0)), _obj weaponDirection (_laserMethod select 1)];
				} else {
					if (count _laserMethod isEqualTo 3) then {
						_laser = [AGLtoASL (_obj modelToWorldVisual (_laserMethod select 0)), (AGLtoASL (_obj modelToWorldVisual (_laserMethod select 1))) vectorFromTo (AGLtoASL (_obj modelToWorldVisual (_laserMethod select 2)))];
					};
				};
			};
			default {};
		};

		if ((_laser isEqualTo []) || (_laser isEqualTo [-1, -1])) exitWith {};
		_laser params [["_laserPos", [], [[]], 3], ["_laserDir", [], [[]], 3]];

		if (ace_laser_dispersionCount > 0) then {
			([_laserPos, _laserDir, _divergence, ace_laser_dispersionCount, _obj] call ace_laser_fnc_shootCone) params ["", "", "_resultPositions"];
			{
				_spots pushBack [_x select 0, _owner, _laserCode];
			} forEach _resultPositions;
		} else {
			([_laserPos, _laserDir, _obj] call ace_laser_fnc_shootRay) params ["_resultPos", "_distance"];
			if (_distance > 0) then {
				_spots pushBack [_resultPos, _owner, _laserCode];
			};
		};
	};
} forEach (ace_laser_laserEmitters select 2);

if !(count _spots > 0) exitWith {-1};

private _spotDistances = _spots apply {_targetPos distance (_x select 0)};
private _distanceMin = selectMin _spotDistances;

if (_distanceMin > _maxDistance) exitWith {-1};

private _targetLaser = _spots select (_spotDistances find _distanceMin);
private _targetCode = _targetLaser select 2;

_targetCode
