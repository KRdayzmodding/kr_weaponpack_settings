class CfgPatches
{
	class kr_weapons_lmg_rpk16
	{
		units[] = {};
		weapons[] = {"kr_rpk16_370mm","kr_rpk16_550mm"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};
class kr_Gunplay_Base;
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class kr_ak_Base;
	class kr_rpk16_Base: kr_ak_Base
	{
		scope = 0;
		displayName = "$STR_weapons_firearms_rpk16";
		descriptionShort = "$STR_weapons_firearms_rpk16_dsc";
		attachments[] = {"kr_muzzle545","kr_rpk16_hndgrd","kr_ak_pistolgrip","kr_rpk16_stock","kr_ar_bttstck","weaponHolo1","weaponOptics","kr_ak_handle","weaponWrap"};
		chamberableFrom[] = {"Ammo_545x39","Ammo_545x39Tracer","kr_Ammo_545x39_BS","kr_Ammo_545x39_US","kr_Ammo_545x39_T","kr_Ammo_545x39_PS","kr_Ammo_545x39_PRS","kr_Ammo_545x39_FMJ","kr_Ammo_545x39_BT","kr_Ammo_545x39_AP"};
		magazines[] = {"Mag_545x39_6L18_45Rnd","Mag_545x39_6L20_30Rnd","Mag_545x39_6L23_30Rnd","Mag_545x39_6L23_plum_30Rnd","Mag_545x39_6L26_45Rnd","Mag_545x39_6L31_60Rnd","Mag_545x39_ak12_std_30Rnd","Mag_545x39_magpul_pmag_30Rnd","Mag_545x39_rpk16_drum_95Rnd","Mag_545x39_saiga_545_10Rnd"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_lmg\rpk16\data\rpk16_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_lmg\rpk16\data\rpk16.rvmat"};
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_sight","hide_fgrip_1","hide_light_1"};
		class kr_firearms
		{
			handguardSlotName = "kr_rpk16_hndgrd";
			buttstockSlotName = "kr_rpk16_stock";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {50,100,200,400};
			discreteDistanceInitIndex = 0;
			distanceZoomMin = 50;
			distanceZoomMax = 400;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_lmg\rpk16\data\rpk16.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_lmg\rpk16\data\rpk16_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_lmg\rpk16\data\rpk16_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_lmg\rpk16\data\rpk16_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_lmg\rpk16\data\rpk16_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_rpk16_370mm: kr_rpk16_Base
	{
		scope = 2;
		model = "\KR\weapons\kr_weaponpack\kr_weapons_lmg\rpk16\rpk16_370.p3d";
		weight = 3820;
		WeaponLength = 0.595;
		itemSize[] = {8,3};
		barrelArmor = 8.6;
		initSpeedMultiplier = 1.02;
		recoilModifier[] = {2.8,3.1,4.3};
		swayModifier[] = {2.8,2.8,2.5};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "5.45x39";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.125;
			dispersion = 0.00075;
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.092;
			dispersion = 0.00075;
		};
	};
	class kr_rpk16_550mm: kr_rpk16_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_rpk16_550";
		model = "\KR\weapons\kr_weaponpack\kr_weapons_lmg\rpk16\rpk16_550.p3d";
		weight = 4250;
		WeaponLength = 0.795;
		barrelArmor = 12.0;
		itemSize[] = {9,3};
		initSpeedMultiplier = 1.07;
		recoilModifier[] = {2.8,2.9,4.3};
		swayModifier[] = {2.8,2.8,2.5};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "5.45x39";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.125;
			dispersion = 0.0006;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.092;
			dispersion = 0.0006;
			magazineSlot = "magazine";
		};
	};
};
