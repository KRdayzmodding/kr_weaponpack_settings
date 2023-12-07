class CfgPatches
{
	class kr_weapons_firearms_svd_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weapons_firearms_svd"};
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
	class kr_SVD_Base: Rifle_Base
	{
		PPDOFProperties[] = {1,0.5,50,180,4,10};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
	};
	class kr_SVDS: kr_SVD_Base
	{
		barrelArmor = 3.0;
		initSpeedMultiplier = 1.0;
		recoilModifier[] = {2,2,2};
		swayModifier[] = {2,2,2};
		adsModifier[] = {1,1,1};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"SVD_Shot_SoundSet","SVD_Tail_SoundSet","SVD_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"SVD_silencerHomeMade_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorHomeMadeTail_SoundSet"}};
			envShootingDecrease = 0.8;
			envShootingDecreaseExt[] = {0.05,0.05};
			reloadTime = 0.12;
			dispersion = 0.0005;
			magazineSlot = "magazine";
		};
		class kr_discription
		{
			kr_tier = 4;
			kr_caliber = "7.62x54";
		};
	};
	class kr_SVD: kr_SVD_Base
	{
		barrelArmor = 2.6;
		initSpeedMultiplier = 1.0;
		recoilModifier[] = {2,2,2};
		swayModifier[] = {2,2,2};
		adsModifier[] = {1,1,1};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"SVD_Shot_SoundSet","SVD_Tail_SoundSet","SVD_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"SVD_silencerHomeMade_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorHomeMadeTail_SoundSet"}};
			envShootingDecrease = 0.8;
			envShootingDecreaseExt[] = {0.05,0.05};
			reloadTime = 0.12;
			dispersion = 0.0005;
			magazineSlot = "magazine";
		};
		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "7.62x54";
		};
	};
};
