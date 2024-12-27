class CfgPatches
{
	class kr_weapons_firearms_hk417
	{
		units[] = {};
		weapons[] = {"kr_hk417"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_data","kr_data","kr_weapons_firearms_g28"};
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
	class Rifle_Base;
	class kr_g28_Base;
	class kr_hk417: kr_g28_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_hk417";
		model = "\KR\weapons\kr_weaponpack\kr_weapons_firearms\g28\g28.p3d";
		WeaponLength = 0.811549;
		itemSize[] = {8,3};
		weight = 3860;
		recoilModifier[] = {3.2,3.7,6.2};
		swayModifier[] = {2.8,2.8,2.8};
		barrelArmor = 9.8;
		initSpeedMultiplier = 1.15;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\KR\weapons\kr_weaponpack\kr_weapons_firearms\hk417\data\hk417_co.paa"};
		hiddenSelectionsMaterials[] = {"\KR\weapons\kr_weaponpack\kr_weapons_firearms\hk417\data\hk417.rvmat"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x51 (.308)";
		};
		modes[] = {"SemiAuto","FullAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.125;
			dispersion = 0.00065;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.00065;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {50,100,200};
			discreteDistanceInitIndex = 0;
			distanceZoomMin = 50;
			distanceZoomMax = 200;
		};
		class kr_firearms
		{
			barreltype = 1;
			handguardSlotName = "kr_g28_hndgrd";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\hk417\data\hk417.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\hk417\data\hk417.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\hk417\data\hk417_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\hk417\data\hk417_damage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\hk417\data\hk417_destruct.rvmat"}}};
				};
			};
		};
	};
};
