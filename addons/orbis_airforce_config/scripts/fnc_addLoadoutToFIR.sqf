params [["_vehicle", vehicle player]];

if !([_vehicle] call orbis_airforce_fnc_hasAMS) exitWith {};

private _className = typeOf _vehicle;

private _presets = profileNamespace getVariable ["ace_pylons_aircraftLoadouts", []];
private _aircraftPresets = _presets select {(_x select 3) == _className};

private _customPreset = getText (configFile >> "CfgVehicles" >> _className >> "AMSData" >> "CustomPreset");
private _customPresetAttachment = getText (configFile >> "CfgVehicles" >> _className >> "AMSData" >> "CustomPresetAttachment");

private _customPresetNames = profileNamespace getVariable [_customPreset, []];
private _customPresetLoadouts = profileNamespace getVariable [_customPresetAttachment, []];

{
	if !((_x select 0) in _customPresetNames) then {
		_customPresetNames pushBack (_x select 0);
		_customPresetLoadouts pushBack (_x select 1);
		systemChat format ["'%1' exported to AMS", _x select 0];
	} else {
		systemChat format ["'%1' already exists in AMS", _x select 0];
	};
} forEach _aircraftPresets;

profileNamespace setVariable [_customPreset, _customPresetNames];
profileNamespace setVariable [_customPresetAttachment, _customPresetLoadouts];
