private _timeOld = missionNamespace getVariable ["rsf_roles_timeOld", -1];
private _frameOld = missionNamespace getVariable ["rsf_roles_frameOld", -1];

if ((_timeOld < 0) || (_frameOld < 0)) exitWith {
	missionNamespace setVariable ["rsf_roles_timeOld", time];
	missionNamespace setVariable ["rsf_roles_frameOld", diag_frameNo];
};

// update role status
if (missionNamespace getVariable ["rsf_roles_dialogOpen", false]) then {
	([] call rsf_roles_fnc_checkRoleStatus) params ["_currentCount", "_maximumCount"];

	ctrlSetText [23500, str (_currentCount select 0)];
	ctrlSetText [23501, str (_currentCount select 1)];
	ctrlSetText [23502, str (_currentCount select 2)];
	ctrlSetText [23503, str (_currentCount select 3)];
	ctrlSetText [23504, str (_currentCount select 4)];
	ctrlSetText [23505, str (_currentCount select 5)];
	ctrlSetText [23506, str (_currentCount select 6)];
	ctrlSetText [23507, str (_currentCount select 7)];
	ctrlSetText [23508, str (_currentCount select 8)];
	ctrlSetText [23509, str (_currentCount select 9)];
	ctrlSetText [23510, str (_currentCount select 10)];
	ctrlSetText [23511, str (_currentCount select 11)];

	ctrlSetText [23600, str (_maximumCount select 0)];
	ctrlSetText [23601, str (_maximumCount select 1)];
	ctrlSetText [23602, str (_maximumCount select 2)];
	ctrlSetText [23603, str (_maximumCount select 3)];
	ctrlSetText [23604, str (_maximumCount select 4)];
	ctrlSetText [23605, str (_maximumCount select 5)];
	ctrlSetText [23606, str (_maximumCount select 6)];
	ctrlSetText [23607, str (_maximumCount select 7)];
	ctrlSetText [23608, str (_maximumCount select 8)];
	ctrlSetText [23609, str (_maximumCount select 9)];
	ctrlSetText [23610, str (_maximumCount select 10)];
	ctrlSetText [23611, str (_maximumCount select 11)];
};

// vehicle pilot role check
private _role = player getVariable ["rsf_roles_role", "rf"];
private _vehicle = vehicle player;

if ((_vehicle != player) && (driver _vehicle isEqualTo player)) then {
	private _notAllowedFW = !(_role isEqualTo "fw") && (_simulation isKindOf "Plane");
	private _notAllowedRW = !(_role isEqualTo "rw") && (_simulation isKindOf "Helicopter");

	if (_notAllowedFW || _notAllowedRW) then {
		(_vehicle getVariable ["rsf_roles_lastEngineStatus", [-1, false]]) params ["_lastFrame", "_oldStatus"];

		if ((_lastFrame isEqualTo _frameOld) && !(_oldStatus) && (isEngineOn _vehicle)) then {
			_vehicle engineOn false;
		};
	};

	_vehicle setVariable ["rsf_roles_lastEngineStatus", [diag_frameNo, isEngineOn _vehicle]];
};

missionNamespace setVariable ["rsf_roles_timeOld", time];
missionNamespace setVariable ["rsf_roles_frameOld", diag_frameNo];
