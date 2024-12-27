class CfgPatches
{
	class kr_magazine_366
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_magazine_Base"};
		magazines[] = {"Mag_366_vpo215_4Rnd"};
	};
};
class kr_Gunplay_Base;
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_366_Base: kr_magazine_Base
	{
		ammoItems[] = {"kr_Ammo_366TKM_FMJ","kr_Ammo_366TKM_EKO","kr_Ammo_366TKM_custom_ap","kr_Ammo_366TKM_Geksa"};
		ammo = "Bullet_366tkm_FMJ";
		recoilModifier[] = {1.0,1.0,0.95};
		weightPerQuantityUnit = 35.0;
		tracersEvery = 0;
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = ".366 TKM";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class Mag_366_vpo215_4Rnd: kr_magazine_366_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_366_vpo215";
		descriptionShort = "$STR_kr_magazines_366_vpo215_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\magazine\366\Mag_366_vpo215_4Rnd.p3d";
		weight = 200;
		itemSize[] = {1,1};
		count = 4;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\366\data\vpo215_mag_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\366\data\vpo215_mag.rvmat"};
		soundImpactType = "metal";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = ".366 TKM";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\366\data\vpo215_mag.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\366\data\vpo215_mag_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\366\data\vpo215_mag_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\366\data\vpo215_mag_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\366\data\vpo215_mag_destruct.rvmat"}}};
				};
			};
		};
	};
};
