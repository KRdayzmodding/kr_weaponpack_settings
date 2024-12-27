class CfgPatches
{
	class kr_weapons_firearms_adar
	{
		units[] = {};
		weapons[] = {"kr_adar_2_15"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data","kr_magazine_556x45"};
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
	class kr_M4A1_Base;
	class kr_adar_2_15: kr_M4A1_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_adar_2_15";
		descriptionShort = "$STR_weapons_firearms_adar_2_15_dsc";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\adar\data\adar_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\adar\data\adar.rvmat"};
		model = "KR\weapons\kr_weaponpack_2\kr_weapons_firearms\adar\adar.p3d";
		itemSize[] = {8,3};
		weight = 3819;
		WeaponLength = 0.772;
		initSpeedMultiplier = 1.0;
		barrelArmor = 15.1;
		recoilModifier[] = {2.6,2.6,4.4};
		swayModifier[] = {2.7,2.7,2.45};
		modes[] = {"SemiAuto"};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {50,100,200};
			discreteDistanceInitIndex = 1;
			modelOptics = "-";
			distanceZoomMin = 50;
			distanceZoomMax = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\adar\data\adar.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\adar\data\adar_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\adar\data\adar_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\adar\data\adar_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\adar\data\adar_destruct.rvmat"}}};
				};
			};
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4A1_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4A1_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.00099;
			magazineSlot = "magazine";
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.56x45";
		};
		class kr_firearms
		{
			barreltype = 3;
			handguardSlotName = "kr_ar15_hndgrd";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
	};
};
