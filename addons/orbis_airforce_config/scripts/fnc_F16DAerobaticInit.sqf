private _vehicle = _this select 0;

/* _vehicle animate ["hp2_hide", 1];
_vehicle animate ["hp3_hide", 1];
_vehicle animate ["hp4_hide", 1];
_vehicle animate ["hp6_hide", 1];
_vehicle animate ["hp7_hide", 1];
_vehicle animate ["hp8_hide", 1]; */

[_vehicle, ["FIR_960rnd_CMFlare_Chaff_Magazine"]] spawn orbis_airforce_fnc_F16Loop;
// [_vehicle] spawn orbis_airforce_fnc_F16AerobaticPostInit;
