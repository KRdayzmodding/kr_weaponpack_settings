class CfgPatches
{
	class kr_muzzle_45ACP
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_weaponpack_muzzles"};
	};
};

class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_suppressor_t1_Base;
	class kr_suppressor_t2_Base;
	class kr_suppressor_t3_Base;
	class kr_muzzle_t1_Base;
	class kr_muzzle_t2_Base;
	class kr_muzzle_t3_Base;
	class kr_muzzle_t4_Base;

	class kr_muzzle45ACP_suppressor_omega_45k: kr_suppressor_t2_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_45ACP_suppressor_omega_45k";
		descriptionShort = "$STR_kr_weapons_attachments_45ACP_suppressor_omega_45k_dsc";
		model = "\KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle45ACP\muzzle45ACP_suppressor_omega_45k.p3d";
		weight = 60;
		itemModelLength = 0.16;
		inventorySlot[] = {"kr_muzzle45ACP"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle45ACP\data\omega_45k_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle45ACP\data\omega_45k.rvmat"};
		recoilModifier[] = {1.0,0.9,0.9};
		swayModifier[] = {1.0,1.2,1.2};
		dispersionModifier = 0.0001;
		noiseShootModifier = -0.095;
		barrelArmor = 6000;

		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -8;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = ".45ACP";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle45ACP\data\omega_45k.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle45ACP\data\omega_45k_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle45ACP\data\omega_45k_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle45ACP\data\omega_45k_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\attachments\muzzle\muzzle45ACP\data\omega_45k_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
