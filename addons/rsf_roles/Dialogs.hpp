class role_base {
	type = 0;
	idc = -1;
	w = safeZoneW * 0.08;
	h = safeZoneH * 0.05;
	style = 2;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "PuristaBold";
	sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5);
};
class select_base {
	idc = -1;
	w = safeZoneW * 0.02;
	h = safeZoneH * 0.04;
	style = 2;
	borderSize = 0;
	colorBackground[] = {0.4,0.4,0.4,0.8};
	colorBackgroundActive[] = {0.4,0.4,0.4,0.8};
	colorBackgroundDisabled[] = {0.4,0.4,0.4,0.8};
	colorBorder[] = {0.4,0.4,0.4,0.8};
	colorDisabled[] = {0.4,0.4,0.4,0.8};
	colorFocused[] = {0.4,0.4,0.4,0.8};
	colorShadow[] = {0.4,0.4,0.4,0.8};
	colorText[] = {0,0,0,1};
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
			x = safeZoneX + safeZoneW * 0.3;
			y = safeZoneY + safeZoneH * 0.2;
			w = safeZoneW * 0.4;
			h = safeZoneH * 0.08;
			style = 2;
			text = "보직 선택";
			colorBackground[] = {0.4,0.4,0.4,0.8};
			colorText[] = {1,1,1,1};
			font = "PuristaBold";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
		};
		class background_main1: background_title {
			x = safeZoneX + safeZoneW * 0.3;
			y = safeZoneY + safeZoneH * 0.3;
			w = safeZoneW * 0.195;
			h = safeZoneH * 0.5;
			text = "";
		};
		class background_main2: background_main1 {
			x = safeZoneX + safeZoneW * 0.505;
			y = safeZoneY + safeZoneH * 0.3;
		};

	};
	class Controls {
		class title_inf: role_base {
			x = safeZoneX + safeZoneW * 0.3;
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
			x = safeZoneX + safeZoneW * 0.3;
			y = safeZoneY + safeZoneH * 0.4;
			text = "HQ";
		};
		class role_rifle: role_base {
			x = safeZoneX + safeZoneW * 0.3;
			y = safeZoneY + safeZoneH * 0.45;
			text = "소총수";
		};
		class role_mg: role_base {
			x = safeZoneX + safeZoneW * 0.3;
			y = safeZoneY + safeZoneH * 0.5;
			text = "MG사수";
		};
		class role_at: role_base {
			x = safeZoneX + safeZoneW * 0.3;
			y = safeZoneY + safeZoneH * 0.55;
			text = "AT / AA";
		};
		class role_engineer: role_base {
			x = safeZoneX + safeZoneW * 0.3;
			y = safeZoneY + safeZoneH * 0.6;
			text = "공병";
		};
		class role_medic: role_base {
			x = safeZoneX + safeZoneW * 0.3;
			y = safeZoneY + safeZoneH * 0.65;
			text = "의무병";
		};
		class role_sniper: role_base {
			x = safeZoneX + safeZoneW * 0.3;
			y = safeZoneY + safeZoneH * 0.7;
			text = "저격수";
		};
		class role_fixedwing: role_base {
			x = safeZoneX + safeZoneW * 0.505;
			y = safeZoneY + safeZoneH * 0.4;
			text = "고정익";
		};
		class role_rotarywing: role_base {
			x = safeZoneX + safeZoneW * 0.505;
			y = safeZoneY + safeZoneH * 0.45;
			text = "회전익";
		};
		class role_uav: role_base {
			x = safeZoneX + safeZoneW * 0.505;
			y = safeZoneY + safeZoneH * 0.5;
			text = "무인기";
		};
		class role_arti: role_base {
			x = safeZoneX + safeZoneW * 0.505;
			y = safeZoneY + safeZoneH * 0.6;
			text = "포병";
		};
		class role_navy: role_base {
			x = safeZoneX + safeZoneW * 0.505;
			y = safeZoneY + safeZoneH * 0.65;
			text = "해군";
		};

		class slash_hq: role_base {
			x = safeZoneX + safeZoneW * 0.42;
			y = safeZoneY + safeZoneH * 0.4;
			w = safeZoneW * 0.02;
			text = "/";
		};
		class slash_rifle: slash_hq {
			x = safeZoneX + safeZoneW * 0.42;
			y = safeZoneY + safeZoneH * 0.45;
		};
		class slash_mg: slash_hq {
			x = safeZoneX + safeZoneW * 0.42;
			y = safeZoneY + safeZoneH * 0.5;
		};
		class slash_at: slash_hq {
			x = safeZoneX + safeZoneW * 0.42;
			y = safeZoneY + safeZoneH * 0.55;
		};
		class slash_engineer: slash_hq {
			x = safeZoneX + safeZoneW * 0.42;
			y = safeZoneY + safeZoneH * 0.6;
		};
		class slash_medic: slash_hq {
			x = safeZoneX + safeZoneW * 0.42;
			y = safeZoneY + safeZoneH * 0.65;
		};
		class slash_sniper: slash_hq {
			x = safeZoneX + safeZoneW * 0.42;
			y = safeZoneY + safeZoneH * 0.7;
		};
		class slash_fixedwing: slash_hq {
			x = safeZoneX + safeZoneW * 0.625;
			y = safeZoneY + safeZoneH * 0.4;
		};
		class slash_rotarywing: slash_hq {
			x = safeZoneX + safeZoneW * 0.625;
			y = safeZoneY + safeZoneH * 0.45;
		};
		class slash_uav: slash_hq {
			x = safeZoneX + safeZoneW * 0.625;
			y = safeZoneY + safeZoneH * 0.5;
		};
		class slash_arti: slash_hq {
			x = safeZoneX + safeZoneW * 0.625;
			y = safeZoneY + safeZoneH * 0.6;
		};
		class slash_navy: slash_hq {
			x = safeZoneX + safeZoneW * 0.625;
			y = safeZoneY + safeZoneH * 0.65;
		};

		class current_hq: slash_hq {
			idc = 23500;
			x = safeZoneX + safeZoneW * 0.4;
			y = safeZoneY + safeZoneH * 0.4;
			text = "0";
		};
		class current_rifle: current_hq {
			idc = 23501;
			x = safeZoneX + safeZoneW * 0.4;
			y = safeZoneY + safeZoneH * 0.45;
		};
		class current_mg: current_hq {
			idc = 23502;
			x = safeZoneX + safeZoneW * 0.4;
			y = safeZoneY + safeZoneH * 0.5;
		};
		class current_at: current_hq {
			idc = 23503;
			x = safeZoneX + safeZoneW * 0.4;
			y = safeZoneY + safeZoneH * 0.55;
		};
		class current_engineer: current_hq {
			idc = 23504;
			x = safeZoneX + safeZoneW * 0.4;
			y = safeZoneY + safeZoneH * 0.6;
		};
		class current_medic: current_hq {
			idc = 23505;
			x = safeZoneX + safeZoneW * 0.4;
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
			y = safeZoneY + safeZoneH * 0.4;
		};
		class current_rotarywing: current_hq {
			idc = 23508;
			x = safeZoneX + safeZoneW * 0.605;
			y = safeZoneY + safeZoneH * 0.45;
		};
		class current_uav: current_hq {
			idc = 23509;
			x = safeZoneX + safeZoneW * 0.605;
			y = safeZoneY + safeZoneH * 0.5;
		};
		class current_arti: current_hq {
			idc = 23510;
			x = safeZoneX + safeZoneW * 0.605;
			y = safeZoneY + safeZoneH * 0.6;
		};
		class current_navy: current_hq {
			idc = 23511;
			x = safeZoneX + safeZoneW * 0.605;
			y = safeZoneY + safeZoneH * 0.65;
		};

		class maximum_hq: slash_hq {
			idc = 23600;
			x = safeZoneX + safeZoneW * 0.44;
			y = safeZoneY + safeZoneH * 0.4;
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
			y = safeZoneY + safeZoneH * 0.5;
		};
		class maximum_at: maximum_hq {
			idc = 23603;
			x = safeZoneX + safeZoneW * 0.44;
			y = safeZoneY + safeZoneH * 0.55;
		};
		class maximum_engineer: maximum_hq {
			idc = 23604;
			x = safeZoneX + safeZoneW * 0.44;
			y = safeZoneY + safeZoneH * 0.6;
		};
		class maximum_medic: maximum_hq {
			idc = 23605;
			x = safeZoneX + safeZoneW * 0.44;
			y = safeZoneY + safeZoneH * 0.65;
		};
		class maximum_sniper: maximum_hq {
			idc = 23606;
			x = safeZoneX + safeZoneW * 0.44;
			y = safeZoneY + safeZoneH * 0.7;
		};
		class maximum_fixedwing: maximum_hq {
			idc = 23607;
			x = safeZoneX + safeZoneW * 0.645;
			y = safeZoneY + safeZoneH * 0.4;
		};
		class maximum_rotarywing: maximum_hq {
			idc = 23608;
			x = safeZoneX + safeZoneW * 0.645;
			y = safeZoneY + safeZoneH * 0.45;
		};
		class maximum_uav: maximum_hq {
			idc = 23609;
			x = safeZoneX + safeZoneW * 0.645;
			y = safeZoneY + safeZoneH * 0.5;
		};
		class maximum_arti: maximum_hq {
			idc = 23610;
			x = safeZoneX + safeZoneW * 0.645;
			y = safeZoneY + safeZoneH * 0.6;
		};
		class maximum_navy: maximum_hq {
			idc = 23611;
			x = safeZoneX + safeZoneW * 0.645;
			y = safeZoneY + safeZoneH * 0.65;
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
		class select_rotarywing: select_hq {
			x = safeZoneX + safeZoneW * 0.675;
			y = safeZoneY + safeZoneH * 0.455;
			onButtonClick = "['rw'] call rsf_roles_fnc_roleSelected";
		};
		class select_uav: select_hq {
			x = safeZoneX + safeZoneW * 0.675;
			y = safeZoneY + safeZoneH * 0.505;
			onButtonClick = "['uav'] call rsf_roles_fnc_roleSelected";
		};
		class select_arti: select_hq {
			x = safeZoneX + safeZoneW * 0.675;
			y = safeZoneY + safeZoneH * 0.605;
			onButtonClick = "['arti'] call rsf_roles_fnc_roleSelected";
		};
		class select_navy: select_hq {
			x = safeZoneX + safeZoneW * 0.675;
			y = safeZoneY + safeZoneH * 0.655;
			onButtonClick = "['navy'] call rsf_roles_fnc_roleSelected";
		};
	};
};
