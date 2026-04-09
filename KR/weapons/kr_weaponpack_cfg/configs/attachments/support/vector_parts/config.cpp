class CfgPatches
{
	class kr_attachments_vector_parts
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
	class kr_stock_Base;

	class kr_vector_stock_std: kr_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_vector_bttstck_std";
		descriptionShort = "$STR_kr_weapons_attachments_vector_bttstck_std_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\vector_parts\vector_stock_std.p3d";
		inventorySlot[] = {"kr_vector_stock"};
		weight = 300;
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.8,0.8,0.8};
		itemSize[] = {2,1};
		haveTube = 0;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\vector_parts\data\stock_vector_std_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\vector_parts\data\stock_vector_std.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 24;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "Kriss Vector";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\vector_parts\data\stock_vector_std.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\vector_parts\data\stock_vector_std_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\vector_parts\data\stock_vector_std_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\vector_parts\data\stock_vector_std_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\vector_parts\data\stock_vector_std_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class kr_vector_stock_tube: kr_stock_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_vector_bttstck_tube";
		descriptionShort = "$STR_kr_weapons_attachments_vector_bttstck_tube_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\support\vector_parts\vector_stock_tube.p3d";
		inventorySlot[] = {"kr_vector_stock"};
		weight = 300;
		attachments[] = {"kr_ar_bttstck"};
		recoilModifier[] = {0.97,0.97,0.95};
		swayModifier[] = {0.97,0.97,0.95};
		itemSize[] = {2,1};
		haveTube = 1;
		isTube = 1;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\support\vector_parts\data\stock_vector_tube_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\support\vector_parts\data\stock_vector_tube.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 3;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "Kriss Vector";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\attachments\support\vector_parts\data\stock_vector_tube.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\attachments\support\vector_parts\data\stock_vector_tube_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\attachments\support\vector_parts\data\stock_vector_tube_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\attachments\support\vector_parts\data\stock_vector_tube_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\attachments\support\vector_parts\data\stock_vector_tube_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
