#include "weaponCategories.sqf"
#include "roleWeaponSettings.sqf"

// add EventHandlers
addMissionEventHandler ["EachFrame", {[] call rsf_roles_fnc_eachFrameHandler}];
