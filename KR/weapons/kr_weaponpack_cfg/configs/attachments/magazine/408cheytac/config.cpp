class CfgPatches
{
	class kr_magazine_408
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_magazine_Base"};
		magazines[] = {"Mag_408_m200_7Rnd"};
	};
};
class kr_Gunplay_Base;
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_408_Base: kr_magazine_Base
	{
		weightPerQuantityUnit = 10;
		ammo = "Bullet_408CheyTac";
		ammoItems[] = {"kr_Ammo_408CheyTac"};
		hiddenSelections[] = {"camo"};
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = ".408";
		};
	};
	class Mag_408_m200_7Rnd: kr_magazine_408_Base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_408_m200_7Rnd";
		descriptionShort = "$STR_kr_magazines_408_m200_7Rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\408cheytac\Mag_408cheytac_m200_7Rnd.p3d";
		weight = 90;
		itemSize[] = {2,2};
		count = 7;
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		tracersEvery = 0;
		hiddenSelectionsTextures[] = {"KR\weapons\kr_weaponpack\attachments\magazine\408cheytac\data\m200_mag_co.paa"};
		hiddenSelectionsMaterials[] = {"KR\weapons\kr_weaponpack\attachments\magazine\408cheytac\data\m200_mag.rvmat"};
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\attachments\magazine\408cheytac\data\m200_mag.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\attachments\magazine\408cheytac\data\m200_mag_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\attachments\magazine\408cheytac\data\m200_mag_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\attachments\magazine\408cheytac\data\m200_mag_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\attachments\magazine\408cheytac\data\m200_mag_destruct.rvmat"}}};
				};
			};
		};
	};
};
