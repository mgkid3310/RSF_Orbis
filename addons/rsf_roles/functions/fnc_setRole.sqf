params [["_player", player], ["_role", "rf"]];

if !(_role in rsf_roles_list) exitWith {};

private _weapons = rsf_roles_weapons select (rsf_roles_list find _role);

_player setVariable ["rsf_roles_role", _role, true];
_player setVariable ["rsf_roles_weapons", _weapons];

private ["_cargo"];
{
	_cargo = _x getvariable ["bis_addVirtualWeaponCargo_cargo", [[], [], [], []]];
	_cargo set [1, _weapons];
	_x setvariable ["bis_addVirtualWeaponCargo_cargo", _cargo];
} forEach (missionNamespace getVariable ["rsf_roles_arsenalList", []]);

_player setUnitTrait ["medic", _role isEqualTo "med"];
_player setUnitTrait ["explosiveSpecialist", _role isEqualTo "eng"];
_player setUnitTrait ["engineer", _role in ["eng", "fw", "rw", "uav", "arti", "navy"]];
