class CfgPatches
{
	class kr_weapons_smg_mp5_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weapons_smg_mp5"};
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
	class kr_mp5_base: Rifle_Base
	{
		PPDOFProperties[] = {1,0.75,40,180,4,10};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"MP5K_Shot_SoundSet","MP5K_Tail_SoundSet","MP5K_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"MP5K_Shot_SoundSet","MP5K_Tail_SoundSet","MP5K_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"}};
			burst = 3;
			reloadTime = 0.065;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"MP5K_Shot_SoundSet","MP5K_Tail_SoundSet","MP5K_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
	};
	class kr_mp5: kr_mp5_base
	{
		barrelArmor = 6;
		initSpeedMultiplier = 1.2;
		recoilModifier[] = {1.7,1.7,1.7};
		swayModifier[] = {2.1,2.1,1.9};
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "9x19";
		};
	};
	class kr_mp5k: kr_mp5_base
	{
		barrelArmor = 5;
		initSpeedMultiplier = 1.0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.3,1.3,1.2};
		class kr_discription
		{
			kr_tier = 1;
			kr_caliber = "9x19";
		};
	};
	class kr_mp5sd: kr_mp5_base
	{
		barrelArmor = 3.25;
		initSpeedMultiplier = 0.9;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.5,1.5,1.7};
		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "9x19";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"};
			reloadTime = 0.12;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"};
			burst = 3;
			reloadTime = 0.065;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"};
			reloadTime = 0.065;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
	};
};
