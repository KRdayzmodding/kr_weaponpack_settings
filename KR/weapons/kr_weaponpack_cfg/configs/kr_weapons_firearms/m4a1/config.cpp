class CfgPatches
{
	class kr_weapons_firearms_m4_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_firearms_m4"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class kr_M4A1_Base: Rifle_Base
	{
		PPDOFProperties[] = {0,0.6,50,200,4,10};
        magazines[] = {"Mag_556x45_magpulm3_10Rnd","Mag_556x45_magpulm3_20Rnd","Mag_556x45_magpulm3_30Rnd_blck","Mag_556x45_magpulm3_30Rnd_tan","Mag_556x45_magpulm3_40Rnd_blck","Mag_556x45_magpulm3_40Rnd_tan","Mag_556x45_magpulp_60Rnd","Mag_556x45_srfr_mag5_60Rnd","Mag_556x45_srfr_mag5_60Rnd_AP","Mag_556x45_srfr_mag5_100Rnd"};

		class NoiseShoot
		{
			strength = 82;
			type = "shot";
		};
	};
	class kr_m4a1_260mm: kr_M4A1_Base
	{
		initSpeedMultiplier = 0.9;
		barrelArmor = 8.2;
		recoilModifier[] = {2.4,2.4,4.6};
		swayModifier[] = {2.4,2.4,2.35};
		adsModiefer[] = {0.1,0,0};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.00099;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.00099;
			magazineSlot = "magazine";
		};
	};
	class kr_m4a1_370mm: kr_M4A1_Base
	{
		initSpeedMultiplier = 0.95;
		barrelArmor = 9.1;
		recoilModifier[] = {2.5,2.5,4.5};
		swayModifier[] = {2.6,2.6,2.4};
		adsModiefer[] = {0.1,0,0};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.00085;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.00085;
			magazineSlot = "magazine";
		};
	};
	class kr_m4a1_406mm: kr_M4A1_Base
	{
		initSpeedMultiplier = 1.05;
		barrelArmor = 10.1;
		recoilModifier[] = {2.6,2.6,4.4};
		swayModifier[] = {2.7,2.7,2.45};
		adsModiefer[] = {0.1,0,0};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.008;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.0008;
			magazineSlot = "magazine";
		};
	};
	class kr_m4a1_457mm: kr_M4A1_Base
	{
		initSpeedMultiplier = 1.2;
		barrelArmor = 11.0;
		recoilModifier[] = {2.7,2.7,4.3};
		swayModifier[] = {2.8,2.8,2.65};
		adsModiefer[] = {0.1,0,0};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.0007;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.0007;
			magazineSlot = "magazine";
		};
	};
	class kr_m4a1_508mm: kr_M4A1_Base
	{
		initSpeedMultiplier = 1.3;
		barrelArmor = 12.0;
		recoilModifier[] = {2.8,2.8,4.2};
		swayModifier[] = {3,3,2.85};
		adsModiefer[] = {0.1,0,0};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.00065;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.00065;
			magazineSlot = "magazine";
		};
	};
};
