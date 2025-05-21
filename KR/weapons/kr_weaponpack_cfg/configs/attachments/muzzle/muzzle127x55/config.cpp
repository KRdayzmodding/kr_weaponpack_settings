class CfgPatches
{
	class kr_weapatt_muzzle127x55
	{
		units[] = {"kr_muzzle127x55_ash12"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weaponpack_muzzles"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_suppressor_t1_Base;
	class kr_muzzle127x55_ash12: kr_suppressor_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle127x55_supressor_ash12_std";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle127x55_supressor_ash12_std_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\muzzle\muzzle127x55\ash_supressor.p3d";
		weight = 590;
		itemSize[] = {3,1};
		itemModelLength = 0.244;
		inventorySlot[] = {"kr_muzzle127_55"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ash12_add_co.paa"};
		recoilModifier[] = {1.0,0.9,0.9};
		swayModifier[] = {1.2,1.0,1.2};
		dispersionModifier = -0.002;
		noiseShootModifier = -0.95;
		barrelArmor = 11021;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -8;
		};

		class kr_description
		{
			kr_caliber = "12.7x55 AShA12";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD_destruct.rvmat"}}};
				};
			};
		};
	};

	class kr_muzzle127x55_suppressor_vssk: kr_suppressor_t1_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_muzzle127x55_supressor_vssk";
		descriptionShort = "$STR_kr_weapons_attachments_muzzle127x55_supressor_vssk_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle127x55\kr_muzzle127x55_vssk.p3d";
		weight = 1200;
		itemSize[] = {4,1};
		itemModelLength = 0.445;
		inventorySlot[] = {"kr_muzzle127_55_vssk"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle127x55\data\vssk_suppressor_co.paa"};
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {1.3,1.3,1.3};
		dispersionModifier = -0.0018;
		noiseShootModifier = -0.95;
		barrelArmor = 9560;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -12;
		};
		class kr_description
		{
			kr_tier = 5;
			kr_caliber = "12.7x55 VSSK";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 8;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle127x55\data\vssk_suppressor.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle127x55\data\vssk_suppressor_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle127x55\data\vssk_suppressor_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle127x55\data\vssk_suppressor_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle127x55\data\vssk_suppressor_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
