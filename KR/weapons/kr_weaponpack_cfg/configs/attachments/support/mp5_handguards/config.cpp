class CfgPatches
{
	class kr_attachments_mp5_handguards
	{
		units[] = {"kr_mp5_hndgrd_bttl99","kr_mp5_hndgrd_caa_hx5","kr_mp5_hndgrd_kurtz","kr_mp5_hndgrd_ptr_trirail","kr_mp5_hndgrd_sd","kr_mp5_hndgrd_wide_tropical"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Supports"};
	};
};
class kr_firearms_Base
{
	grip = 0;
	light = 0;
	holo = 0;
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_mp5_hndgrd_Base;
	class kr_mp5_hndgrd_bttl99: kr_mp5_hndgrd_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mp5_hguard_btti99";
		descriptionShort = "$STR_kr_weapons_attachments_mp5_hguard_btti99_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\mp5_handguard_btti99.p3d";
		weight = 278;
		recoilModifier[] = {0.45,0.8,0.8};
		swayModifier[] = {0.55,0.55,0.55};
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\btti99_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\btti99.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 14;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "HK MP5";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\btti99.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\btti99_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\btti99_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\btti99_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\btti99_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms: kr_firearms_Base
		{
			grip = 1;
			light = 1;
			holo = 0;
		};
	};
	class kr_mp5_hndgrd_caa_hx5: kr_mp5_hndgrd_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mp5_hguard_caa_hx5";
		descriptionShort = "$STR_kr_weapons_attachments_mp5_hguard_caa_hx5_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\mp5_handguard_caa_hx5.p3d";
		weight = 308;
		recoilModifier[] = {0.35,0.75,0.75};
		swayModifier[] = {0.4,0.4,0.4};
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\caa_hx5_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\caa_hx5.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "HK MP5";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\caa_hx5.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\caa_hx5_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\caa_hx5_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\caa_hx5_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\caa_hx5_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms: kr_firearms_Base
		{
			grip = 2;
			light = 2;
			holo = 0;
		};
	};
	class kr_mp5_hndgrd_kurtz: kr_mp5_hndgrd_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mp5_hguard_kurtz";
		descriptionShort = "$STR_kr_weapons_attachments_mp5_hguard_kurtz_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\mp5_handguard_kurtz.p3d";
		weight = 241;
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.75,0.75,0.75};
		itemSize[] = {1,2};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\kurtz_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\kurtz.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 11;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "HK MP5";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\kurtz.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\kurtz_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\kurtz_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\kurtz_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\kurtz_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_mp5_hndgrd_ptr_trirail: kr_mp5_hndgrd_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mp5_hguard_ptr_trirail";
		descriptionShort = "$STR_kr_weapons_attachments_mp5_hguard_ptr_trirail_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\mp5_handguard_ptr_trirail.p3d";
		weight = 308;
		recoilModifier[] = {0.45,0.8,0.8};
		swayModifier[] = {0.55,0.55,0.55};
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\ptr_trirail_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\ptr_trirail.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 14;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "HK MP5";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\ptr_trirail.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\ptr_trirail_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\ptr_trirail_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\ptr_trirail_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\ptr_trirail_destruct.rvmat"}}};
				};
			};
		};
		class kr_firearms: kr_firearms_Base
		{
			grip = 3;
			light = 3;
			holo = 0;
		};
	};
	class kr_mp5_hndgrd_sd: kr_mp5_hndgrd_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mp5_hguard_sd";
		descriptionShort = "$STR_kr_weapons_attachments_mp5_hguard_sd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\mp5_handguard_sd.p3d";
		weight = 130;
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.85,0.55,0.55};
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\sd_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\sd.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 12;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "HK MP5SD";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\sd.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\sd_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\sd_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\sd_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\sd_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_mp5_hndgrd_wide_tropical: kr_mp5_hndgrd_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_mp5_hguard_wide_tropical";
		descriptionShort = "$STR_kr_weapons_attachments_mp5_hguard_wide_tropical_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\mp5_handguard_wide_tropical.p3d";
		weight = 241;
		recoilModifier[] = {0.6,0.85,0.85};
		swayModifier[] = {0.75,0.75,0.75};
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\wide_tropical_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\wide_tropical.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "HK MP5";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\wide_tropical.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\wide_tropical_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\wide_tropical_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\wide_tropical_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\mp5_handguards\data\wide_tropical_destruct.rvmat"}}};
				};
			};
		};
	};
};
