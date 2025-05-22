class CfgPatches
{
	class kr_weapons_firearms_aek_971
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
	class kr_aek_971_Base: kr_ak_Base
	{
		scope = 0;
		model = "\KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aek_971\aek_971.p3d";
		weight = 3530;
		WeaponLength = 0.88;
		chamberableFrom[] = {"Ammo_545x39","kr_Ammo_545x39_PRS","kr_Ammo_545x39_T","kr_Ammo_545x39_US","kr_Ammo_545x39_FMJ","kr_Ammo_545x39_PS","kr_Ammo_545x39_BT","kr_Ammo_545x39_HP","kr_Ammo_545x39_BS","Ammo_545x39Tracer"};
		magazines[] = {"Mag_545x39_6L18_45Rnd","Mag_545x39_6L20_30Rnd","Mag_545x39_6L23_30Rnd","Mag_545x39_6L23_plum_30Rnd","Mag_545x39_6L26_45Rnd","Mag_545x39_6L31_60Rnd","Mag_545x39_ak12_std_30Rnd","Mag_545x39_magpul_pmag_30Rnd","Mag_545x39_rpk16_drum_95Rnd","Mag_545x39_saiga_545_10Rnd"};
		initSpeedMultiplier = 0.8;
		barrelArmor = 7;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		modes[] = {"SemiAuto","Burst","FullAuto"};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 35;
		};

		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK74_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK74_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.0035;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"AK74_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK74_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			burst = 3;
			reloadTime = 0.065;
			dispersion = 0.0035;
			magazineSlot = "magazine";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK74_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK74_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.125;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class kr_firearms
		{
			receiverSlotName = "";
			handguardSlotName = "";
			buttstockSlotName = "";
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "5.45x39";
		};
		class NoiseShoot
		{
			strength = 85;
			type = "shot";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aek_971\data\aek_971.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aek_971\data\aek_971_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aek_971\data\aek_971_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aek_971\data\aek_971_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aek_971\data\aek_971_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {50,100,200};
			discreteDistanceInitIndex = 1;
			modelOptics = "-";
			distanceZoomMin = 50;
			distanceZoomMax = 200;
		};
	};
	class kr_aek_971: kr_aek_971_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_aek_971";
		descriptionShort = "$STR_weapons_firearms_aek_971_dsc";
		attachments[] = {"weaponOpticsAK","weaponOpticsDT","kr_ak_handle","weaponWrap"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aek_971\data\aek_971_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_firearms\aek_971\data\aek_971.rvmat"};

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 35;
		};

	};
};
