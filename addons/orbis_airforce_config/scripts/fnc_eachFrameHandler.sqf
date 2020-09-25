private _timeOld = missionNamespace getVariable ["orbis_airforce_timeOld", -1];
private _frameOld = missionNamespace getVariable ["orbis_airforce_frameOld", -1];

if ((_timeOld < 0) || (_frameOld < 0)) exitWith {
	missionNamespace setVariable ["orbis_airforce_timeOld", time];
	missionNamespace setVariable ["orbis_airforce_frameOld", diag_frameNo];
};
if !(diag_frameNo > _frameOld) exitWith {};

private _vehicle = vehicle player;
if (_vehicle isKindOf "Plane") then {
	// [_vehicle] call orbis_airforce_fnc_addLoadoutToFIR;

	if (isNull (uiNamespace getVariable ["ace_laser_display", displayNull])) then {
		[player] call ace_laser_fnc_showVehicleHud;
	};
};

orbis_airforce_projectileList = orbis_airforce_projectileList select {alive _x};

missionNamespace setVariable ["orbis_airforce_timeOld", time];
missionNamespace setVariable ["orbis_airforce_frameOld", diag_frameNo];
