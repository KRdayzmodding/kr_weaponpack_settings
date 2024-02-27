class CfgPatches
{
	class kr_magazine_12x76_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"kr_magazine_12x76"};
		magazines[] = {};
	};
};
class CfgMagazines
{
	class kr_magazine_Base;
	class kr_magazine_12x76_Base: kr_magazine_Base
	{
		ammoItems[] += {"kr_Ammo_12x76_buckshot_5","kr_Ammo_12x76_buckshot_7","kr_Ammo_12x76_buckshot_8","kr_Ammo_12x76_RIP","kr_Ammo_12x76_FTX_custom","kr_Ammo_12x76_lead_slug","kr_Ammo_12x76_AP20","kr_Ammo_12x76_Grizzly40","kr_Ammo_12x76_frag_12","kr_Ammo_12x76_devastator"};
		ammo = "Bullet_12GaugePellets";
		recoilModifier[] = {1.0,1.0,0.95};
		weightPerQuantityUnit = 35.0;
		tracersEvery = 0;
		class kr_discription
		{
			kr_tier = 1;
			kr_caliber = "12x76";
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
	class Mag_12x76_izhmash_Sb5_5Rnd: kr_magazine_12x76_Base
	{
		class kr_discription
		{
			kr_tier = 1;
			kr_caliber = "12x76";
		};
	};
	class Mag_12x76_vpo205_std_8Rnd: kr_magazine_12x76_Base
	{
		class kr_discription
		{
			kr_tier = 2;
			kr_caliber = "12x76";
		};
	};
	class Mag_12x76_promag_sai_02_10Rnd: kr_magazine_12x76_Base
	{
		class kr_discription
		{
			kr_tier = 3;
			kr_caliber = "12x76";
		};	
	};
	class Mag_12x76_maxrounds_powermag_20Rnd: kr_magazine_12x76_Base
	{
		class kr_discription
		{
			kr_tier = 4;
			kr_caliber = "12x76";
		};
	};
};
