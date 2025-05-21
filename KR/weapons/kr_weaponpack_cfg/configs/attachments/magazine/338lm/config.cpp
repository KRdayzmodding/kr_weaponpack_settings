class CfgPatches
{
	class kr_magazine_338
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_magazine_Base"};
		magazines[] = {"Mag_338lm_mk18_10Rnd","Mag_338lm_awm_10Rnd","Mag_338lm_dvl_10Rnd","Mag_338lm_sako85_4Rnd","Mag_338lm_tsvl_8Rnd"};
	};
};
class kr_Gunplay_Base;
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_338_Base: kr_magazine_Base
	{
		ammo = "Bullet_338LM_fmj";
		ammoItems[] = {"kr_Ammo_338LM_fmj","kr_Ammo_338LM_ap","kr_Ammo_338LM_upz","kr_Ammo_338LM_tac_x"};
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};		
		weightPerQuantityUnit = 35.0;
		tracersEvery = 0;
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = ".338 LM";
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
	class Mag_338lm_mk18_10Rnd: kr_magazine_338_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_338lm_mk18_10Rnd";
		descriptionShort = "$STR_kr_magazines_338lm_mk18_10Rnd_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\magazine\338lm\Mag_338_mk18_10Rnd.p3d";
		weight = 150;
		itemSize[] = {2,2};
		count = 10;
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\338lm\data\mk18_mag_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\338lm\data\mk18_mag.rvmat"};
		soundImpactType = "metal";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = ".338 LM";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\338lm\data\mk18_mag.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\338lm\data\mk18_mag_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\338lm\data\mk18_mag_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\338lm\data\mk18_mag_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\338lm\data\mk18_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_338lm_awm_10Rnd: kr_magazine_338_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_338lm_awm_10Rnd";
		descriptionShort = "$STR_kr_magazines_338lm_awm_10Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\338lm\Mag_338_awm_10Rnd.p3d";
		weight = 90;
		itemSize[] = {2,2};
		count = 10;
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		tracersEvery = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\338lm\data\awm_mag_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\338lm\data\awm_mag.rvmat"};
		soundImpactType = "metal";
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = ".338 LM";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\338lm\data\awm_mag.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\338lm\data\awm_mag_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\338lm\data\awm_mag_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\338lm\data\awm_mag_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\338lm\data\awm_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_338lm_dvl_10Rnd: kr_magazine_338_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_338lm_dvl10";
		descriptionShort = "STR_kr_magazines_338lm_dvl10_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\338lm\Mag_338_dvl_10Rnd.p3d";
		weight = 90;
		weightPerQuantityUnit = 10;
		itemSize[] = {2,2};
		count = 10;
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		tracersEvery = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\dvl10_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\DVL_10.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = ".338 LM";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\DVL_10.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\DVL_10_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\DVL_10_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\DVL_10_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\DVL_10\data\DVL_10_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_338lm_sako85_4Rnd: kr_magazine_338_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_338lm_sako85_4Rnd";
		descriptionShort = "$STR_kr_magazines_338lm_sako85_4Rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\338lm\Mag_338lm_sako85_4Rnd.p3d";
		weight = 90;
		weightPerQuantityUnit = 10;
		itemSize[] = {1,1};
		count = 4;
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		tracersEvery = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\sako85\data\sako85_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\sako85\data\sako85.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = ".338 LM";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\sako85\data\sako85.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\sako85\data\sako85_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\sako85\data\sako85_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\sako85\data\sako85_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\kr_weapons_rifles\sako85\data\sako85_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_338lm_tsvl_8Rnd: kr_magazine_338_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_338lm_tsvl_10Rnd";
		descriptionShort = "$STR_kr_magazines_338lm_tsvl_10Rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\338lm\Mag_338lm_tsvl_8Rnd.p3d";
		weight = 90;
		itemSize[] = {2,2};
		count = 10;
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		tracersEvery = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\338lm\data\tsvl_mag_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\338lm\data\tsvl_mag.rvmat"};
		soundImpactType = "metal";
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = ".338 LM";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\338lm\data\tsvl_mag.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\338lm\data\tsvl_mag_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\338lm\data\tsvl_mag_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\338lm\data\tsvl_mag_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\338lm\data\tsvl_mag_destruct.rvmat"}}};
				};
			};
		};
	};

	class Mag_338lm_axmc_10Rnd: kr_magazine_338_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_338lm_axmc_10Rnd";
		descriptionShort = "$STR_kr_magazines_338lm_axmc_10Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\338lm\Mag_338_axmc_10Rnd.p3d";
		weight = 90;
		itemSize[] = {2,2};
		count = 10;
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		tracersEvery = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\axmc\data\axmc_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\kr_weapons_rifles\axmc\data\axmc.rvmat"};

		class kr_description
		{
			kr_tier = 3;
			kr_caliber = ".338 LM AXMC";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\axmc\data\axmc.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\axmc\data\axmc_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\axmc\data\axmc_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\axmc\data\axmc_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_rifles\axmc\data\axmc_destruct.rvmat"}}};
				};
			};
		};
	};

	class Mag_338lm_mrad_10Rnd: kr_magazine_338_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_338lm_mrad";
		descriptionShort = "$STR_kr_magazines_338lm_mrad_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\338lm\Mag_338lm_mrad_10Rnd.p3d";
		weight = 125;
		itemSize[] = {2,2};
		count = 10;
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		tracersEvery = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\338lm\data\mrad_mag_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\magazine\338lm\data\mrad_mag.rvmat"};

		class kr_description
		{
			kr_tier = 3;
			kr_caliber = ".338 LM MRAD";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\338lm\data\mrad_mag.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\338lm\data\mrad_mag_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\338lm\data\mrad_mag_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\338lm\data\mrad_mag_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\338lm\data\mrad_mag_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
