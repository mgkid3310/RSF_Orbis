params [["_vehicle", vehicle player]];

if !(isClass (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AMSData")) exitWith {false};
if !(isNumber (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AMSData" >> "AMSEnabled")) exitWith {false};
if !(getNumber (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AMSData" >> "AMSEnabled") > 0) exitWith {false};

true
