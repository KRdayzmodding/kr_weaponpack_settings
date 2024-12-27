class CfgPatches
{
	class kr_attachments_ak_receivers
	{
		units[] = {"kr_ak_receiver_akademia_bastion","kr_ak_receiver_zenit_b33","kr_ak_receiver_tws_dog_leg","kr_ak_receiver_fab_defence_pdc","kr_ak_receiver_tactica_tula"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};
class kr_Gunplay_Base;
class cfgVehicles
{
	class kr_ak_receiver_Base;
	class kr_ak_receiver_akademia_bastion: kr_ak_receiver_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_receiver_akademia_bastion";
		descriptionShort = "$STR_kr_weapons_attachments_ak_receiver_akademia_bastion_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_receivers\ak_receiver_akademia_bastion.p3d";
		weight = 240;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\akademia_bastion_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\akademia_bastion.rvmat"};
		itemSize[] = {3,1};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class kr_firearms
		{
			optic = 1;
			receiver = 1;
			sight = 1;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "AKM, AK74/100";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\akademia_bastion.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\akademia_bastion_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\akademia_bastion_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\akademia_bastion_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\akademia_bastion_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_receiver_zenit_b33: kr_ak_receiver_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_receiver_zenit_b33";
		descriptionShort = "$STR_kr_weapons_attachments_ak_receiver_zenit_b33_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_receivers\ak_receiver_zenit_b33.p3d";
		weight = 210;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\zenit_b33_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\zenit_b33.rvmat"};
		itemSize[] = {3,1};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_type = "AKM, AK74/100";
		};
		class kr_firearms
		{
			optic = 1;
			receiver = 1;
			sight = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\zenit_b33.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\zenit_b33_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\zenit_b33_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\zenit_b33_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\zenit_b33_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_receiver_tws_dog_leg: kr_ak_receiver_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_receiver_tws_dog_leg";
		descriptionShort = "$STR_kr_weapons_attachments_ak_receiver_tws_dog_leg_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_receivers\ak_receiver_tws_dog_leg.p3d";
		weight = 195;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\tws_dog_leg_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\tws_dog_leg.rvmat"};
		itemSize[] = {3,1};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_firearms
		{
			optic = 0;
			receiver = 1;
			sight = 1;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "AKM, AK74/100";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\tws_dog_leg.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\tws_dog_leg_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\tws_dog_leg_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\tws_dog_leg_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\tws_dog_leg_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_receiver_fab_defence_pdc: kr_ak_receiver_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_receiver_fab_defence_pdc";
		descriptionShort = "$STR_kr_weapons_attachments_ak_receiver_fab_defence_pdc_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_receivers\ak_receiver_fab_defence_pdc.p3d";
		weight = 200;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\fab_defence_pdc_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\fab_defence_pdc.rvmat"};
		itemSize[] = {3,1};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 0;
		};
		class kr_firearms
		{
			optic = 0;
			receiver = 1;
			sight = 0;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_type = "AKM, AK74/100";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\fab_defence_pdc.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\fab_defence_pdc_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\fab_defence_pdc_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\fab_defence_pdc_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\fab_defence_pdc_destruct.rvmat"}}};
				};
			};
		};
	};
	class kr_ak_receiver_tactica_tula: kr_ak_receiver_Base
	{
		scope = 2;
		displayName = "$STR_kr_weapons_attachments_ak_receiver_tactica_tula";
		descriptionShort = "$STR_kr_weapons_attachments_ak_receiver_tactica_tula_dsc";
		model = "\KR\weapons\kr_weaponpack\attachments\support\ak_receivers\ak_receiver_tactica_tula.p3d";
		weight = 200;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,1.0};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\tactica_tula_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\tactica_tula.rvmat"};
		itemSize[] = {3,1};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class kr_firearms
		{
			optic = 0;
			receiver = 0;
			sight = 0;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_type = "AKM, AK74/100";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\tactica_tula.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\tactica_tula_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\tactica_tula_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\tactica_tula_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\support\ak_receivers\data\tactica_tula_destruct.rvmat"}}};
				};
			};
		};
	};
};
