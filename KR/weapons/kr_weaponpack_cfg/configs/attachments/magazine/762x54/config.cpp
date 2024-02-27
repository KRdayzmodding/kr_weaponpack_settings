class CfgPatches
{
	class kr_magazine_762x54
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data","kr_magazine_Base"};
		magazines[] = {};
	};
};
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_762x54_Base: kr_magazine_Base
	{
		ammoItems[] = {"Ammo_762x54","Ammo_762x54Tracer","kr_Ammo_762x54r_bs","kr_Ammo_762x54r_bthp","kr_Ammo_762x54r_fmj","kr_Ammo_762x54r_lps","kr_Ammo_762x54r_ps","kr_Ammo_762x54r_snb","kr_Ammo_762x54r_t46m","kr_Ammo_762x54_AP"};
		ammo = "Bullet_762x54";
		recoilModifier[] = {1.0,1.0,0.95};
		weightPerQuantityUnit = 35.0;
		tracersEvery = 0;
		class kr_discription
		{
			kr_tier = 1;
			kr_caliber = "7.62x54";
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
	class Mag_762x54_pkp_100Rnd: kr_magazine_762x54_Base
	{
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "7.62x54";
		};
	};
	class Mag_762x54_svd_10Rnd: kr_magazine_762x54_Base
	{
        class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "7.62x54";
		};
	};
	class Mag_762x54_svd_20Rnd: kr_magazine_762x54_Base
	{
        class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "7.62x54";
		};
	};
};
