class CfgPatches
{
	class kr_weapons_firearms_aks74u
	{
		units[] = {};
		weapons[] = {"kr_aks74un","kr_aks74u"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","DZ_Weapons_Firearms"};
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
	class kr_aks74u_Base: kr_ak_Base
	{
		scope = 0;
		model = "\KR\weapons\kr_weaponpack\kr_weapons_firearms\AKS74u\aks74u.p3d";
		itemSize[] = {6,3};
		weight = 2000;
		WeaponLength = 0.45;
		simpleHiddenSelections[] = {"hide_mount","hide_pistolgrip","hide_fgrip_1","hide_fgrip_2","hide_fgrip_3","hide_light_1","hide_light_2","hide_light_3"};
		chamberableFrom[] = {"Ammo_545x39","Ammo_545x39Tracer","kr_Ammo_545x39_BS","kr_Ammo_545x39_HP","kr_Ammo_545x39_US","kr_Ammo_545x39_T","kr_Ammo_545x39_PS","kr_Ammo_545x39_PRS","kr_Ammo_545x39_FMJ","kr_Ammo_545x39_BT","kr_Ammo_545x39_AP"};
		magazines[] = {"Mag_545x39_6L18_45Rnd","Mag_545x39_6L20_30Rnd","Mag_545x39_6L23_30Rnd","Mag_545x39_6L23_plum_30Rnd","Mag_545x39_6L26_45Rnd","Mag_545x39_6L31_60Rnd","Mag_545x39_ak12_std_30Rnd","Mag_545x39_magpul_pmag_30Rnd","Mag_545x39_rpk16_drum_95Rnd","Mag_545x39_saiga_545_10Rnd"};
		barrelArmor = 12;
		initSpeedMultiplier = 0.9;
		recoilModifier[] = {1.1,1.05,1.1};
		swayModifier[] = {1.0,1.0,1.3};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.45x39";
		};
		class kr_firearms
		{
			handguardSlotName = "kr_aks74u_hndgrd";
			buttstockSlotName = "kr_ak_fstock";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -10;
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AKS74U_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AKS74U_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.092;
			dispersion = 0.0041;
			magazineSlot = "magazine";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AKS74U_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AKS74U_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.125;
			dispersion = 0.0041;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 1;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 200;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\AKS74u\data\aks74u.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\AKS74u\data\aks74u_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\AKS74u\data\aks74u_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\AKS74u\data\aks74u_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\AKS74u\data\aks74u_destruct.rvmat"}}};
				};
			};
		};
		class NoiseShoot
		{
			strength = 80;
			type = "shot";
		};
	};
	class kr_aks74un: kr_aks74u_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_aks74un";
		descriptionShort = "$STR_weapons_firearms_aks74un_dsc";
		attachments[] = {"kr_muzzle545","kr_aks74u_hndgrd","weaponOpticsAK","kr_ak_pistolgrip","kr_ak_fstock","weaponOptics","weaponOpticsDT","weaponHolo1","weaponHolo2","kr_ak_handle","weaponWrap"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\AKS74u\data\aks74u_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\AKS74u\data\aks74u.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.45x39";
		};
	};
	class kr_aks74u: kr_aks74u_Base
	{
		scope = 2;
		displayName = "$STR_weapons_firearms_aks74u";
		descriptionShort = "$STR_weapons_firearms_aks74u_dsc";
		attachments[] = {"kr_muzzle545","kr_aks74u_hndgrd","kr_ak_pistolgrip","kr_ak_fstock","weaponOptics","weaponHolo1","weaponHolo2","kr_ak_handle","weaponWrap"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\AKS74u\data\aks74u_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\AKS74u\data\aks74u.rvmat"};
	};
};
