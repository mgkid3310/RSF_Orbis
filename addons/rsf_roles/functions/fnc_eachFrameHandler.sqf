private _timeOld = missionNamespace getVariable ["rsf_roles_timeOld", -1];
private _frameOld = missionNamespace getVariable ["rsf_roles_frameOld", -1];

if ((_timeOld < 0) || (_frameOld < 0)) exitWith {
	missionNamespace setVariable ["rsf_roles_timeOld", time];
	missionNamespace setVariable ["rsf_roles_frameOld", diag_frameNo];
};

// update role status
if (missionNamespace getVariable ["rsf_roles_dialogOpen", false]) then {
	[] call rsf_roles_fnc_updateDialog;
};

// vehicle pilot role check
private _role = player getVariable ["rsf_roles_role", "rf"];
private _vehicle = vehicle player;

if ((_vehicle != player) && (driver _vehicle isEqualTo player)) then {
	private _notAllowedFW = !(_role isEqualTo "fw") && (_vehicle isKindOf "Plane");
	private _notAllowedRW = !(_role isEqualTo "rw") && (_vehicle isKindOf "Helicopter");

	if ((_notAllowedFW || _notAllowedRW) && (isEngineOn _vehicle)) then {
		_vehicle engineOn false;
	};

	/* if (_notAllowedFW || _notAllowedRW) then {
		(_vehicle getVariable ["rsf_roles_lastEngineStatus", [-1, false]]) params ["_lastFrame", "_oldStatus"];

		if ((_lastFrame isEqualTo _frameOld) && !(_oldStatus) && (isEngineOn _vehicle)) then {
			_vehicle engineOn false;
		};
	};

	_vehicle setVariable ["rsf_roles_lastEngineStatus", [diag_frameNo, isEngineOn _vehicle]]; */
};

missionNamespace setVariable ["rsf_roles_timeOld", time];
missionNamespace setVariable ["rsf_roles_frameOld", diag_frameNo];
