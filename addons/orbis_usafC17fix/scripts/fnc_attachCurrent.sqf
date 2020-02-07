params ["_carrier"];
private _vehicle = vehicle ACE_player;

private _cargoList = _carrier getVariable ["cargoList", []];

private _vectorDirNew = _carrier vectorWorldToModel vectorDir _vehicle;
private _vectorUpNew = _carrier vectorWorldToModel vectorUp _vehicle;

_vehicle setVariable ["orbis_cargo_fuel", fuel _vehicle, true];
_vehicle setFuel 0;
_vehicle attachTo [_carrier];
_vehicle setVectorDirAndUp [_vectorDirNew, _vectorUpNew];

_vehicle setVariable ["inCargo", true, true];
_cargoList pushBack _vehicle;

hintSilent "Vehicle Attached";

if !(_vehicle getVariable ["hasUnload", false]) then {
	private _action = [
		"detachVehicle",
		"Detach this vehicle",
		"",
		{
			params ["_target", "_player", "_paramArray"];
			detach _target;
			_target setFuel (_target getVariable ["orbis_cargo_fuel", 0]);
			_target setVariable ["inCargo", false, true];
			(_paramArray select 0) setVariable ["cargoList", (((_paramArray select 0) getVariable ["cargoList", []]) - [_target])];
			hintSilent "Vehicle Detached";
		},
		{(_target getVariable ["inCargo", false])},
		{},
		[_carrier],
		[0, 0, 0],
		10
	] call ace_interact_menu_fnc_createAction;

	[
		_vehicle,
		0,
		["ACE_MainActions"],
		_action
	] call ace_interact_menu_fnc_addActionToObject;
};
_vehicle setVariable ["hasUnload", true, true];
_carrier setVariable ["cargoList", _cargoList];
