params ["_target"];

private _arsenalList = missionNamespace getVariable ["rsf_roles_arsenalList", []];

if (_target in _arsenalList) exitWith {};

private _weapons = player getVariable ["rsf_roles_weapons", []];

["AmmoboxInit", [_target, true]] call BIS_fnc_arsenal;
private _cargo = _target getvariable ["bis_addVirtualWeaponCargo_cargo", [[], [], [], []]];
_cargo set [1, _weapons];
_target setvariable ["bis_addVirtualWeaponCargo_cargo", _cargo];

_arsenalList pushBack _target;
missionNamespace setVariable ["rsf_roles_arsenalList", _arsenalList, true];
