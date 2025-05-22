class CfgPatches
{
	class kr_weapons_firearms_an_94
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};

class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class kr_Gunplay_Base;
class cfgWeapons
{
	class kr_ak_Base;
	class kr_an_94_Base: kr_ak_Base
	{
		scope = 0;
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_firearms\an_94\an_94.p3d";
		weight = 3350;
		WeaponLength = 0.73;
		chamberableFrom[] = {"Ammo_545x39","kr_Ammo_545x39_PRS","kr_Ammo_545x39_T","kr_Ammo_545x39_US","kr_Ammo_545x39_FMJ","kr_Ammo_545x39_PS","kr_Ammo_545x39_BT","kr_Ammo_545x39_HP","kr_Ammo_545x39_BS","Ammo_545x39Tracer"};
		magazines[] = {"Mag_545x39_6L18_45Rnd","Mag_545x39_6L20_30Rnd","Mag_545x39_6L23_30Rnd","Mag_545x39_6L23_plum_30Rnd","Mag_545x39_6L26_45Rnd","Mag_545x39_6L31_60Rnd","Mag_545x39_ak12_std_30Rnd","Mag_545x39_magpul_pmag_30Rnd","Mag_545x39_rpk16_drum_95Rnd","Mag_545x39_saiga_545_10Rnd"};
		initSpeedMultiplier = 0.85;
		barrelArmor = 6.5;
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		modes[] = {"SemiAuto","Burst","FullAuto"};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};

		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK74_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK74_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.098;
			dispersion = 0.0028;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"AK74_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK74_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			burst = 2;
			reloadTime = 0.0001;
			dispersion = 0.0001;
			magazineSlot = "magazine";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK74_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK74_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.125;
			dispersion = 0.0028;
			magazineSlot = "magazine";
		};
		class kr_firearms
		{
			buttstockSlotName = "kr_an_94_stock";
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "5.45x39";
		};
		class NoiseShoot
		{
			strength = 110;
			type = "shot";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\an_94\data\an_94.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\an_94\data\an_94_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\an_94\data\an_94_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\an_94\data\an_94_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\an_94\data\an_94_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 300;
		};
	};

	class kr_an_94: kr_an_94_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_an94";
		descriptionShort = "$STR_weapons_firearms_an94_dsc";
		attachments[] = {"kr_muzzle545","weaponOpticsAK","kr_ak_pistolgrip","kr_an_94_stock","weaponOpticsDT","kr_ak_handle","weaponWrap"};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "5.45x39";
		};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\an_94\data\an_94_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\an_94\data\an_94.rvmat"};
	};
};
