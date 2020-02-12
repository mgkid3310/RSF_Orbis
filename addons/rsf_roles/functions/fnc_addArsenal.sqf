params ["_target"];

private _arsenalList = missionNamespace getVariable ["rsf_roles_arsenalList", []];

if (_target in _arsenalList) exitWith {};

private _weapons = player getVariable ["rsf_roles_weapons", []];

["AmmoboxInit", [_target, true]] call BIS_fnc_arsenal;
[_target, [true]] call BIS_fnc_removeVirtualWeaponCargo;
[_target, _weapons] call BIS_fnc_addVirtualWeaponCargo;

_arsenalList pushBack _target;
missionNamespace setVariable ["rsf_roles_arsenalList", _arsenalList, true];
