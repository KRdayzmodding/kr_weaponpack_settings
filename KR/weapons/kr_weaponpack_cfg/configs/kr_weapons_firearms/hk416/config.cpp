class CfgPatches
{
	class kr_weapons_firearms_hk416_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_firearms_hk416"};
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
	class kr_hk416_Base: Rifle_Base
	{
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		class NoiseShoot
		{
			strength = 90;
			type = "shot";
		};
	};
	class kr_hk416_264mm: kr_hk416_Base
	{
		recoilModifier[] = {2.5,2.5,4.7};
		swayModifier[] = {2.4,2.4,2.35};
		adsModiefer[] = {0.1,0,0};
		barrelArmor = 6.1;
		initSpeedMultiplier = 1.0;
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.00085;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.00085;
			magazineSlot = "magazine";
		};
	};
	class kr_hk416_368mm: kr_hk416_Base
	{
		recoilModifier[] = {2.6,2.6,4.6};
		swayModifier[] = {2.6,2.6,2.4};
		adsModiefer[] = {0.1,0,0};
		barrelArmor = 7.1;
		initSpeedMultiplier = 1.1;
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.00075;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.00075;
			magazineSlot = "magazine";
		};
	};
	class kr_hk416_419mm: kr_hk416_Base
	{
		recoilModifier[] = {2.7,2.7,4.4};
		swayModifier[] = {2.7,2.7,2.45};
		adsModiefer[] = {0.1,0,0};
		barrelArmor = 8.1;
		initSpeedMultiplier = 1.2;
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.0007;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.0007;
			magazineSlot = "magazine";
		};
	};
	class kr_hk416_505mm: kr_hk416_Base
	{
		recoilModifier[] = {2.9,2.9,4.3};
		swayModifier[] = {3,3,2.85};
		adsModiefer[] = {0.1,0,0};
		barrelArmor = 9.1;
		initSpeedMultiplier = 1.25;
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.0006;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.0006;
			magazineSlot = "magazine";
		};
	};
};
