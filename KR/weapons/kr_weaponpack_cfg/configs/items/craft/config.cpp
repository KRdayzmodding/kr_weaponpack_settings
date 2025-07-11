class CfgPatches
{
	class kr_items_crafting
	{
		units[] = {"kr_items_ferfrans_crd","kr_items_paracord","kr_items_multitool","kr_items_universal_rails","kr_items_zenit_fixed_lock","kr_items_zenit_fold_lock","kr_items_zenit_pt_1","kr_items_zenit_pt_3"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class Inventory_Base;
	class kr_items_ferfrans_crd: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_items_ferfrans_crd";
		descriptionShort = "$STR_kr_weapons_items_ferfrans_crd_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\muzzle556_flashhider_ferfrans.p3d";
		weight = 60;
		itemSize[] = {1,1};
		soundImpactType = "metal";
		simpleHiddenSelections[] = {"hide_muzzle"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\muzzle\muzzle556\data\ferfrans_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_items_paracord: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_items_paracord";
		descriptionShort = "$STR_kr_weapons_items_paracord_dsc";
		model = "KR\weapons\kr_weaponpack\items\craft\paracord.p3d";
		OnRestrainChange = "RopeLocked";
		RestrainTime = 10;
		rotationFlags = 17;
		itemSize[] = {1,3};
		weight = 280;
		soundImpactType = "textile";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\items\craft\data\paracord_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\items\craft\data\paracord.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\items\craft\data\paracord_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\items\craft\data\paracord_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\items\craft\data\paracord_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\items\craft\data\paracord_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class kr_items_multitool: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_items_multitool";
		descriptionShort = "$STR_kr_weapons_items_multitool_dsc";
		model = "\KR\weapons\kr_weaponpack\items\craft\multitool.p3d";
		weight = 150;
		soundImpactType = "metal";
		itemSize[] = {1,2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 15;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\items\craft\data\multitool.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\items\craft\data\multitool_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\items\craft\data\multitool_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\items\craft\data\multitool_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\items\craft\data\multitool_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_items_universal_rails: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_items_universal_rails";
		descriptionShort = "$STR_kr_weapons_items_universal_rails_dsc";
		model = "\KR\weapons\kr_weaponpack\items\craft\universal_rails.p3d";
		weight = 300;
		soundImpactType = "metal";
		inventorySlot[] = {"kr_rail_mount"};
		itemSize[] = {2,1};
	};
	class kr_items_zenit_fixed_lock: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_items_zenit_fixed_lock";
		descriptionShort = "$STR_kr_weapons_items_zenit_fixed_lock_dsc";
		model = "\KR\weapons\kr_weaponpack\items\craft\zenit_fixed_lock.p3d";
		weight = 30;
		soundImpactType = "metal";
		itemSize[] = {1,1};
		inventorySlot[] = {"kr_pt_lock"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\items\craft\data\zenit_fixed_lock.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\items\craft\data\zenit_fixed_lock_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\items\craft\data\zenit_fixed_lock_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\items\craft\data\zenit_fixed_lock_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\items\craft\data\zenit_fixed_lock_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_items_zenit_fold_lock: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_items_zenit_fold_lock";
		descriptionShort = "$STR_kr_weapons_items_zenit_fold_lock_dsc";
		model = "\KR\weapons\kr_weaponpack\items\craft\zenit_fold_lock.p3d";
		weight = 30;
		soundImpactType = "metal";
		inventorySlot[] = {"kr_pt_lock"};
		itemSize[] = {1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\items\craft\data\zenit_fold_lock.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\items\craft\data\zenit_fold_lock_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\items\craft\data\zenit_fold_lock_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\items\craft\data\zenit_fold_lock_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\items\craft\data\zenit_fold_lock_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_items_zenit_pt_1: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_stock_zenit_pt_1";
		descriptionShort = "$STR_kr_weapons_items_zenit_pt_1_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\ak_fld_bttstck_zenit_pt_1.p3d";
		weight = 290;
		itemSize[] = {2,1};
		attachments[] = {"kr_pt_lock"};
		simpleHiddenSelections[] = {"hide_lock"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1.rvmat"};
		soundImpactType = "metal";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_1_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_items_zenit_pt_3: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_stock_zenit_pt_3";
		descriptionShort = "$STR_kr_weapons_items_zenit_pt_3_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\ak_fld_bttstck_zenit_pt_3.p3d";
		weight = 218;
		itemSize[] = {2,1};
		attachments[] = {"kr_pt_lock"};
		simpleHiddenSelections[] = {"hide_lock"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3.rvmat"};
		soundImpactType = "metal";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_buttstocks\data\zenit_pt_3_destruct.rvmat"}}};
				};
			};
		};
	};
};
