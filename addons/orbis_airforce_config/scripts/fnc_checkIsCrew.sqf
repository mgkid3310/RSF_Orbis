private _player = param [0, player];
private _vehicle = param [1, vehicle _player];

private _return = false;
private _role = assignedVehicleRole _player;
if (_player getVariable ["orbis_main_hasAWESomeMain", false]) then {
	_return = [_player, _vehicle] call orbis_main_fnc_isCrew;
} else {
	if (_role isEqualTo []) then {
		_return = _player in [driver _vehicle, gunner _vehicle];
	} else {
		switch (toLower (_role select 0)) do {
			case ("driver"): {
				_return = true;
			};
			case ("turret"): {
				_return = (_role select 1) isEqualTo [0];
			};
		};
	};
};

_return
