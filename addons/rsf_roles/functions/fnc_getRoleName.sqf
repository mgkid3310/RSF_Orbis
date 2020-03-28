params [["_role", "rf"]];

if !(_role in rsf_roles_list) exitWith {};

private _index = rsf_roles_list find _role;
private _rolename = rsf_roles_name select _index;

_rolename
