private _players = (allPlayers - entities "HeadlessClient_F") select {side _x isEqualTo side player};
private _playerCount = count (allPlayers - entities "HeadlessClient_F");

private _currentCount = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
private _maximumCount = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
private _maximumAdd = missionNamespace getVariable ["rsf_roles_additionalSlots", [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]];

private ["_role", "_index"];
{
	_role = _x getVariable ["rsf_roles_role", "rf"];
	if (_role in rsf_roles_list) then {
		_index = rsf_roles_list find _role;
	} else {
		_index = 1;
	};
	_currentCount set [_index, (_currentCount select _index) + 1];
} forEach _players;

private ["_steps", "_currentStep"];
{
	_steps = rsf_roles_counts select _forEachIndex;
	if (_steps isEqualTo []) then {
		_steps = [[0, 0], [1, 0]];
	};

	_currentStep = 0;
	while {((_steps select (_currentStep + 1)) select 0) <= _playerCount} do {
		_currentStep = _currentStep + 1;
	};

	_maximumCount set [_forEachIndex, ((_steps select _currentStep) select 1) + (_maximumAdd select _forEachIndex)];
} forEach _maximumCount;

missionNamespace setVariable ["rsf_roles_currentCount", _currentCount];
missionNamespace setVariable ["rsf_roles_maximumCount", _maximumCount];

[_currentCount, _maximumCount]
