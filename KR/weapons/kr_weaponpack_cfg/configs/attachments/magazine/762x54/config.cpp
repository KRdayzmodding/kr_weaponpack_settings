class CfgPatches
{
	class kr_magazine_762x54
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_magazine_Base"};
		magazines[] = {"Mag_762x54_pkp_100Rnd","Mag_762x54_svd_10Rnd","Mag_762x54_svd_20Rnd"};
	};
};
class kr_Gunplay_Base;
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_762x54_Base: kr_magazine_Base
	{
		ammoItems[] = {"kr_Ammo_762x54r_t46m","kr_Ammo_762x54r_bs","kr_Ammo_762x54r_bthp","kr_Ammo_762x54r_fmj","kr_Ammo_762x54r_lps","kr_Ammo_762x54r_ps","kr_Ammo_762x54r_snb","Ammo_762x54","Ammo_762x54Tracer"};
		ammo = "Bullet_762x54r_fmj";
		
		weightPerQuantityUnit = 35.0;
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		tracersEvery = 0;
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "7.62x54";
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
	class Mag_762x54_pkp_100Rnd: kr_magazine_762x54_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x54_pkp_magazine";
		descriptionShort = "$STR_kr_magazines_762x54_pkp_magazine_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\magazine\762x54\Mag_762x54_pkp_100Rnd.p3d";
		weight = 900;
		itemSize[] = {4,3};
		count = 100;
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\pkp_magazine_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\pkp_magazine.rvmat"};
		soundImpactType = "metal";
		simpleHiddenSelections[] = {"hide_ammobelt","link_1","link_2","link_3","link_4","link_5","link_6","link_7","link_8","link_9","link_10"};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "7.62x54";
		};
		class AnimationSources
		{
			class RotateAmmoBelt
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.1;
			};
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -15;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\pkp_magazine.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\pkp_magazine_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\pkp_magazine_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\pkp_magazine_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\pkp_magazine_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x54_svd_10Rnd: kr_magazine_762x54_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x54_svd_10";
		descriptionShort = "$STR_kr_magazines_762x54_svd_10_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\magazine\762x54\Mag_762x54_svd_10Rnd.p3d";
		weight = 112;
		itemSize[] = {1,1};
		count = 10;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\svd_10_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\svd_10.rvmat"};
		soundImpactType = "metal";
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "7.62x54";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\svd_10.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\svd_10_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\svd_10_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\svd_10_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\svd_10_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_762x54_svd_20Rnd: kr_magazine_762x54_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_762x54_svd_20";
		descriptionShort = "$STR_kr_magazines_762x54_svd_20_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\magazine\762x54\Mag_762x54_svd_20Rnd.p3d";
		weight = 170;
		itemSize[] = {1,2};
		count = 20;
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1.1,1.1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\svd_20_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\svd_20.rvmat"};
		soundImpactType = "metal";
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "7.62x54";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -5;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\svd_20.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\svd_20_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\svd_20_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\svd_20_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\762x54\data\svd_20_destruct.rvmat"}}};
				};
			};
		};
	};
};
