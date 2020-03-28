params [["_role", "rf"]];

if !(_role in rsf_roles_list) exitWith {};

private _index = rsf_roles_list find _role;
private _description = rsf_roles_description select _index;

_description
