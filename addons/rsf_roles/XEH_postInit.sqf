rsf_roles_list = [
	"hq",
	"rf",
	"mg",
	"at",
	"eng",
	"med",
	"snp",
	"fw",
	"rw",
	"uav",
	"arti",
	"navy"
];

rsf_roles_weapons = [
	["arifle_Mk20_GL_F"],
	["arifle_Mk20_GL_plain_F", "arifle_Mk20C_ACO_F"],
	["arifle_Mk20_GL_F"],
	[],
	[],
	[],
	[],
	[],
	[],
	[],
	[],
	[]
];

// add EventHandlers
addMissionEventHandler ["EachFrame", {[] call rsf_roles_fnc_eachFrameHandler}];
