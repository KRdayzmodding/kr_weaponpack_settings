class CfgPatches
{
	class kr_weaponpack_2_AmmoBox
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};

class CfgVehicles
{
	class Box_Base;
    class kr_Box_Base : Box_Base
    {
        scope = 0;
        debug_ItemCategory = 5;
		rotationFlags = 17;
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset = "ammoboxUnpack_SoundSet";
					id = 70;
				};
			};
		};
    };

	class kr_AmmoBox_9x18_ppt_50Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_9x18_ppt";
		descriptionShort = "$STR_kr_weapons_AmmoBox_9x18_ppt";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_9x18_ppt.p3d";
		weight = 400;
		itemSize[] = {2,1};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pso.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pso_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pso_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pso_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pso_destruct.rvmat"}}
					};
				};
			};
		};

		class kr_description
		{
			kr_tier = 0;
			kr_caliber = "9x18";
			kr_bullettype = 0;
		};

		class Resources
		{
			class kr_Ammo_9x18_ppt_gz
			{
				value = 50;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_9x18_pso_50Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_9x18_pso";
		descriptionShort = "$STR_kr_weapons_AmmoBox_9x18_pso";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_9x18_pso.p3d";
		weight = 400;
		itemSize[] = {2,1};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pso.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pso_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pso_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pso_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pso_destruct.rvmat"}}
					};
				};
			};
		};

		class kr_description
		{
			kr_tier = 0;
			kr_caliber = "9x18";
			kr_bullettype = 0;
		};

		class Resources
		{
			class kr_Ammo_9x18_pso_gz
			{
				value = 50;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_9x18_pst_50Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_9x18_pst";
		descriptionShort = "$STR_kr_weapons_AmmoBox_9x18_pst";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_9x18_pst.p3d";
		weight = 400;
		itemSize[] = {2,1};

		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x18";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pso.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pso_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pso_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pso_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pso_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_9x18_pst_gz
			{
				value = 50;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_9x18_pmm_25Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_9x18_pmm";
		descriptionShort = "$STR_kr_weapons_AmmoBox_9x18_pmm";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_9x18_pmm.p3d";
		weight = 200;

		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x18";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pbm.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pbm_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pbm_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pbm_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pbm_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_9x18_pmm_gz
			{
				value = 25;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_9x18_sp7_25Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_9x18_sp7";
		descriptionShort = "$STR_kr_weapons_AmmoBox_9x18_sp7";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_9x18_sp7.p3d";
		weight = 200;

		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x18";
			kr_bullettype = 1;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_sp7.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_sp7_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_sp7_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_sp7_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_sp7_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_9x18_sp7_gz
			{
				value = 25;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_9x18_pbm_25Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_9x18_pbm";
		descriptionShort = "$STR_kr_weapons_AmmoBox_9x18_pbm";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_9x18_pbm.p3d";
		weight = 200;

		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "9x18";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pbm.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pbm_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pbm_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pbm_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x18_pbm_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_9x18_pbm_gz
			{
				value = 25;
				variable = "quantity";
			};
		};
	};

	class kr_AmmoBox_9x19_gt_50Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_9x19_gt";
		descriptionShort = "$STR_kr_weapons_AmmoBox_9x19_gt";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_9x19_gt.p3d";
		weight = 400;
		itemSize[] = {2,1};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_gt.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_gt_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_gt_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_gt_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_gt_destruct.rvmat"}}
					};
				};
			};
		};

		class kr_description
		{
			kr_tier = 0;
			kr_caliber = "9x19";
			kr_bullettype = 0;
		};

		class Resources
		{
			class kr_Ammo_9x19_gt
			{
				value = 50;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_9x19_pso_50Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_9x19_pso";
		descriptionShort = "$STR_kr_weapons_AmmoBox_9x19_pso";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_9x19_pso.p3d";
		weight = 400;
		itemSize[] = {2,1};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_gt.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_gt_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_gt_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_gt_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_gt_destruct.rvmat"}}
					};
				};
			};
		};

		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x19";
			kr_bullettype = 0;
		};

		class Resources
		{
			class kr_Ammo_9x19_pso_gz
			{
				value = 50;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_9x19_7n21_50Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_9x19_7n21";
		descriptionShort = "$STR_kr_weapons_AmmoBox_9x19_7n21";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_9x19_7n21.p3d";
		weight = 400;
		itemSize[] = {2,1};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_gt.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_gt_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_gt_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_gt_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_gt_destruct.rvmat"}}
					};
				};
			};
		};

		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x19";
			kr_bullettype = 0;
		};

		class Resources
		{
			class kr_Ammo_9x19_7n21
			{
				value = 50;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_9x19_quakemaker_25Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_9x19_quakemaker";
		descriptionShort = "$STR_kr_weapons_AmmoBox_9x19_quakemaker";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_9x19_quakemaker.p3d";
		weight = 200;
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x19";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_AP_63.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_AP_63_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_AP_63_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_AP_63_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_AP_63_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_9x19_quakemaker
			{
				value = 25;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_9x19_RIP_25Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_9x19_RIP";
		descriptionShort = "$STR_kr_weapons_AmmoBox_9x19_RIP";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_9x19_RIP.p3d";
		weight = 200;
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "9x19";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_AP_63.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_AP_63_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_AP_63_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_AP_63_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_AP_63_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_9x19_RIP
			{
				value = 25;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_9x19_7n31_25Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_9x19_7n31";
		descriptionShort = "$STR_kr_weapons_AmmoBox_9x19_7n31";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_9x19_7n31.p3d";
		weight = 200;
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "9x19";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_7n31.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_7n31_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_7n31_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_7n31_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_7n31_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_9x19_7n31
			{
				value = 25;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_9x19_AP_63_25Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_9x19_AP_63";
		descriptionShort = "$STR_kr_weapons_AmmoBox_9x19_AP_63";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_9x19_AP_63.p3d";
		weight = 200;
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "9x19";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_AP_63.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_AP_63_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_AP_63_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_AP_63_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x19_AP_63_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_9x19_AP_63
			{
				value = 25;
				variable = "quantity";
			};
		};
	};

	class kr_AmmoBox_762x25_akbs_25Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x25_akbs";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x25_akbs";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x25_akbs.p3d";
		weight = 200;
		class kr_description
		{
			kr_tier = 0;
			kr_caliber = "762x25";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x25_AKBS
			{
				value = 25;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x25_PT_gz_25Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x25_PT_gz";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x25_PT_gz";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x25_PT_gz.p3d";
		weight = 200;
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "762x25";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x25_PT_gz
			{
				value = 25;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x25_PST_gz_25Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x25_PST_gz";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x25_PST_gz";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x25_PST_gz.p3d";
		weight = 200;
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "762x25";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x25_PST_gz
			{
				value = 25;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x25_HP_25Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x25_HP";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x25_HP";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x25_HP.p3d";
		weight = 200;
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "762x25";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x25_HP
			{
				value = 25;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x25_FMJ43_25Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x25_FMJ43";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x25_FMJ43";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x25_FMJ43.p3d";
		weight = 200;
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "762x25";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x25_akbs_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x25_FMJ43
			{
				value = 25;
				variable = "quantity";
			};
		};
	};

	class kr_AmmoBox_545x39_PRS_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_545x39_PRS";
		descriptionShort = "$STR_kr_weapons_AmmoBox_545x39_PRS";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_545x39_PRS.p3d";
		weight = 200;
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.45x39";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_PRS.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_PRS_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_PRS_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_PRS_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_PRS_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_545x39_PRS
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_545x39_T_30Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_545x39_T";
		descriptionShort = "$STR_kr_weapons_AmmoBox_545x39_T";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_545x39_T.p3d";
		weight = 330;
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.45x39";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_545x39_T
			{
				value = 30;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_545x39_US_30Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_545x39_US";
		descriptionShort = "$STR_kr_weapons_AmmoBox_545x39_US";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_545x39_US.p3d";
		weight = 520;
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "5.45x39";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_545x39_US
			{
				value = 30;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_545x39_FMJ_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_545x39_FMJ";
		descriptionShort = "$STR_kr_weapons_AmmoBox_545x39_FMJ";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_545x39_FMJ.p3d";
		weight = 220;
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.45x39";
			kr_bullettype = 0;

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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_PRS.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_PRS_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_PRS_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_PRS_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_PRS_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_545x39_FMJ
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_545x39_PS_30Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_545x39_PS";
		descriptionShort = "$STR_kr_weapons_AmmoBox_545x39_PS";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_545x39_PS.p3d";
		weight = 330;
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "5.45x39";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_545x39_PS
			{
				value = 30;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_545x39_HP_30Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_545x39_HP";
		descriptionShort = "$STR_kr_weapons_AmmoBox_545x39_HP";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_545x39_HP.p3d";
		weight = 330;
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "5.45x39";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_HP.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_HP_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_HP_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_HP_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_HP_destruct.rvmat"}}
					};
				};
			};
		};

		class Resources
		{
			class kr_Ammo_545x39_HP
			{
				value = 30;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_545x39_BT_30Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_545x39_BT";
		descriptionShort = "$STR_kr_weapons_AmmoBox_545x39_BT";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_545x39_BT.p3d";
		weight = 330;
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "5.45x39";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_545x39_BT
			{
				value = 30;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_545x39_BS_30Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_545x39_BS";
		descriptionShort = "$STR_kr_weapons_AmmoBox_545x39_BS";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_545x39_BS.p3d";
		weight = 330;
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "5.45x39";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_545_T_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_545x39_BS
			{
				value = 30;
				variable = "quantity";
			};
		};
	};

	class kr_AmmoBox_556x45_m855_30Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_556x45_m855";
		descriptionShort = "$STR_kr_weapons_AmmoBox_556x45_m855";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_556x45_m855.p3d";
		weight = 300;
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "556x45";
			kr_bullettype = 0;

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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_m855.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_m855_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_m855_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_m855_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_m855_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_556x45_m855
			{
				value = 30;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_556x45_m856_30Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_556x45_m856";
		descriptionShort = "$STR_kr_weapons_AmmoBox_556x45_m856";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_556x45_m856.p3d";
		weight = 300;
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "556x45";
			kr_bullettype = 0;

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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_m855.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_m855_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_m855_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_m855_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_m855_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_556x45_m856
			{
				value = 30;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_556x45_m995_30Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_556x45_m995";
		descriptionShort = "$STR_kr_weapons_AmmoBox_556x45_m995";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_556x45_m995.p3d";
		weight = 300;
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "556x45";
			kr_bullettype = 0;

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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_m855.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_m855_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_m855_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_m855_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_m855_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_556x45_m995
			{
				value = 30;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_556x45_m855a1_30Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_556x45_m855a1";
		descriptionShort = "$STR_kr_weapons_AmmoBox_556x45_m855a1";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_556x45_m855a1.p3d";
		weight = 300;
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "556x45";
			kr_bullettype = 0;

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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_m855.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_m855_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_m855_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_m855_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_m855_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_556x45_m855a1
			{
				value = 30;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_556x45_warmageddon_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_556x45_warmageddon";
		descriptionShort = "$STR_kr_weapons_AmmoBox_556x45_warmageddon";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_556x45_warmageddon.p3d";
		weight = 200;
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "556x45";
			kr_bullettype = 0;

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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_warmageddon.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_warmageddon_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_warmageddon_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_warmageddon_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_warmageddon_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_556x45_warmageddon
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_556x45_fmj_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_556x45_fmj";
		descriptionShort = "$STR_kr_weapons_AmmoBox_556x45_fmj";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_556x45_fmj.p3d";
		weight = 200;
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "556x45";
			kr_bullettype = 0;

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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_fmj.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_fmj_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_fmj_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_fmj_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_556_fmj_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_556x45_fmj
			{
				value = 20;
				variable = "quantity";
			};
		};
	};

	class kr_AmmoBox_9x39_SP5_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_9x39_SP5";
		descriptionShort = "$STR_kr_weapons_AmmoBox_9x39_SP5";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_9x39_SP5.p3d";
		weight = 460;
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x39";
			kr_bullettype = 0;

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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_9x39_sp5
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_9x39_SP6_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_9x39_SP6";
		descriptionShort = "$STR_kr_weapons_AmmoBox_9x39_SP6";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_9x39_SP6.p3d";
		weight = 460;
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x39";
			kr_bullettype = 0;

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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_9x39_sp6
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_9x39_BP_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_9x39_BP";
		descriptionShort = "$STR_kr_weapons_AmmoBox_9x39_BP";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_9x39_BP.p3d";
		weight = 460;
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "9x39";
			kr_bullettype = 0;

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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_9x39_bp
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_9x39_HP_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_9x39_HP";
		descriptionShort = "$STR_kr_weapons_AmmoBox_9x39_HP";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_9x39_HP.p3d";
		weight = 460;
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "9x39";
			kr_bullettype = 0;

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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_9x39_HP
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_9x39_PAB9_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_9x39_PAB9";
		descriptionShort = "$STR_kr_weapons_AmmoBox_9x39_PAB9";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_9x39_PAB9.p3d";
		weight = 460;
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x39";
			kr_bullettype = 0;

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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_9x39_SP5_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_9x39_pab9
			{
				value = 20;
				variable = "quantity";
			};
		};
	};

	class kr_AmmoBox_366TKM_FMJ_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_366TKM_FMJ";
		descriptionShort = "$STR_kr_weapons_AmmoBox_366TKM_FMJ";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_366TKM_FMJ.p3d";
		weight = 400;
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = ".366TKM";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_366TKM_EKO.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_366TKM_EKO_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_366TKM_EKO_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_366TKM_EKO_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_366TKM_EKO_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_366TKM_FMJ
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_366TKM_EKO_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_366TKM_EKO";
		descriptionShort = "$STR_kr_weapons_AmmoBox_366TKM_EKO";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_366TKM_EKO.p3d";
		weight = 400;
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = ".366TKM";
			kr_bullettype = 0;

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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_366TKM_EKO.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_366TKM_EKO_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_366TKM_EKO_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_366TKM_EKO_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_366TKM_EKO_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_366TKM_EKO
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_366TKM_Geksa_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_366TKM_Geksa";
		descriptionShort = "$STR_kr_weapons_AmmoBox_366TKM_Geksa";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_366TKM_Geksa.p3d";
		weight = 400;
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = ".366TKM";
			kr_bullettype = 0;

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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_366TKM_EKO.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_366TKM_EKO_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_366TKM_EKO_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_366TKM_EKO_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_366TKM_EKO_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_366TKM_Geksa
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_366TKM_custom_ap_10Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_366TKM_bp";
		descriptionShort = "$STR_kr_weapons_AmmoBox_366TKM_bp";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_366TKM_bp.p3d";
		weight = 200;
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = ".366TKM";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_366TKM_bp.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_366TKM_bp_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_366TKM_bp_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_366TKM_bp_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_366TKM_bp_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_366TKM_custom_ap
			{
				value = 10;
				variable = "quantity";
			};
		};
	};

	class kr_AmmoBox_762x39_t45m_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x39_t45m";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x39_t45m";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x39_t45m.p3d";
		weight = 320;
		class kr_description
		{
			kr_tier = 0;
			kr_caliber = "762x39";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x39_t45m
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x39_us_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x39_us";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x39_us";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x39_us.p3d";
		weight = 400;
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "762x39";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x39_us
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x39_ps_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x39_ps";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x39_ps";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x39_ps.p3d";
		weight = 320;
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "762x39";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x39_ps
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x39_pp_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x39_pp";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x39_pp";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x39_pp.p3d";
		weight = 320;
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "762x39";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x39_pp
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x39_mai_ap_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x39_mai_ap";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x39_mai_ap";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x39_mai_ap.p3d";
		weight = 320;
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "762x39";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x39_mai_ap
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x39_bp_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x39_bp";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x39_bp";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x39_bp.p3d";
		weight = 320;
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "762x39";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x39_bp
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x39_fmj_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x39_fmj";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x39_fmj";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x39_fmj.p3d";
		weight = 320;
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "762x39";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x39_fmj
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x39_hp_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x39_hp";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x39_hp";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x39_hp.p3d";
		weight = 320;
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "762x39";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x39_t45m_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x39_HP
			{
				value = 20;
				variable = "quantity";
			};
		};
	};

	class kr_AmmoBox_762x51_bpz_fmj_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x51_bpz_fmj";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x51_bpz_fmj";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x51_bpz_fmj.p3d";
		weight = 440;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "762x51";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_bpz_fmj.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_bpz_fmj_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_bpz_fmj_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_bpz_fmj_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_bpz_fmj_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x51_bpz_fmj
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x51_TPZ_SP_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x51_TPZ_SP";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x51_TPZ_SP";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x51_TPZ_SP.p3d";
		weight = 440;
		itemSize[] = {2,1};

		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "762x51";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_m80.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_m80_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_m80_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_m80_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_m80_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x51_tpz_sp
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x51_m80_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x51_m80";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x51_m80";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x51_m80.p3d";
		weight = 440;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "762x51";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_m80.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_m80_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_m80_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_m80_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_m80_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x51_m80
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x51_M61_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x51_M61";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x51_M61";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x51_M61.p3d";
		weight = 440;
		
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "762x51";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_M61.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_M61_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_M61_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_M61_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_M61_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x51_M61
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x51_ultra_nosler_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x51_ultra_nosler";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x51_ultra_nosler";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x51_ultra_nosler.p3d";
		weight = 440;
		itemSize[] = {2,1};

		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "762x51";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_m80.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_m80_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_m80_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_m80_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_m80_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x51_ultra_nosler
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x51_m993_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x51_m993";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x51_m993";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x51_m993.p3d";
		weight = 440;
		
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "762x51";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_M61.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_M61_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_M61_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_M61_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x51_M61_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x51_m993
			{
				value = 20;
				variable = "quantity";
			};
		};
	};

	class kr_AmmoBox_762x54_t46m_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x54_t46m";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x54_t46m";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x54_t46m.p3d";
		weight = 440;
		
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "762x54R";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x54r_t46m
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x54_fmj_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x54_fmj";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x54_fmj";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x54_fmj.p3d";
		weight = 440;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "762x54R";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_fmj.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_fmj_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_fmj_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_fmj_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_fmj_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x54r_fmj
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x54_ps_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x54_ps";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x54_ps";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x54_ps.p3d";
		weight = 440;
		
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "762x54R";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x54r_ps
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x54_lps_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x54_lps";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x54_lps";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x54_lps.p3d";
		weight = 440;
		
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "762x54R";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x54r_lps
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x54_snb_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x54_snb";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x54_snb";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x54_snb.p3d";
		weight = 440;
		
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "762x54R";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x54r_snb
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x54_bs_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x54_bs";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x54_bs";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x54_bs.p3d";
		weight = 440;
		
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "762x54R";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_t46m_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x54r_bs
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_762x54_bthp_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_762x54_bthp";
		descriptionShort = "$STR_kr_weapons_AmmoBox_762x54_bthp";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_762x54_bthp.p3d";
		weight = 440;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "762x54R";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_bthp.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_bthp_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_bthp_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_bthp_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_762x54_bthp_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_762x54r_bthp
			{
				value = 20;
				variable = "quantity";
			};
		};
	};

	class kr_AmmoBox_338LM_upz_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_338LM_upz";
		descriptionShort = "$STR_kr_weapons_AmmoBox_338LM_upz";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_338LM_upz.p3d";
		weight = 900;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "338LM";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_338LM_upz.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_338LM_upz_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_338LM_upz_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_338LM_upz_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_338LM_upz_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_338LM_upz
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_338LM_fmj_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_338LM_fmj";
		descriptionShort = "$STR_kr_weapons_AmmoBox_338LM_fmj";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_338LM_fmj.p3d";
		weight = 900;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "338LM";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_338LM_upz.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_338LM_upz_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_338LM_upz_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_338LM_upz_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_338LM_upz_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_338LM_fmj
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_338LM_ap_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_338LM_ap";
		descriptionShort = "$STR_kr_weapons_AmmoBox_338LM_ap";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_338LM_ap.p3d";
		weight = 900;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "338LM";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_338LM_upz.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_338LM_upz_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_338LM_upz_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_338LM_upz_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_338LM_upz_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_338LM_ap
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_338LM_tac_x_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_338LM_tac_x";
		descriptionShort = "$STR_kr_weapons_AmmoBox_338LM_tac_x";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_338LM_tac_x.p3d";
		weight = 900;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 5;
			kr_caliber = "338LM";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_338LM_upz.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_338LM_upz_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_338LM_upz_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_338LM_upz_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_338LM_upz_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_338LM_tac_x
			{
				value = 20;
				variable = "quantity";
			};
		};
	};

	class kr_AmmoBox_127x55_PS12_10Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_127x55_PS12";
		descriptionShort = "$STR_kr_weapons_AmmoBox_127x55_PS12";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_127x55_PS12.p3d";
		weight = 500;
		
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "12.7x55";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_127x55_PS12.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_127x55_PS12_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_127x55_PS12_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_127x55_PS12_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_127x55_PS12_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_127x55_PS12
			{
				value = 10;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_127x55_PS12A_10Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_127x55_PS12A";
		descriptionShort = "$STR_kr_weapons_AmmoBox_127x55_PS12A";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_127x55_PS12A.p3d";
		weight = 500;
		
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "12.7x55";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_127x55_PS12.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_127x55_PS12_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_127x55_PS12_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_127x55_PS12_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_127x55_PS12_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_127x55_PS12A
			{
				value = 10;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_127x55_PS12B_10Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_127x55_PS12B";
		descriptionShort = "$STR_kr_weapons_AmmoBox_127x55_PS12B";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_127x55_PS12B.p3d";
		weight = 500;
		
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "12.7x55";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_127x55_PS12.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_127x55_PS12_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_127x55_PS12_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_127x55_PS12_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_127x55_PS12_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_127x55_PS12B
			{
				value = 10;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_127x55_PS12HP_10Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_127x55_PS12HP";
		descriptionShort = "$STR_kr_weapons_AmmoBox_127x55_PS12HP";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_127x55_PS12HP.p3d";
		weight = 500;
		
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "12.7x55";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_127x55_PS12.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_127x55_PS12_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_127x55_PS12_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_127x55_PS12_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_127x55_PS12_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_127x55_PS12HP
			{
				value = 10;
				variable = "quantity";
			};
		};
	};

	class kr_AmmoBox_408CheyTac_10Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_408CheyTac";
		descriptionShort = "$STR_kr_weapons_AmmoBox_408CheyTac";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_408CheyTac.p3d";
		weight = 600;
		itemSize[] = {1,2};
		
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = ".408 CT";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_408CheyTac.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_408CheyTac_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_408CheyTac_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_408CheyTac_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_408CheyTac_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_408CheyTac
			{
				value = 10;
				variable = "quantity";
			};
		};
	};

	class kr_AmmoBox_50BMG_10Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_50BMG";
		descriptionShort = "$STR_kr_weapons_AmmoBox_50BMG";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_50BMG.p3d";
		weight = 1150;
		itemSize[] = {2,2};
		
		class kr_description
		{
			kr_tier = 5;
			kr_caliber = ".50BMG";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_50BMG
			{
				value = 10;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_50BMG_T_10Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_50BMG_T";
		descriptionShort = "$STR_kr_weapons_AmmoBox_50BMG_T";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_50BMG_T.p3d";
		weight = 1150;
		itemSize[] = {2,2};
		
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = ".50BMG";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_50BMG_T
			{
				value = 10;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_50BMG_AP_5Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_50BMG_AP";
		descriptionShort = "$STR_kr_weapons_AmmoBox_50BMG_AP";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_50BMG_AP.p3d";
		weight = 580;
		itemSize[] = {3,2};
		
		class kr_description
		{
			kr_tier = 5;
			kr_caliber = ".50BMG";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_AP.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_AP_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_AP_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_AP_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_AP_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_50BMG_AP
			{
				value = 5;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_50BMG_E_5Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_50BMG_E";
		descriptionShort = "$STR_kr_weapons_AmmoBox_50BMG_E";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_50BMG_E.p3d";
		weight = 580;
		itemSize[] = {3,2};
		
		class kr_description
		{
			kr_tier = 6;
			kr_caliber = ".50BMG";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_AP.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_AP_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_AP_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_AP_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_AP_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_50BMG_E
			{
				value = 5;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_50BMG_ET_5Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_50BMG_ET";
		descriptionShort = "$STR_kr_weapons_AmmoBox_50BMG_ET";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_50BMG_ET.p3d";
		weight = 580;
		itemSize[] = {3,2};
		
		class kr_description
		{
			kr_tier = 6;
			kr_caliber = ".50BMG";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_AP.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_AP_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_AP_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_AP_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_50BMG_AP_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_50BMG_ET
			{
				value = 5;
				variable = "quantity";
			};
		};
	};

	class kr_AmmoBox_12x76_buckshot_5_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_12x76_buckshot_5";
		descriptionShort = "$STR_kr_weapons_AmmoBox_12x76_buckshot_5";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_12x76_buckshot_5.p3d";
		weight = 800;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 0;
			kr_caliber = "12x76";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_buckshot_5.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_buckshot_5_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_buckshot_5_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_buckshot_5_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_buckshot_5_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_12x76_buckshot_5
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_12x76_buckshot_7_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_12x76_buckshot_7";
		descriptionShort = "$STR_kr_weapons_AmmoBox_12x76_buckshot_7";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_12x76_buckshot_7.p3d";
		weight = 800;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "12x76";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_buckshot_5.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_buckshot_5_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_buckshot_5_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_buckshot_5_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_buckshot_5_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_12x76_buckshot_7
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_12x76_buckshot_8_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_12x76_buckshot_8";
		descriptionShort = "$STR_kr_weapons_AmmoBox_12x76_buckshot_8";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_12x76_buckshot_8.p3d";
		weight = 800;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "12x76";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_buckshot_5.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_buckshot_5_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_buckshot_5_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_buckshot_5_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_buckshot_5_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_12x76_buckshot_8
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_12x76_lead_slug_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_12x76_lead_slug";
		descriptionShort = "$STR_kr_weapons_AmmoBox_12x76_lead_slug";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_12x76_lead_slug.p3d";
		weight = 800;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "12x76";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_buckshot_5.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_buckshot_5_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_buckshot_5_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_buckshot_5_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_buckshot_5_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_12x76_lead_slug
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_12x76_Grizzly40_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_12x76_grizzly40";
		descriptionShort = "$STR_kr_weapons_AmmoBox_12x76_grizzly40";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_12x76_grizzly40.p3d";
		weight = 800;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "12x76";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_12x76_Grizzly40
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_12x76_FTX_custom_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_12x76_FTX_custom";
		descriptionShort = "$STR_kr_weapons_AmmoBox_12x76_FTX_custom";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_12x76_FTX_custom.p3d";
		weight = 800;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "12x76";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_12x76_FTX_custom
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_12x76_AP20_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_12x76_AP20";
		descriptionShort = "$STR_kr_weapons_AmmoBox_12x76_AP20";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_12x76_AP20.p3d";
		weight = 800;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "12x76";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_12x76_AP20
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_12x76_RIP_20Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_12x76_RIP";
		descriptionShort = "$STR_kr_weapons_AmmoBox_12x76_RIP";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_12x76_RIP.p3d";
		weight = 800;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "12x76";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_12x76_RIP
			{
				value = 20;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_12x76_devastator_10Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_12x76_devastator";
		descriptionShort = "$STR_kr_weapons_AmmoBox_12x76_devastator";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_12x76_devastator.p3d";
		weight = 400;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "12x76";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_12x76_devastator
			{
				value = 10;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_12x76_frag_12_10Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_12x76_frag_12";
		descriptionShort = "$STR_kr_weapons_AmmoBox_12x76_frag_12";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_12x76_frag_12.p3d";
		weight = 400;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "12x76";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_12x70_AP20_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_12x76_frag_12
			{
				value = 10;
				variable = "quantity";
			};
		};
	};

	class kr_AmmoBox_23x75_shrapnel_10_5Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_23x75_shrapnel_10";
		descriptionShort = "$STR_kr_weapons_AmmoBox_23x75_shrapnel_10";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_23x75_shrapnel_10.p3d";
		weight = 250;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "23x75";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_23x75.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_23x75_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_23x75_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_23x75_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_23x75_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_23x75_shrapnel_10
			{
				value = 5;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_23x75_shrapnel_25_5Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_23x75_shrapnel_25";
		descriptionShort = "$STR_kr_weapons_AmmoBox_23x75_shrapnel_25";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_23x75_shrapnel_20.p3d";
		weight = 250;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "23x75";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_23x75.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_23x75_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_23x75_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_23x75_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_23x75_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_23x75_shrapnel_25
			{
				value = 5;
				variable = "quantity";
			};
		};
	};
	class kr_AmmoBox_23x75_barrikade_5Rnd: kr_Box_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_AmmoBox_23x75_barrikade";
		descriptionShort = "$STR_kr_weapons_AmmoBox_23x75_barrikade";
		model = "\KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\AmmoBox_23x75_barrikade.p3d";
		weight = 250;
		itemSize[] = {2,1};
		
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "23x75";
			kr_bullettype = 0;
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
						{1.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_23x75.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_23x75_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_23x75_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_23x75_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\ammunition\ammoBoxes\data\AmmoBox_23x75_destruct.rvmat"}}
					};
				};
			};
		};
        
		class Resources
		{
			class kr_Ammo_23x75_barrikade
			{
				value = 5;
				variable = "quantity";
			};
		};
	};
};