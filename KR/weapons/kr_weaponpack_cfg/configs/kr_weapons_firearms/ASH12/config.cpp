class CfgPatches
{
	class kr_weapons_ASH12_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_ASH12"};
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
	class kr_ASH12_Base: Rifle_Base
	{
		PPDOFProperties[] = {1,0.6,50,200,4,10};
		barrelArmor = 3.7;
		initSpeedMultiplier = 1.1;
		recoilModifier[] = {0.7,0.7,0.8};
		swayModifier[] = {2,1.3,1.1};
		adsModiefer[] = {0.1,0,0};
		modes[] = {"SemiAuto","FullAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"ASH12_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"ASH12_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.125;
			dispersion = 0.00075;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"ASH12_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"ASH12_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.092;
			dispersion = 0.00075;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 130;
			type = "shot";
		};

		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {-0.3,0,0};
				orientation[] = {0,0,0};
			};
			class Melee
			{
				position[] = {-0.3,0,-0.02};
				orientation[] = {0,0,0};
			};
		};
	};
};
