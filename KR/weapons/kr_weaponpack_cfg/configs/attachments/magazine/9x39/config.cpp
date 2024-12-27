class CfgPatches
{
	class kr_magazine_9x39
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Magazines","kr_magazine_Base"};
		magazines[] = {"Mag_9x39_6l24_10Rnd","Mag_9x39_6l25_20Rnd","Mag_9x39_sr3m_30Rnd","Mag_9x39_9a91_20Rnd"};
	};
};
class kr_Gunplay_Base;
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_9x39_Base: kr_magazine_Base
	{
		scope = 0;
		ammo = "Bullet_9x39";
		ammoItems[] = {"kr_Ammo_9x39_sp5","kr_Ammo_9x39_pab9","kr_Ammo_9x39_sp6","kr_Ammo_9x39_bp","Ammo_9x39","Ammo_9x39AP"};
		weightPerQuantityUnit = 4;
	};
	class Mag_9x39_6l24_10Rnd: kr_magazine_9x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x39_6l24_10Rnd";
		descriptionShort = "$STR_kr_magazines_9x39_6l24_10Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\9x39\Mag_9x39_6l24_10Rnd.p3d";
		weight = 250;
		itemSize[] = {1.0,1};
		count = 10;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\6L24.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\6L24_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = 1;
		};
		class kr_description
		{
			kr_tier = 1;
			kr_caliber = "9x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\6L24.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\6L24_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\6L24_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\6L24_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\6L24_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "metal";
	};
	class Mag_9x39_6l25_20Rnd: kr_magazine_9x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x39_6l25_20Rnd";
		descriptionShort = "$STR_kr_magazines_9x39_6l25_20Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\9x39\Mag_9x39_6l25_20Rnd.p3d";
		weight = 300;
		itemSize[] = {1.0,2};
		count = 20;
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\6L25.rvmat"};
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\6L25_co.paa"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -2;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\6L25.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\6L25_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\6L25_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\6L25_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\6L25_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "metal";
	};
	class Mag_9x39_sr3m_30Rnd: kr_magazine_9x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x39_sr3m_30Rnd";
		descriptionShort = "$STR_kr_magazines_9x39_sr3m_30Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\9x39\Mag_9x39_sr3m_30Rnd.p3d";
		weight = 450;
		itemSize[] = {1.0,3};
		count = 30;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\sr3m130_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\sr3m130.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "9x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\sr3m130.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\sr3m130_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\sr3m130_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\sr3m130_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\sr3m130_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "metal";
	};
	class Mag_9x39_9a91_20Rnd: kr_magazine_9x39_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_9x39_9a91_20Rnd";
		descriptionShort = "$STR_kr_magazines_9x39_9a91_20Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\9x39\Mag_9x39_9a91_20Rnd.p3d";
		weight = 150;
		itemSize[] = {1.0,2};
		count = 20;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\9a91_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\9a91.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "9x39";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\9a91.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\9a91_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\9a91_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\9a91_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\9x39\data\9a91_destruct.rvmat"}}};
				};
			};
		};
		soundImpactType = "metal";
	};
};
