class CfgPatches
{
	class DZ_Weapons_Muzzles_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Muzzles"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class Inventory_Base;
	class ItemSuppressor: Inventory_Base{};

	class ImprovisedSuppressor: ItemSuppressor
	{
		scope = 2;
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzleMulti\suppressorImpro.p3d";
		inventorySlot[] += 
		{
			"kr_muzzle366",
			"kr_muzzle545",
			"kr_muzzle556",
			"kr_muzzle338",
			"kr_muzzle308",
			"kr_muzzle762_39",
			"kr_muzzle762_54",
			"kr_muzzle762_54_mosin",
			"kr_muzzle12_76",
			"kr_muzzle127_55",
			"kr_muzzle9_19",
			"kr_muzzle9_18",
			"kr_muzzle_9_39_9a91",
			"kr_muzzle762_25"
		};
		simpleHiddenSelections[]=
		{
			"normal",
			"revers",
			"suppressor_destruct",
			"suppressornormal"
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzleMulti\data\suppressorImpro.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzleMulti\data\suppressorImpro.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzleMulti\data\suppressorImpro_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzleMulti\data\suppressorImpro_damage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzleMulti\data\suppressorImpro_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	
	class ProxysuppressorImpro: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "suppressorImpro";
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzleMulti\suppressorImpro.p3d";
	};
};