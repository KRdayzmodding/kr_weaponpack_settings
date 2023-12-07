class CfgPatches
{
	class kr_weapons_shotguns_vpo205_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_weapons_shotguns_vpo205"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;
class cfgWeapons
{
	class kr_ak_Base;
	class kr_vpo205_Base;
	class kr_vpo205_305: kr_vpo205_Base
	{
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Saiga12_Shot_SoundSet","Saiga12_Tail_SoundSet","Saiga12_InteriorTail_SoundSet"};
			reloadTime = 0.1;
			dispersion = 0.00099;
			firespreadangle = 1.5;
			magazineSlot = "magazine";
		};
	};
	class kr_vpo205_430: kr_vpo205_Base
	{
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Saiga12_Shot_SoundSet","Saiga12_Tail_SoundSet","Saiga12_InteriorTail_SoundSet"};
			reloadTime = 0.1;
			dispersion = 0.0009;
			firespreadangle = 1.2;
			magazineSlot = "magazine";
		};
	};
	class kr_vpo205_570: kr_vpo205_Base
	{
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Saiga12_Shot_SoundSet","Saiga12_Tail_SoundSet","Saiga12_InteriorTail_SoundSet"};
			reloadTime = 0.1;
			dispersion = 0.00085;
			firespreadangle = 1.0;
			magazineSlot = "magazine";
		};
	};
};
