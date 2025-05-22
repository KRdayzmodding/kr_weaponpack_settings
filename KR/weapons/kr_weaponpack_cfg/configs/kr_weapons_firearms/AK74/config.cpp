class CfgPatches
{
	class kr_weapons_firearms_ak74
	{
		units[] = {};
		weapons[] = {"kr_ak74","kr_ak74n"};
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
	class kr_ak74_Base: kr_ak_Base
	{
		scope = 0;
		model = "\KR\weapons\kr_weaponpack\kr_weapons_firearms\ak74\ak74.p3d";
		weight = 2700;
		WeaponLength = 0.7;
		chamberableFrom[] = {"Ammo_545x39","kr_Ammo_545x39_PRS","kr_Ammo_545x39_T","kr_Ammo_545x39_US","kr_Ammo_545x39_FMJ","kr_Ammo_545x39_PS","kr_Ammo_545x39_BT","kr_Ammo_545x39_HP","kr_Ammo_545x39_BS","Ammo_545x39Tracer"};
		magazines[] = {"Mag_545x39_6L18_45Rnd","Mag_545x39_6L20_30Rnd","Mag_545x39_6L23_30Rnd","Mag_545x39_6L23_plum_30Rnd","Mag_545x39_6L26_45Rnd","Mag_545x39_6L31_60Rnd","Mag_545x39_ak12_std_30Rnd","Mag_545x39_magpul_pmag_30Rnd","Mag_545x39_rpk16_drum_95Rnd","Mag_545x39_saiga_545_10Rnd"};
		initSpeedMultiplier = 1.0;
		barrelArmor = 8.4;
		recoilModifier[] = {1.25,1.25,1.3};
		swayModifier[] = {1.8,1.6,1.2};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -20;
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK74_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK74_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.00335;
			magazineSlot = "magazine";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK74_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK74_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.00335;
			magazineSlot = "magazine";
		};
		class kr_firearms
		{
			receiverSlotName = "kr_ak_receiver";
			handguardSlotName = "kr_ak_hndgrd";
			buttstockSlotName = "kr_ak_stock";
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.45x39";
		};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak74\data\ak74.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak74\data\ak74_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak74\data\ak74_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak74\data\ak74_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak74\data\ak74_destruct.rvmat"}}};
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
	class kr_ak74: kr_ak74_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_ak74";
		descriptionShort = "$STR_weapons_firearms_ak74_dsc";
		attachments[] = {"kr_muzzle545","kr_ak_hndgrd","kr_ak_receiver","kr_ak_pistolgrip","kr_ak_stock","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5","weaponOptics","weaponOptics1","kr_ak_handle","weaponWrap"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak74\data\ak74_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak74\data\ak74.rvmat"};
	};
	class kr_ak74n: kr_ak74_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_ak74n";
		descriptionShort = "$STR_weapons_firearms_ak74n_dsc";
		attachments[] = {"kr_muzzle545","kr_ak_hndgrd","weaponOpticsAK","kr_ak_receiver","kr_ak_pistolgrip","kr_ak_stock","weaponHolo1","weaponHolo2","weaponHolo3","weaponHolo4","weaponHolo5","weaponOptics","weaponOptics1","weaponOpticsDT","kr_ak_handle","weaponWrap"};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "5.45x39";
		};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak74\data\ak74_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\ak74\data\ak74.rvmat"};
	};
};
