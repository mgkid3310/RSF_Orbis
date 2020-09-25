params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

if !(alive _projectile) exitWith {};
if (_projectile in orbis_airforce_projectileList) exitWith {};
orbis_airforce_projectileList pushBack _projectile;

if !([player, _unit] call orbis_airforce_fnc_checkIsCrew) exitWith {};

if (getNumber (configFile >> "CfgWeapons" >> _weapon >> "ace_laser_showHud") isEqualTo 1) then {
	waitUntil {!(alive _projectile) || (([getPosASL missileTarget _projectile] call orbis_airforce_fnc_getTargetCode) > 0)};

	if !(alive _projectile) exitWith {};

	private _displayName = getText (configFile >> "CfgWeapons" >> _weapon >> "displayName");
	private _targetCode = [getPosASL missileTarget _projectile] call orbis_airforce_fnc_getTargetCode;

	systemChat format ["Ammunition (%1) has a laser lock, code: %2", _displayName, _targetCode];
};
