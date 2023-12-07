class CfgPatches
{
	class kr_weapons_firearms_9a91_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_firearms_9a91"};
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
	class kr_9a91_Base: Rifle_Base
	{
		barrelArmor = 10.0;
	};
	class kr_9a91: kr_9a91_Base
	{
		recoilModifier[] = {1.5,1.5,1.5};
		swayModifier[] = {2.0,2.0,1.0};
		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "9x39";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"9A91_Shot_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"9A91_silencer_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.0008;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"9A91_Shot_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"9A91_silencer_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"}};
			reloadTime = 0.08;
			dispersion = 0.0008;
			magazineSlot = "magazine";
		};
	};
};
