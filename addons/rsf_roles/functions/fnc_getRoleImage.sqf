params [["_role", "rf"]];

if !(_role in rsf_roles_list) exitWith {};

private _index = rsf_roles_list find _role;
private _image = rsf_roles_image select _index;

_image
