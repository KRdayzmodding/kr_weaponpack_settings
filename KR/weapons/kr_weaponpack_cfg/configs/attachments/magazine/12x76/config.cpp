class CfgPatches
{
	class kr_magazine_12x76
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_magazine_Base"};
		magazines[] = {"Mag_12x76_izhmash_Sb5_5Rnd","Mag_12x76_vpo205_std_8Rnd","Mag_12x76_promag_sai_02_10Rnd","Mag_12x76_maxrounds_powermag_20Rnd"};
	};
};
class kr_Gunplay_Base;
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_12x76_Base: kr_magazine_Base
	{
		ammoItems[] = {"kr_Ammo_12x76_buckshot_5","kr_Ammo_12x76_buckshot_7","kr_Ammo_12x76_buckshot_8","kr_Ammo_12x76_RIP","kr_Ammo_12x76_FTX_custom","kr_Ammo_12x76_lead_slug","kr_Ammo_12x76_AP20","kr_Ammo_12x76_Grizzly40","kr_Ammo_12x76_frag_12","kr_Ammo_12x76_devastator","Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		ammo = "Bullet_12x76_buckshot_5";
		weightPerQuantityUnit = 35.0;
		tracersEvery = 0;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "12x76";
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
	class Mag_12x76_izhmash_Sb5_5Rnd: kr_magazine_12x76_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_12x76_izhmash_Sb5";
		descriptionShort = "$STR_kr_magazines_12x76_izhmash_Sb5_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\magazine\12x76\Mag_12x76_izhmash_Sb5_5Rnd.p3d";
		weight = 150;
		itemSize[] = {1,2};
		count = 5;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\izhmash_Sb5_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\izhmash_Sb5.rvmat"};
		soundImpactType = "metal";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "12x76";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\izhmash_Sb5.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\izhmash_Sb5_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\izhmash_Sb5_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\izhmash_Sb5_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\izhmash_Sb5_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_12x76_vpo205_std_8Rnd: kr_magazine_12x76_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_12x76_vpo205_std";
		descriptionShort = "$STR_kr_magazines_12x76_vpo205_std_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\magazine\12x76\Mag_12x76_vpo205_std_8Rnd.p3d";
		weight = 150;
		itemSize[] = {1,3};
		count = 8;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\vpo205_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\vpo205_std.rvmat"};
		soundImpactType = "metal";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "12x76";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\vpo205_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\vpo205_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\vpo205_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\vpo205_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\vpo205_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_12x76_promag_sai_02_10Rnd: kr_magazine_12x76_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_12x76_promag_sai_02";
		descriptionShort = "$STR_kr_magazines_12x76_promag_sai_02_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\magazine\12x76\Mag_12x76_promag_sai_02_10Rnd.p3d";
		weight = 150;
		itemSize[] = {1,3};
		count = 10;
		swayModifier[] = {1,1.15,1.15};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\promag_sai_02_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\promag_sai_02.rvmat"};
		soundImpactType = "metal";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "12x76";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\promag_sai_02.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\promag_sai_02_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\promag_sai_02_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\promag_sai_02_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\promag_sai_02_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_12x76_maxrounds_powermag_20Rnd: kr_magazine_12x76_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_12x76_maxrounds_powermag";
		descriptionShort = "$STR_kr_magazines_12x76_maxrounds_powermag_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\magazine\12x76\Mag_12x76_maxrounds_powermag_20Rnd.p3d";
		weight = 660;
		itemSize[] = {3,3};
		count = 20;
		swayModifier[] = {1.0,1.25,1.25};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\maxrounds_powermag_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\maxrounds_powermag.rvmat"};
		soundImpactType = "metal";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -15;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "12x76";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\maxrounds_powermag.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\maxrounds_powermag_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\maxrounds_powermag_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\maxrounds_powermag_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\12x76\data\maxrounds_powermag_destruct.rvmat"}}};
				};
			};
		};
	};
};
