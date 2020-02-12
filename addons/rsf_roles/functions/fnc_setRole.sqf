params [["_player", player], ["_role", "rf"]];

if !(_role in rsf_roles_list) exitWith {};

private _weapons = rsf_roles_weapons select (rsf_roles_list find _role);

_player setVariable ["rsf_roles_role", _role, true];
_player setVariable ["rsf_roles_weapons", _weapons];

{
	[_x, [true]] call BIS_fnc_removeVirtualWeaponCargo;
	[_x, _weapons] call BIS_fnc_addVirtualWeaponCargo;
} forEach (missionNamespace getVariable ["rsf_roles_arsenalList", []]);

_player setUnitTrait ["medic", _role isEqualTo "med"];
_player setUnitTrait ["explosiveSpecialist", _role isEqualTo "eng"];
_player setUnitTrait ["engineer", _role in ["eng", "fw", "rw", "uav", "arti", "navy"]];
