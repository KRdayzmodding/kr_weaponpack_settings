class CfgPatches
{
	class kr_weapons_rifles_mosin_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data","kr_weapons_rifles_mosin"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_InnerMagazine_Base;
	class kr_Mosin_Base: BoltActionRifle_InnerMagazine_Base
	{
		PPDOFProperties[] = {1,0.5,20,170,4,10};
		class kr_discription
		{
			kr_tier = 1;
			kr_caliber = "7.62x54R";
		};
	};
	class kr_Mosin_514mm: kr_Mosin_Base
	{
		barrelArmor = 5.0;
		initSpeedMultiplier = 1.05;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.5,2.5,1.3};
		adsModifier[] = {1,1,1};
		class Single: Mode_Single
		{
			soundSetShot[] = {"Mosin_Shot_SoundSet","Mosin_Tail_SoundSet","Mosin_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Mosin_silencerHomeMade_SoundSet","Mosin_silencerHomeMadeTail_SoundSet","Mosin_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.3;
			dispersion = 0.0007;
			magazineSlot = "magazine";
		};
	};
	class kr_Mosin_730mm: kr_Mosin_Base
	{
		barrelArmor = 6.0;
		initSpeedMultiplier = 1.15;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.5,2.5,1.3};
		adsModifier[] = {1,1,1};
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "7.62x54R";
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"Mosin_Shot_SoundSet","Mosin_Tail_SoundSet","Mosin_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Mosin_silencerHomeMade_SoundSet","Mosin_silencerHomeMadeTail_SoundSet","Mosin_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.3;
			dispersion = 0.0005;
			magazineSlot = "magazine";
		};
	};
	class kr_Mosin_sawed: kr_Mosin_Base
	{
		barrelArmor = 3.0;
		initSpeedMultiplier = 0.8;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.5,2.5,1.3};
		adsModifier[] = {1,1,1};
		class Single: Mode_Single
		{
			soundSetShot[] = {"Mosin_Shot_SoundSet","Mosin_Tail_SoundSet","Mosin_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Mosin_silencerHomeMade_SoundSet","Mosin_silencerHomeMadeTail_SoundSet","Mosin_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.3;
			dispersion = 0.005;
			magazineSlot = "magazine";
		};
	};
};
