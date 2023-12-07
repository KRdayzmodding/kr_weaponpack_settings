class CfgPatches
{
	class kr_weapons_firearms_mk47_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_firearms_mk47"};
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
	class Launcher_Base;
	class kr_mk47_Base: Rifle_Base
	{
		PPDOFProperties[] = {1,0.6,50,100,4,10};
		class NoiseShoot
		{
			strength = 82;
			type = "shot";
		};
	};
	class kr_mk47_256mm: kr_mk47_Base
	{
		initSpeedMultiplier = 1.0;
		barrelArmor = 8.8;
		recoilModifier[] = {3.9,3.9,5.9};
		swayModifier[] = {2.8,2.8,2.4};
		adsModiefer[] = {0.1,0,0};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"CR527_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.00085;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"CR527_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.09;
			dispersion = 0.00085;
			magazineSlot = "magazine";
		};
	};
	class kr_mk47_409mm: kr_mk47_Base
	{
		initSpeedMultiplier = 1.2;
		barrelArmor = 10.0;
		recoilModifier[] = {3.5,3.5,5.5};
		swayModifier[] = {3.2,3.2,2.85};
		adsModiefer[] = {0.1,0,0};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"CR527_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.0006;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"CR527_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.09;
			dispersion = 0.0006;
			magazineSlot = "magazine";
		};
	};
};
