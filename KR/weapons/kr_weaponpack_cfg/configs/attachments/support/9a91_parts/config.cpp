class CfgPatches
{
	class kr_attachments_9a91_parts
	{
		units[] = {"kr_9a91_stock_std"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Supports"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class Inventory_Base;
	class kr_9a91_stock_std: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_9a91_stock_std";
		descriptionShort = "$STR_kr_weapons_attachments_9a91_stock_std_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\support\9a91_parts\9a91_stock_std.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"kr_9a91_stock"};
		weight = 150;
		itemSize[] = {3,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.7,0.7,0.7};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\9a91_parts\data\9a91_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\9a91_parts\data\9a91_stock.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 25;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "9A-91";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\9a91_parts\data\9a91_stock.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\9a91_parts\data\9a91_stock_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\9a91_parts\data\9a91_stock_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\9a91_parts\data\9a91_stock_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\9a91_parts\data\9a91_stock_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
};
