/* orbis_action_addToFIR = [
	"orbis_action_addToFIR",
	"Export to AMS",
	"",
	{[_target] call orbis_airforce_fnc_addLoadoutToFIR},
	{[_target] call orbis_airforce_fnc_hasAMS}
] call ace_interact_menu_fnc_createAction;

orbis_action_addToFIR_classList = [];
["Air", "Init", {
	params ["_vehicle"];
	private _typeOf = typeOf _vehicle;

	if (_typeOf in orbis_action_addToFIR_classList) exitWith {};
	if (!isClass (configFile >> "CfgVehicles" >> _typeOf >> 'Components' >> 'TransportPylonsComponent')) exitWith {};
	if !([_vehicle] call orbis_airforce_fnc_hasAMS) exitWith {};

	orbis_action_addToFIR_classList pushBack _typeOf;
	[_typeOf, 0, ["ACE_MainActions", "ace_pylons_loadoutAction"], orbis_action_addToFIR] call ace_interact_menu_fnc_addActionToClass;
}, true, ["ParachuteBase"], true] call CBA_fnc_addClassEventHandler;

orbis_airforce_projectileList = [];

["toggleSmoke", {_this spawn orbis_airforce_fnc_toggleSmoke}] call CBA_fnc_addEventHandler;
["Air", "Fired", {_this spawn orbis_airforce_fnc_eventWeaponFire}] call CBA_fnc_addClassEventHandler;
addMissionEventHandler ["EachFrame", {[] call orbis_airforce_fnc_eachFrameHandler}]; */
