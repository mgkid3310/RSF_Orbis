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

rsf_roles_counts = [
	[[1, 1]],
	[[1, 99]],
	[[1, 4]],
	[[1, 4]],
	[[1, 4]],
	[[1, 10]],
	[[1, 6]],
	[[1, 1], [11, 2]],
	[[1, 3], [11, 4], [21, 5]],
	[[15, 1]],
	[[1, 1], [16, 2]],
	[[20, 3]]
];

rsf_roles_weapons = [
	rsf_roles_weaponsPistol,
	rsf_roles_weaponsPistol + rsf_roles_weaponsRifle,
	rsf_roles_weaponsPistol + rsf_roles_weaponsMG,
	rsf_roles_weaponsPistol + rsf_roles_weaponsRifle + rsf_roles_weaponsLauncher,
	rsf_roles_weaponsPistol + rsf_roles_weaponsSMG,
	rsf_roles_weaponsPistol + rsf_roles_weaponsRifle,
	rsf_roles_weaponsPistol + rsf_roles_weaponsSniper,
	rsf_roles_weaponsPistol + rsf_roles_weaponsSMG,
	rsf_roles_weaponsPistol + rsf_roles_weaponsSMG,
	rsf_roles_weaponsPistol + rsf_roles_weaponsSMG,
	rsf_roles_weaponsPistol + rsf_roles_weaponsSMG,
	rsf_roles_weaponsPistol + rsf_roles_weaponsSMG
];
