class CfgPatches
{
	class kr_attachments_ak545_parts
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_ak_stock_t2_Base;
	class kr_ak_hguard_t2_Base;
	class kr_ak_receiver_Base;
	
	class kr_ak545_fstock_tube: kr_ak_stock_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak545_fld_bttstck_tube";
		descriptionShort = "$STR_kr_weapons_attachments_ak545_fld_bttstck_tube_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\ak545_stock_tube.p3d";
		weight = 175;
		inventorySlot[] = {"kr_ak545_stock"};
		attachments[] = {"kr_ar_bttstck"};
		recoilModifier[] = {0.97,0.97,0.95};
		swayModifier[] = {0.97,0.97,0.95};
		itemSize[] = {2,1};
		haveTube = 1;
		isTube = 1;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_stock.rvmat"};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "SAG AK545";
		};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_stock.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_stock_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_stock_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_stock_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_stock_destruct.rvmat"}}};
				};
			};
		};
	};

	class kr_ak545_hguard_std: kr_ak_hguard_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak545_handguard_std";
		descriptionShort = "$STR_kr_weapons_attachments_ak545_handguard_std_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\ak545_handguard.p3d";
		weight = 320;
		itemSize[] = {2,1};
		inventorySlot[] = {"kr_ak545_hndgrd"};
		attachments[] = {"kr_foregrip","kr_rail_mount"};
		simpleHiddenSelections[] = {"hide_mount"};
		recoilModifier[] = {0.7,0.8,1};	
		swayModifier[] = {0.7,1,0.8};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_handguard_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_handguard.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 10;
		};
		class kr_firearms
		{
			grip = 1;
			light = 0;
			holo = 1;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "SAG AK545";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_handguard.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_handguard_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_handguard_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_handguard_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_handguard_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak545_hguard_std_raild: kr_ak545_hguard_std
	{
		displayName = "$STR_kr_weapons_attachments_ak545_handguard_std_raild";
		attachments[] = {"kr_foregrip","kr_light_right","kr_light_left"};

		class kr_firearms
		{
			grip = 1;
			light = 1;
			holo = 1;
		};
	};


	class kr_ak_receiver_ak545: kr_ak_receiver_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_receiver_ak545";
		descriptionShort = "$STR_kr_weapons_attachments_ak_receiver_ak545_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\ak545_receiver.p3d";
		weight = 420;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_receiver_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_receiver.rvmat"};
		itemSize[] = {4,1};
		inventorySlot[] = {"kr_ak545_receiver"};
		
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};

		class kr_firearms
		{
			optic = 0;
			receiver = 0;
			sight = 0;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "SAG AK545";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_receiver.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_receiver_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_receiver_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_receiver_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\ak545_parts\data\ak545_receiver_destruct.rvmat"}}};
				};
			};
		};
	};
};
