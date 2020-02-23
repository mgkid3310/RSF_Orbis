params [["_role", "rf"]];

if !(_role in rsf_roles_list) exitWith {};

([] call rsf_roles_fnc_checkRoleStatus) params ["_currentCount", "_maximumCount"];
private _index = rsf_roles_list find _role;

if ((_currentCount select _index) < (_maximumCount select _index)) then {
	[player, _role] call rsf_roles_fnc_setRole;
	// closeDialog 1;
};
