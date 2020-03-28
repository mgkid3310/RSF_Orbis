rsf_roles_list = [
	"hq",
	"rf",
	"mg",
	"at",
	"eng",
	"med",
	"snp",
	"fw",
	"rw_a",
	"rw_t",
	"uav",
	"tank",
	"arti",
	"navy"
];

rsf_roles_name = [
	"지휘관",
	"소총수",
	"기관총사수",
	"대전차사수",
	"공병",
	"의무병",
	"저격수",
	"전투기 조종사",
	"공격헬기 조종사",
	"수송헬기 조종사",
	"무인기운용병",
	"전차승무원",
	"포병",
	"선박승무원"
];

rsf_roles_description = [
	"지휘관으로서 작전을 지휘합니다. 권총만 사용할 수 있습니다.",
	"소총수는 분대 주요 화력으로 소총만 사용할 수 있습니다.",
	"기관총사수는 한 번에 많은 탄을 발사하여 제압 사격이 가능합니다. 기관총만 사용할 수 있습니다.",
	"대전차사수는 적 기갑에 대응이 가능한 보병입니다. 소총과 대전차화기만 사용할 수 있습니다.",
	"공병은 차량 수리, 장애물 설치/제거 등 기계적인 지원으로 분대를 지원합니다. SMG만 사용할 수 있습니다.",
	"의무병은 부상병을 치료해 분대의 전투력을 유지합니다. 분대의 지원가로 소총만 사용할 수 있습니다.",
	"저격수는 원거리에서 저격소총으로 적을 제거함으로서 화력을 지원합니다. 저격소총만 사용할 수 있습니다.",
	"전투기 조종사는 전투기를 운용하여 제공권을 장악하며 공대지 화기를 통해 화력 지원이 가능합니다. SMG만 사용할 수 있습니다.",
	"공격헬기 조종사는 공격헬기를 운용하여 전투기보다 좀 더 빠른 공대지 화력 지원이 가능합니다. SMG만 사용할 수 있습니다.",
	"수송헬기 조종사는 이동이 필요한 제대 또는 물품을 수송하며 다른 지점까지 수송 지원을 돕습니다. SMG만 사용할 수 있습니다.",
	"무인기운용병은 UAV, UGV 등 무인장비를 운용하여 정찰, 화력지원 등의 임무를 수행합니다. SMG만 사용할 수 있습니다.",
	"전차승무원은 주력전차, 보병전투지원장갑차 등을 운용하여 전차전 또는 작전지 내 보병수송임무를 수행합니다. SMG만 사용할 수 있습니다.",
	"포병은 박격포, 야포, 자주포 등을 운용하여 고폭탄, 연막탄, 조명탄 등 다양한 형태로 빠르게 보병을 지원할 수 있습니다. SMG만 사용할 수 있습니다.",
	"선박승무원은 고무보트, 고속정 등을 활용하여 해상 이동과 해상에서의 화력지원을 통해 보병을 지원할 수 있습니다. SMG만 사용할 수 있습니다."
];

rsf_roles_image = [
	"<img image='img\hq.paa'>",
	"<img image='img\rf.paa'>",
	"<img image='img\mg.paa'>",
	"<img image='img\at.paa'>",
	"<img image='img\eng.paa'>",
	"<img image='img\med.paa'>",
	"<img image='img\snp.paa'>",
	"<img image='img\fw.paa'>",
	"<img image='img\rw_a.paa'>",
	"<img image='img\rw_t.paa'>",
	"<img image='img\uav.paa'>",
	"<img image='img\navy.paa'>"
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
	[[1, 2]],
	[[1, 1], [11, 2], [21, 3]],
	[[15, 1]],
	[[1, 2], [11, 3], [21, 6]],
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
	rsf_roles_weaponsPistol + rsf_roles_weaponsSMG,
	rsf_roles_weaponsPistol + rsf_roles_weaponsSMG,
	rsf_roles_weaponsPistol + rsf_roles_weaponsSMG
];
