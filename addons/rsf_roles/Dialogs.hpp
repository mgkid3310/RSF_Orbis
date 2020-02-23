class role_base {
	type = 0;
	idc = -1;
	w = safeZoneW * 0.08;
	h = safeZoneH * 0.05;
	style = 2;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {1, 1, 1, 1};
	font = "PuristaBold";
	sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5);
};
class select_base {
	idc = -1;
	w = safeZoneW * 0.02;
	h = safeZoneH * 0.04;
	style = 2;
	borderSize = 0;
	colorBackground[] = {0.4, 0.4, 0.4, 0.8};
	colorBackgroundActive[] = {0.4, 0.4, 0.4, 0.8};
	colorBackgroundDisabled[] = {0.4, 0.4, 0.4, 0.8};
	colorBorder[] = {0.4, 0.4, 0.4, 0.8};
	colorDisabled[] = {0.4, 0.4, 0.4, 0.8};
	colorFocused[] = {0.4, 0.4, 0.4, 0.8};
	colorShadow[] = {0.4, 0.4, 0.4, 0.8};
	colorText[] = {0, 0, 0, 1};
	font = "PuristaBold";
	text = "X";
	offsetPressedX = 0;
	offsetPressedY = 0;
	offsetX = 0;
	offsetY = 0;
	sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
};

class rsf_roles_select_dialog {
	idd = -1;
	onLoad = "[] call rsf_roles_fnc_updateDialog; missionNamespace setVariable ['rsf_roles_dialogOpen', true]";
	onUnload = "missionNamespace setVariable ['rsf_roles_dialogOpen', false]";

	class ControlsBackground {
		class background_title {
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.30;
			y = safeZoneY + safeZoneH * 0.20;
			w = safeZoneW * 0.40;
			h = safeZoneH * 0.08;
			style = 2;
			text = "보직 선택";
			colorBackground[] = {0.4, 0.4, 0.4, 0.8};
			colorText[] = {1,1,1,1};
			font = "PuristaBold";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
		};
		class background_main1: background_title {
			x = safeZoneX + safeZoneW * 0.30;
			y = safeZoneY + safeZoneH * 0.30;
			w = safeZoneW * 0.195;
			h = safeZoneH * 0.50;
			text = "";
		};
		class background_main2: background_main1 {
			x = safeZoneX + safeZoneW * 0.505;
			y = safeZoneY + safeZoneH * 0.30;
		};

	};
	class Controls {
		class title_inf: role_base {
			x = safeZoneX + safeZoneW * 0.30;
			y = safeZoneY + safeZoneH * 0.325;
			w = safeZoneW * 0.195;
			text = "보병";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
		};
		class title_etc: title_inf {
			x = safeZoneX + safeZoneW * 0.505;
			y = safeZoneY + safeZoneH * 0.325;
			text = "지원";
		};

		class role_hq: role_base {
			x = safeZoneX + safeZoneW * 0.30;
			y = safeZoneY + safeZoneH * 0.40;
			text = "HQ";
		};
		class role_rifle: role_base {
			x = safeZoneX + safeZoneW * 0.30;
			y = safeZoneY + safeZoneH * 0.45;
			text = "소총수";
		};
		class role_mg: role_base {
			x = safeZoneX + safeZoneW * 0.30;
			y = safeZoneY + safeZoneH * 0.50;
			text = "MG사수";
		};
		class role_at: role_base {
			x = safeZoneX + safeZoneW * 0.30;
			y = safeZoneY + safeZoneH * 0.55;
			text = "AT / AA";
		};
		class role_engineer: role_base {
			x = safeZoneX + safeZoneW * 0.30;
			y = safeZoneY + safeZoneH * 0.60;
			text = "공병";
		};
		class role_medic: role_base {
			x = safeZoneX + safeZoneW * 0.30;
			y = safeZoneY + safeZoneH * 0.65;
			text = "의무병";
		};
		class role_sniper: role_base {
			x = safeZoneX + safeZoneW * 0.30;
			y = safeZoneY + safeZoneH * 0.70;
			text = "저격수";
		};
		class role_fixedwing: role_base {
			x = safeZoneX + safeZoneW * 0.505;
			y = safeZoneY + safeZoneH * 0.40;
			text = "고정익";
		};
		class role_rotarywing_a: role_base {
			x = safeZoneX + safeZoneW * 0.505;
			y = safeZoneY + safeZoneH * 0.45;
			text = "공격헬기";
		};
		class role_rotarywing_t: role_base {
			x = safeZoneX + safeZoneW * 0.505;
			y = safeZoneY + safeZoneH * 0.50;
			text = "수송헬기";
		};
		class role_uav: role_base {
			x = safeZoneX + safeZoneW * 0.505;
			y = safeZoneY + safeZoneH * 0.55;
			text = "무인기";
		};
		class role_tank: role_base {
			x = safeZoneX + safeZoneW * 0.505;
			y = safeZoneY + safeZoneH * 0.60;
			text = "기갑";
		};
		class role_arti: role_base {
			x = safeZoneX + safeZoneW * 0.505;
			y = safeZoneY + safeZoneH * 0.65;
			text = "포병";
		};
		class role_navy: role_base {
			x = safeZoneX + safeZoneW * 0.505;
			y = safeZoneY + safeZoneH * 0.70;
			text = "해군";
		};

		class slash_hq: role_base {
			x = safeZoneX + safeZoneW * 0.42;
			y = safeZoneY + safeZoneH * 0.40;
			w = safeZoneW * 0.02;
			text = "/";
		};
		class slash_rifle: slash_hq {
			x = safeZoneX + safeZoneW * 0.42;
			y = safeZoneY + safeZoneH * 0.45;
		};
		class slash_mg: slash_hq {
			x = safeZoneX + safeZoneW * 0.42;
			y = safeZoneY + safeZoneH * 0.50;
		};
		class slash_at: slash_hq {
			x = safeZoneX + safeZoneW * 0.42;
			y = safeZoneY + safeZoneH * 0.55;
		};
		class slash_engineer: slash_hq {
			x = safeZoneX + safeZoneW * 0.42;
			y = safeZoneY + safeZoneH * 0.60;
		};
		class slash_medic: slash_hq {
			x = safeZoneX + safeZoneW * 0.42;
			y = safeZoneY + safeZoneH * 0.65;
		};
		class slash_sniper: slash_hq {
			x = safeZoneX + safeZoneW * 0.42;
			y = safeZoneY + safeZoneH * 0.70;
		};
		class slash_fixedwing: slash_hq {
			x = safeZoneX + safeZoneW * 0.625;
			y = safeZoneY + safeZoneH * 0.40;
		};
		class slash_rotarywing_a: slash_hq {
			x = safeZoneX + safeZoneW * 0.625;
			y = safeZoneY + safeZoneH * 0.45;
		};
		class slash_rotarywing_t: slash_hq {
			x = safeZoneX + safeZoneW * 0.625;
			y = safeZoneY + safeZoneH * 0.50;
		};
		class slash_uav: slash_hq {
			x = safeZoneX + safeZoneW * 0.625;
			y = safeZoneY + safeZoneH * 0.55;
		};
		class slash_tank: slash_hq {
			x = safeZoneX + safeZoneW * 0.625;
			y = safeZoneY + safeZoneH * 0.60;
		};
		class slash_arti: slash_hq {
			x = safeZoneX + safeZoneW * 0.625;
			y = safeZoneY + safeZoneH * 0.65;
		};
		class slash_navy: slash_hq {
			x = safeZoneX + safeZoneW * 0.625;
			y = safeZoneY + safeZoneH * 0.70;
		};

		class current_hq: slash_hq {
			idc = 23500;
			x = safeZoneX + safeZoneW * 0.40;
			y = safeZoneY + safeZoneH * 0.40;
			text = "0";
		};
		class current_rifle: current_hq {
			idc = 23501;
			x = safeZoneX + safeZoneW * 0.40;
			y = safeZoneY + safeZoneH * 0.45;
		};
		class current_mg: current_hq {
			idc = 23502;
			x = safeZoneX + safeZoneW * 0.40;
			y = safeZoneY + safeZoneH * 0.50;
		};
		class current_at: current_hq {
			idc = 23503;
			x = safeZoneX + safeZoneW * 0.40;
			y = safeZoneY + safeZoneH * 0.55;
		};
		class current_engineer: current_hq {
			idc = 23504;
			x = safeZoneX + safeZoneW * 0.40;
			y = safeZoneY + safeZoneH * 0.60;
		};
		class current_medic: current_hq {
			idc = 23505;
			x = safeZoneX + safeZoneW * 0.40;
			y = safeZoneY + safeZoneH * 0.65;
		};
		class current_sniper: current_hq {
			idc = 23506;
			x = safeZoneX + safeZoneW * 0.4;
			y = safeZoneY + safeZoneH * 0.7;
		};
		class current_fixedwing: current_hq {
			idc = 23507;
			x = safeZoneX + safeZoneW * 0.605;
			y = safeZoneY + safeZoneH * 0.40;
		};
		class current_rotarywing_a: current_hq {
			idc = 23508;
			x = safeZoneX + safeZoneW * 0.605;
			y = safeZoneY + safeZoneH * 0.45;
		};
		class current_rotarywing_t: current_hq {
			idc = 23509;
			x = safeZoneX + safeZoneW * 0.605;
			y = safeZoneY + safeZoneH * 0.50;
		};
		class current_uav: current_hq {
			idc = 23510;
			x = safeZoneX + safeZoneW * 0.605;
			y = safeZoneY + safeZoneH * 0.55;
		};
		class current_tank: current_hq {
			idc = 23511;
			x = safeZoneX + safeZoneW * 0.605;
			y = safeZoneY + safeZoneH * 0.60;
		};
		class current_arti: current_hq {
			idc = 23512;
			x = safeZoneX + safeZoneW * 0.605;
			y = safeZoneY + safeZoneH * 0.65;
		};
		class current_navy: current_hq {
			idc = 23513;
			x = safeZoneX + safeZoneW * 0.605;
			y = safeZoneY + safeZoneH * 0.70;
		};

		class maximum_hq: slash_hq {
			idc = 23600;
			x = safeZoneX + safeZoneW * 0.44;
			y = safeZoneY + safeZoneH * 0.40;
			text = "0";
		};
		class maximum_rifle: maximum_hq {
			idc = 23601;
			x = safeZoneX + safeZoneW * 0.44;
			y = safeZoneY + safeZoneH * 0.45;
		};
		class maximum_mg: maximum_hq {
			idc = 23602;
			x = safeZoneX + safeZoneW * 0.44;
			y = safeZoneY + safeZoneH * 0.50;
		};
		class maximum_at: maximum_hq {
			idc = 23603;
			x = safeZoneX + safeZoneW * 0.44;
			y = safeZoneY + safeZoneH * 0.55;
		};
		class maximum_engineer: maximum_hq {
			idc = 23604;
			x = safeZoneX + safeZoneW * 0.44;
			y = safeZoneY + safeZoneH * 0.60;
		};
		class maximum_medic: maximum_hq {
			idc = 23605;
			x = safeZoneX + safeZoneW * 0.44;
			y = safeZoneY + safeZoneH * 0.65;
		};
		class maximum_sniper: maximum_hq {
			idc = 23606;
			x = safeZoneX + safeZoneW * 0.44;
			y = safeZoneY + safeZoneH * 0.70;
		};
		class maximum_fixedwing: maximum_hq {
			idc = 23607;
			x = safeZoneX + safeZoneW * 0.645;
			y = safeZoneY + safeZoneH * 0.40;
		};
		class maximum_rotarywing_a: maximum_hq {
			idc = 23608;
			x = safeZoneX + safeZoneW * 0.645;
			y = safeZoneY + safeZoneH * 0.45;
		};
		class maximum_rotarywing_t: maximum_hq {
			idc = 23609;
			x = safeZoneX + safeZoneW * 0.645;
			y = safeZoneY + safeZoneH * 0.50;
		};
		class maximum_uav: maximum_hq {
			idc = 23610;
			x = safeZoneX + safeZoneW * 0.645;
			y = safeZoneY + safeZoneH * 0.55;
		};
		class maximum_tank: maximum_hq {
			idc = 23611;
			x = safeZoneX + safeZoneW * 0.645;
			y = safeZoneY + safeZoneH * 0.60;
		};
		class maximum_arti: maximum_hq {
			idc = 23612;
			x = safeZoneX + safeZoneW * 0.645;
			y = safeZoneY + safeZoneH * 0.65;
		};
		class maximum_navy: maximum_hq {
			idc = 23613;
			x = safeZoneX + safeZoneW * 0.645;
			y = safeZoneY + safeZoneH * 0.70;
		};

		class select_hq: select_base {
			type = 1;
			x = safeZoneX + safeZoneW * 0.47;
			y = safeZoneY + safeZoneH * 0.405;
			onButtonClick = "['hq'] call rsf_roles_fnc_roleSelected";
		};
		class select_rifle: select_hq {
			x = safeZoneX + safeZoneW * 0.47;
			y = safeZoneY + safeZoneH * 0.455;
			onButtonClick = "['rf'] call rsf_roles_fnc_roleSelected";
		};
		class select_mg: select_hq {
			x = safeZoneX + safeZoneW * 0.47;
			y = safeZoneY + safeZoneH * 0.505;
			onButtonClick = "['mg'] call rsf_roles_fnc_roleSelected";
		};
		class select_at: select_hq {
			x = safeZoneX + safeZoneW * 0.47;
			y = safeZoneY + safeZoneH * 0.555;
			onButtonClick = "['at'] call rsf_roles_fnc_roleSelected";
		};
		class select_engineer: select_hq {
			x = safeZoneX + safeZoneW * 0.47;
			y = safeZoneY + safeZoneH * 0.605;
			onButtonClick = "['eng'] call rsf_roles_fnc_roleSelected";
		};
		class select_medic: select_hq {
			x = safeZoneX + safeZoneW * 0.47;
			y = safeZoneY + safeZoneH * 0.655;
			onButtonClick = "['med'] call rsf_roles_fnc_roleSelected";
		};
		class select_sniper: select_hq {
			x = safeZoneX + safeZoneW * 0.47;
			y = safeZoneY + safeZoneH * 0.705;
			onButtonClick = "['snp'] call rsf_roles_fnc_roleSelected";
		};
		class select_fixedwing: select_hq {
			x = safeZoneX + safeZoneW * 0.675;
			y = safeZoneY + safeZoneH * 0.405;
			onButtonClick = "['fw'] call rsf_roles_fnc_roleSelected";
		};
		class select_rotarywing_a: select_hq {
			x = safeZoneX + safeZoneW * 0.675;
			y = safeZoneY + safeZoneH * 0.455;
			onButtonClick = "['rw_a'] call rsf_roles_fnc_roleSelected";
		};
		class select_rotarywing_t: select_hq {
			x = safeZoneX + safeZoneW * 0.675;
			y = safeZoneY + safeZoneH * 0.505;
			onButtonClick = "['rw_t'] call rsf_roles_fnc_roleSelected";
		};
		class select_uav: select_hq {
			x = safeZoneX + safeZoneW * 0.675;
			y = safeZoneY + safeZoneH * 0.555;
			onButtonClick = "['uav'] call rsf_roles_fnc_roleSelected";
		};
		class select_tank: select_hq {
			x = safeZoneX + safeZoneW * 0.675;
			y = safeZoneY + safeZoneH * 0.605;
			onButtonClick = "['tank'] call rsf_roles_fnc_roleSelected";
		};
		class select_arti: select_hq {
			x = safeZoneX + safeZoneW * 0.675;
			y = safeZoneY + safeZoneH * 0.655;
			onButtonClick = "['arti'] call rsf_roles_fnc_roleSelected";
		};
		class select_navy: select_hq {
			x = safeZoneX + safeZoneW * 0.675;
			y = safeZoneY + safeZoneH * 0.705;
			onButtonClick = "['navy'] call rsf_roles_fnc_roleSelected";
		};
	};
};
