params ["_target"];

_target addAction ["보직 선택", {createDialog "rsf_roles_select_dialog"}, nil, 6, false, true, "", "true", 10];
