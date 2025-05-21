class CfgPatches
{
	class kr_weapons_ASH12_magazine
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","kr_data","kr_weapons_ASH12"};
		magazines[] = {"Mag_127x55_ash12_10Rnd","Mag_127x55_ash12_20Rnd"};
	};
};
class kr_Gunplay_Base;
class CfgMagazines
{
	class Magazine_Base;
	class Mag_127x55_ash12_base: Magazine_Base
	{
		scope = 0;
		ammo = "Bullet_127x55_PS12";
		ammoItems[] = {"kr_Ammo_127x55_PS12","kr_Ammo_127x55_PS12A","kr_Ammo_127x55_PS12B"};
		tracersEvery = 0;
		recoilModifier[] = {1,1,1};	
		swayModifier[] = {1,1,1};
		class kr_description
		{
			kr_tier = 2;
			kr_caliber = "12.7x55";
		};

		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class Mag_127x55_ash12_10Rnd: Mag_127x55_ash12_base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_127x55_ASH12mag_10rnd";
		descriptionShort = "$STR_kr_magazines_127x55_ASH12mag_10rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\127x55\ash_mag10.p3d";
		weight = 45;
		itemSize[] = {1,2};
		count = 10;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -1;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "12.7x55  AShA12";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_127x55_ash12_20Rnd: Mag_127x55_ash12_base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_127x55_ASH12mag_20rnd";
		descriptionShort = "$STR_kr_magazines_127x55_ASH12mag_20rnd_dsc";
		model = "KR\weapons\kr_weaponpack\attachments\magazine\127x55\ash_mag20.p3d";
		weight = 45;
		itemSize[] = {1,3};
		swayModifier[] = {1,1.15,1.15};
		count = 20;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -5;
		};
		class kr_description
		{
			kr_tier = 4;
			kr_caliber = "12.7x55 AShA12";
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD.rvmat"}},{0.7,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD_worn.rvmat"}},{0.5,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD_damage.rvmat"}},{0.3,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD_badlydamage.rvmat"}},{0.0,{"KR\weapons\kr_weaponpack\kr_weapons_firearms\ASH12\data\ASH12_ADD_destruct.rvmat"}}};
				};
			};
		};
	};

	class Mag_127x55_vssk_10Rnd: Mag_127x55_ash12_base
	{
		scope = 2;
		displayName = "$STR_kr_magazines_127x55_vssk_10rnd";
		descriptionShort = "$STR_kr_magazines_127x55_vssk_10rnd_dsc";
		model = "KR\weapons\kr_weaponpack_2\attachments\magazine\127x55\Mag_127x55_vssk_10Rnd.p3d";
		weight = 90;
		itemSize[] = {1,2};
		count = 10;
		class kr_Gunplay: kr_Gunplay_Base
		{
			ergonomics = -3;
		};
		class kr_description
		{
			kr_tier = 3;
			kr_caliber = "12.7x55 VSSK";
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
						{1.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\127x55\data\vssk_magazine.rvmat"}},
						{0.7,{"KR\weapons\kr_weaponpack_2\attachments\magazine\127x55\data\vssk_magazine_worn.rvmat"}},
						{0.5,{"KR\weapons\kr_weaponpack_2\attachments\magazine\127x55\data\vssk_magazine_damage.rvmat"}},
						{0.3,{"KR\weapons\kr_weaponpack_2\attachments\magazine\127x55\data\vssk_magazine_badlydamage.rvmat"}},
						{0.0,{"KR\weapons\kr_weaponpack_2\attachments\magazine\127x55\data\vssk_magazine_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
