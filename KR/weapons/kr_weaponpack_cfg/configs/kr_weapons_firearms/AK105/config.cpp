class CfgPatches
{
	class kr_weapons_firearms_ak105
	{
		units[] = {};
		weapons[] = {"kr_ak105"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
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
	class kr_ak_Base;
	class kr_ak105_Base: kr_ak_Base
	{
		scope = 0;
		model = "\KR\weapons\kr_weaponpack\kr_weapons_firearms\ak105\ak105.p3d";
		weight = 3070;
		itemSize[] = {6,3};
		chamberableFrom[] = {"Ammo_545x39","Ammo_545x39Tracer","kr_Ammo_545x39_BS","kr_Ammo_545x39_US","kr_Ammo_545x39_T","kr_Ammo_545x39_PS","kr_Ammo_545x39_PRS","kr_Ammo_545x39_FMJ","kr_Ammo_545x39_BT","kr_Ammo_545x39_AP"};
		magazines[] = {"Mag_545x39_6L18_45Rnd","Mag_545x39_6L20_30Rnd","Mag_545x39_6L23_30Rnd","Mag_545x39_6L23_plum_30Rnd","Mag_545x39_6L26_45Rnd","Mag_545x39_6L31_60Rnd","Mag_545x39_ak12_std_30Rnd","Mag_545x39_magpul_pmag_30Rnd","Mag_545x39_rpk16_drum_95Rnd","Mag_545x39_saiga_545_10Rnd"};
		barrelArmor = 4.6;
		initSpeedMultiplier = 1.02;
		recoilModifier[] = {2.8,2.8,4.5};
		swayModifier[] = {2.6,2.6,2};
		isShort = 1;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_firearms
		{
			receiverSlotName = "kr_ak_receiver";
			handguardSlotName = "kr_ak_hndgrd";
			buttstockSlotName = "kr_ak_fstock";
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "5.45x39";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.092;
			dispersion = 0.00065;
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.125;
			dispersion = 0.00065;
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300,400,500};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 500;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak105\data\ak105.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak105\data\ak105_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak105\data\ak105_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak105\data\ak105_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak105\data\ak105_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak105: kr_ak105_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_ak105";
		descriptionShort = "$STR_weapons_firearms_ak105_dsc";
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak105\data\ak105_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak105\data\ak105.rvmat"};
	};
};
