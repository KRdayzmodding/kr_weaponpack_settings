class CfgPatches
{
	class kr_attachments_sg550_parts
	{
		units[] = {"kr_sg550_stock_std","kr_sg550_stock_tactical","kr_sg550_handguard_std","kr_sg550_handguard_tactical","kr_sg552_handguard_std","kr_sg550_pgrip"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_sg550_stock_Base;
	class kr_sg550_hguard_Base;
	class kr_sg550_pgrip_Base;
	class kr_sg550_stock_std: kr_sg550_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_sg550_stock_std";
		descriptionShort = "$STR_kr_weapons_attachments_sg550_stock_std_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\sg550_stock_std.p3d";
		simpleHiddenSelections[] = {};
		weight = 350;
		recoilModifier[] = {1.0,0.7,0.5};
		swayModifier[] = {0.9,0.9,0.9};
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_stock_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_stock_std.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 20;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "SG550";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_stock_std.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_stock_std_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_stock_std_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_stock_std_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_stock_std_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_sg550_stock_tactical: kr_sg550_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_sg550_stock_tactical";
		descriptionShort = "$STR_kr_weapons_attachments_sg550_stock_tactical_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\sg550_stock_tactical.p3d";
		simpleHiddenSelections[] = {};
		weight = 480;
		recoilModifier[] = {1.0,0.7,0.5};
		swayModifier[] = {0.9,0.9,0.9};
		itemSize[] = {3,2};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_stock_tactical_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_stock_tactical.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 25;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "SG550";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_stock_tactical.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_stock_tactical_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_stock_tactical_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_stock_tactical_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_stock_tactical_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_sg550_handguard_std: kr_sg550_hguard_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_sg550_handguard_std";
		descriptionShort = "$STR_kr_weapons_attachments_sg550_handguard_std_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\sg550_hguard_std.p3d";
		weight = 350;
		attachments[] = {};
		itemSize[] = {4,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_handguard_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_handguard.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_firearms
		{
			grip = 0;
			light = 0;
			holo = 0;
			gasblock = 0;
		};
		class kr_description
		{
			kr_type = "SG550";
			kr_tier = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_handguard.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_handguard_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_handguard_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_handguard_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_handguard_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_sg550_handguard_tactical: kr_sg550_hguard_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_sg550_handguard_tactical";
		descriptionShort = "$STR_kr_weapons_attachments_sg550_handguard_tactical_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\sg550_hguard_tactical.p3d";
		weight = 350;
		attachments[] = {"kr_foregrip","kr_light_bot"};
		itemSize[] = {3,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_handguard_tactical_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_handguard_tactical.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 15;
		};
		class kr_firearms
		{
			grip = 0;
			light = 0;
			holo = 1;
			gasblock = 0;
		};
		class kr_description
		{
			kr_type = "SG550";
			kr_tier = 2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_handguard_tactical.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_handguard_tactical_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_handguard_tactical_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_handguard_tactical_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_handguard_tactical_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_sg552_handguard_std: kr_sg550_hguard_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_sg552_handguard_std";
		descriptionShort = "$STR_kr_weapons_attachments_sg552_handguard_std_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\sg552_hguard_std.p3d";
		weight = 250;
		attachments[] = {};
		inventorySlot[] = {"kr_sg552_hndgrd"};
		itemSize[] = {2,1};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg552_handguard_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg552_handguard.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 14;
		};
		class kr_firearms
		{
			grip = 0;
			light = 0;
			holo = 0;
			gasblock = 0;
		};
		class kr_description
		{
			kr_type = "SG552";
			kr_tier = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg552_handguard.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg552_handguard_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg552_handguard_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg552_handguard_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg552_handguard_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_sg550_pgrip: kr_sg550_pgrip_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_sg550_pgrip";
		descriptionShort = "$STR_kr_weapons_attachments_sg550_pgrip_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\sg550_pgrip.p3d";
		weight = 100;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_pgrip_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 4;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_pgrip.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_pgrip_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_pgrip_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_pgrip_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\sig550_parts\data\sg550_pgrip_destruct.rvmat"}}};
				};
			};
		};
	};
};
