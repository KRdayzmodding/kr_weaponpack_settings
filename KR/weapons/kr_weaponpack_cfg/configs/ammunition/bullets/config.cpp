class CfgPatches
{
	class kr_weaponpack_ammunition_bullets
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Projectiles","kr_data"};
		ammo[] = {};
	};
};

class kr_Gunplay_Base;
class CfgAmmo
{
	class Bullet_Base;
	class Shotgun_Base;
	class Bullet_HollowPointTech_Base: Bullet_Base
	{
		scope = 0;
		round = "";
		spawnPileType = "";
		hit = 7;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		caliber = 0.8;
		deflecting = 30;
		initSpeed = 350;
		typicalSpeed = 380;
		airFriction = -0.0023;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		damageBarrel = 166.66667;
		damageBarrelDestroyed = 166.66667;
		weight = 0.0084;
		impactBehaviour = 0;
		hitAnimation = 0;
		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			defaultDamageOverrideString = "{{0.95,1.0}}";
			class Health
			{
				damage = 1;
			};
			class Blood
			{
				damage = 1;
			};
			class Shock
			{
				damage = 1;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};

	class kr_Bullet_9x19_Base: Bullet_Base
	{
		scope = 0;
		round = "";
		spawnPileType = "";
		casing = "FxCartridge_kr_9x19";
		hit = 7;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		caliber = 0.8;
		deflecting = 30;
		initSpeed = 350;
		typicalSpeed = 380;
		airFriction = -0.0023;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		damageBarrel = 166.66667;
		damageBarrelDestroyed = 166.66667;
		weight = 0.0084;
		impactBehaviour = 0;
		hitAnimation = 0;
		unconRefillModifier = 6;
		kr_caliber = "9x19";
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			defaultDamageOverrideString = "{{0.95,1.0}}";
			class Health
			{
				damage = 40;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_9x19_quakemaker: kr_Bullet_9x19_Base
	{
		scope = 1;
		round = "FxRound_9x19_quakemaker";
		spawnPileType = "kr_Ammo_9x19_quakemaker";
		initSpeed = 290;
		typicalSpeed = 290;
		airFriction = -0.003;
		damageBarrel = 263;
		damageBarrelDestroyed = 263;
		weight = 0.0084;
		unconRefillModifier = 6;
		dispersion = 0.005;
		hit = 8.5;

		class kr_Gunplay: kr_Gunplay_Base
		{
			isHollowPoint = 1;
			hollowPointMultiplier = 11;
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.955, 1.0}, {0.941, 0.8}, {0.928, 0.5}, {0.914, 0.1}};
			defaultDamageOverrideString = "{{0.955, 1.0}, {0.941, 0.8}, {0.928, 0.5}, {0.914, 0.1}}";

			class Health
			{
				damage = 10;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
	};

	class Bullet_9x19_rip: kr_Bullet_9x19_Base
	{
		scope = 1;
		round = "FxRound_9x19_rip";
		spawnPileType = "kr_Ammo_9x19_rip";
		initSpeed = 381;
		typicalSpeed = 381;
		airFriction = -0.005;
		damageBarrel = 315;
		damageBarrelDestroyed = 315;
		weight = 0.0034;
		unconRefillModifier = 6;
		dispersion = 0.002;
		hit = 8.5;

		class kr_Gunplay: kr_Gunplay_Base
		{
			isHollowPoint = 1;
			hollowPointMultiplier = 7.5;
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.927, 1.0}, {0.861, 0.8}, {0.819, 0.5}, {0.798, 0.1}};
			defaultDamageOverrideString = "{{0.927, 1.0}, {0.861, 0.8}, {0.819, 0.5}, {0.798, 0.1}}";

			class Health
			{
				damage = 10;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{0.98, 1.0}, {0.94, 0.5}, {0.78, 0.1}};
				damageOverrideString = "{{0.98, 1.0}, {0.94, 0.5}, {0.78, 0.1}}";
			};
		};
	};

	class Bullet_HollowPointTech: Bullet_9x19_quakemaker
	{
		scope = 1;
		class kr_Gunplay: kr_Gunplay_Base
		{
			isHollowPoint = 0;
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			defaultDamageOverrideString = "{{0.95,1.0}}";
			class Health
			{
				damage = 10;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
	};

	class Bullet_9x19_pso_gz: kr_Bullet_9x19_Base
	{
		scope = 1;
		round = "FxRound_9x19_pso_gz";
		spawnPileType = "kr_Ammo_9x19_pso_gz";
		initSpeed = 340;
		typicalSpeed = 340;
		airFriction = -0.0023;
		damageBarrel = 193;
		damageBarrelDestroyed = 193;
		weight = 0.0084;
		unconRefillModifier = 6;
		dispersion = 0.0005;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.956, 1.0}, {0.912, 0.8}, {0.871, 0.5}, {0.794, 0.3}};
			defaultDamageOverrideString = "{{0.956, 1.0}, {0.912, 0.8}, {0.871, 0.5}, {0.794, 0.3}}";

			class Health
			{
				damage = 48;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{0.98, 1.0}, {0.78, 0.3}};
				damageOverrideString = "{{0.98, 1.0}, {0.78, 0.3}}";
			};
		};
	};

	class Bullet_9x19_gt: kr_Bullet_9x19_Base
	{
		scope = 1;
		round = "FxRound_9x19_gt";
		spawnPileType = "kr_Ammo_9x19_gt";
		initSpeed = 365;
		typicalSpeed = 365;
		airFriction = -0.0015;
		damageBarrel = 192;
		damageBarrelDestroyed = 192;
		weight = 0.0084;
		tracerScale = 1.0;
		tracerStartTime = 0.01;
		tracerEndTime = 1;
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\pistol_tracer_green.p3d";
		unconRefillModifier = 6;
		dispersion = 0.001;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.97, 1.0}, {0.942, 0.8}, {0.915, 0.5}, {0.86, 0.3}};
			defaultDamageOverrideString = "{{0.97, 1.0}, {0.942, 0.8}, {0.915, 0.5}, {0.86, 0.3}}";

			class Health
			{
				damage = 40;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{0.97, 1.0}, {0.86, 0.3}};
				damageOverrideString = "{{0.97, 1.0}, {0.86, 0.3}}";
			};
		};
	};

	class Bullet_9x19_7n21: kr_Bullet_9x19_Base
	{
		scope = 1;
		round = "FxRound_9x19_7n21";
		spawnPileType = "kr_Ammo_9x19_7n21";
		initSpeed = 457;
		typicalSpeed = 457;
		airFriction = -0.0023;
		damageBarrel = 380;
		damageBarrelDestroyed = 380;
		weight = 0.0084;
		unconRefillModifier = 6;
		dispersion = -0.0005;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.943, 1.0}, {0.902, 0.8}, {0.862, 0.5}, {0.794, 0.3}};
			defaultDamageOverrideString = "{{0.943, 1.0}, {0.902, 0.8}, {0.862, 0.5}, {0.794, 0.3}}";

			class Health
			{
				armorDamage = 1.7;
				damage = 49;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{0.98, 1.0}, {0.94, 0.5}, {0.78, 0.1}};
				damageOverrideString = "{{0.98, 1.0}, {0.94, 0.5}, {0.78, 0.1}}";
			};
		};
	};

	class Bullet_9x19_7n31: kr_Bullet_9x19_Base
	{
		scope = 1;
		round = "FxRound_9x19_7n31";
		spawnPileType = "kr_Ammo_9x19_7n31";
		initSpeed = 457;
		typicalSpeed = 457;
		airFriction = -0.0015;
		damageBarrel = 472;
		damageBarrelDestroyed = 472;
		weight = 0.0084;
		unconRefillModifier = 6;
		dispersion = 0.0005;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.969, 1.0}, {0.941, 0.8}, {0.915, 0.5}, {0.86, 0.3}};
			defaultDamageOverrideString = "{{0.969, 1.0}, {0.941, 0.8}, {0.915, 0.5}, {0.86, 0.3}}";

			class Health
			{
				armorDamage = 3;
				damage = 40;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
	};

	class Bullet_9x19_ap_63: kr_Bullet_9x19_Base
	{
		scope = 1;
		round = "FxRound_9x19_ap_63";
		spawnPileType = "kr_Ammo_9x19_ap_63";
		initSpeed = 365;
		typicalSpeed = 365;
		airFriction = -0.003;
		damageBarrel = 380;
		damageBarrelDestroyed = 380;
		weight = 0.0084;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.901, 1.0}, {0.836, 0.8}, {0.797, 0.5}, {0.74, 0.3}};
			defaultDamageOverrideString = "{{0.901, 1.0}, {0.836, 0.8}, {0.797, 0.5}, {0.74, 0.3}}";

			class Health
			{
				armorDamage = 3;
				damage = 45;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
	};

	class kr_Bullet_9x18_Base: Bullet_Base
	{
		scope = 0;
		round = "";
		spawnPileType = "";
		casing = "FxCartridge_kr_9x18";
		hit = 5.5;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		caliber = 0.8;
		deflecting = 30;
		initSpeed = 300;
		typicalSpeed = 345;
		airFriction = -0.0015;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		damageBarrel = 150;
		damageBarrelDestroyed = 150;
		weight = 0.006;
		hitAnimation = 0;
		unconRefillModifier = 6;
		kr_caliber = "9x18";
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 35;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 35;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};

	class Bullet_9x18_sp7_gz: kr_Bullet_9x18_Base
	{
		scope = 1;
		round = "FxRound_9x18_sp7_gz";
		spawnPileType = "kr_Ammo_9x18_sp7_gz";
		initSpeed = 290;
		typicalSpeed = 290;
		airFriction = -0.0015;
		damageBarrel = 180;
		damageBarrelDestroyed = 180;
		weight = 0.0084;
		unconRefillModifier = 6;
		dispersion = 0.005;
		hit = 7;

		class kr_Gunplay: kr_Gunplay_Base
		{
			isHollowPoint = 1;
			hollowPointMultiplier = 8;
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.7;
			defaultDamageOverride[] = {{0.993, 1.0}, {0.986, 0.8}, {0.979, 0.5}, {0.962, 0.1}};
			defaultDamageOverrideString = "{{0.993, 1.0}, {0.986, 0.8}, {0.979, 0.5}, {0.962, 0.1}}";

			class Health
			{
				damage = 8;
			};

			class Blood
			{
				damage = 70;
			};

			class Shock
			{
				damage = 15;
				damageOverride[] = {{0.979, 1.0}, {0.962, 0.5}, {0.928, 0.1}};
				damageOverrideString = "{{0.979, 1.0}, {0.962, 0.5}, {0.928, 0.1}}";
			};
		};
	};

	class Bullet_9x18_ppt_gz: kr_Bullet_9x18_Base
	{
		scope = 1;
		round = "FxRound_9x18_ppt_gz";
		spawnPileType = "kr_Ammo_9x18_ppt_gz";
		initSpeed = 301;
		typicalSpeed = 301;
		airFriction = -0.0025;
		damageBarrel = 171;
		damageBarrelDestroyed = 171;
		weight = 0.0084;
		tracerScale = 1.0;
		tracerStartTime = 0.01;
		tracerEndTime = 1;
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\pistol_tracer_green.p3d";
		unconRefillModifier = 6;
		dispersion = 0.001;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.5;
			defaultDamageOverride[] = {{0.977, 1.0}, {0.94, 0.8}, {0.917, 0.5}, {0.85, 0.4}};
			defaultDamageOverrideString = "{{0.977, 1.0}, {0.94, 0.8}, {0.917, 0.5}, {0.85, 0.4}}";

			class Health
			{
				damage = 35;
			};

			class Blood
			{
				damage = 30;
			};

			class Shock
			{
				damage = 20;
				damageOverride[] = {{0.94, 1.0}, {0.917, 0.8}, {0.89, 0.3}, {0.777, 0.1}};
				damageOverrideString = "{{0.94, 1.0}, {0.917, 0.8}, {0.89, 0.3}, {0.777, 0.1}}";
			};
		};
	};

	class Bullet_9x18_pso_gz: kr_Bullet_9x18_Base
	{
		scope = 1;
		round = "FxRound_9x18_pso_gz";
		spawnPileType = "kr_Ammo_9x18_pso_gz";
		initSpeed = 315;
		typicalSpeed = 315;
		airFriction = -0.0015;
		damageBarrel = 150;
		damageBarrelDestroyed = 150;
		weight = 0.0084;
		unconRefillModifier = 6;
		dispersion = 0.001;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.978, 1.0}, {0.956, 0.8}, {0.943, 0.5}, {0.914, 0.4}};
			defaultDamageOverrideString = "{{0.978, 1.0}, {0.956, 0.8}, {0.943, 0.5}, {0.914, 0.4}}";

			class Health
			{
				damage = 38;
			};

			class Blood
			{
				damage = 30;
			};

			class Shock
			{
				damage = 25;
				damageOverride[] = {{0.956, 1.0}, {0.943, 0.8}, {0.914, 0.3}};
				damageOverrideString = "{{0.956, 1.0}, {0.943, 0.8}, {0.914, 0.3}}";
			};
		};
	};

	class Bullet_9x18_pst_gz: kr_Bullet_9x18_Base
	{
		scope = 1;
		round = "FxRound_9x18_pst_gz";
		spawnPileType = "kr_Ammo_9x18_pst_gz";
		initSpeed = 298;
		typicalSpeed = 298;
		airFriction = -0.0015;
		damageBarrel = 171;
		damageBarrelDestroyed = 171;
		weight = 0.0084;
		unconRefillModifier = 6;
		dispersion = 0.0005;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.97, 1.0}, {0.95, 0.8}, {0.936, 0.5}, {0.916, 0.4}};
			defaultDamageOverrideString = "{{0.97, 1.0}, {0.95, 0.8}, {0.936, 0.5}, {0.916, 0.4}}";

			class Health
			{
				damage = 40;
			};

			class Blood
			{
				damage = 30;
			};

			class Shock
			{
				damage = 25;
				damageOverride[] = {{0.956, 1.0}, {0.943, 0.8}, {0.859, 0.1}};
				damageOverrideString = "{{0.956, 1.0}, {0.943, 0.8}, {0.859, 0.1}}";
			};
		};
	};

	class Bullet_9x18_pmm_gz: kr_Bullet_9x18_Base
	{
		scope = 1;
		round = "FxRound_9x18_pmm_gz";
		spawnPileType = "kr_Ammo_9x18_pmm_gz";
		initSpeed = 420;
		typicalSpeed = 420;
		airFriction = -0.001;
		damageBarrel = 240;
		damageBarrelDestroyed = 240;
		weight = 0.0034;
		unconRefillModifier = 6;
		dispersion = -0.0005;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.976, 1.0}, {0.967, 0.8}, {0.957, 0.5}, {0.905, 0.3}};
			defaultDamageOverrideString = "{{0.976, 1.0}, {0.967, 0.8}, {0.957, 0.5}, {0.905, 0.3}}";

			class Health
			{
				armorDamage = 2;
				damage = 44;
			};

			class Blood
			{
				damage = 30;
			};

			class Shock
			{
				damage = 30;
				damageOverride[] = {{0.967, 1.0}, {0.888, 0.1}};
				damageOverrideString = "{{0.967, 1.0}, {0.888, 0.1}}";
			};
		};
	};

	class Bullet_9x18_pbm_gz: kr_Bullet_9x18_Base
	{
		scope = 1;
		round = "FxRound_9x18_pbm_gz";
		spawnPileType = "kr_Ammo_9x18_pbm_gz";
		initSpeed = 519;
		typicalSpeed = 519;
		airFriction = -0.0015;
		damageBarrel = 255;
		damageBarrelDestroyed = 255;
		weight = 0.0084;
		unconRefillModifier = 6;
		dispersion = 0.0005;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.977, 1.0}, {0.956, 0.8}, {0.934, 0.5}, {0.861, 0.3}};
			defaultDamageOverrideString = "{{0.977, 1.0}, {0.956, 0.8}, {0.934, 0.5}, {0.861, 0.3}}";

			class Health
			{
				armorDamage = 3.3;
				damage = 47;
			};

			class Blood
			{
				damage = 30;
			};

			class Shock
			{
				damage = 15;
				damageOverride[] = {{0.979, 1.0}, {0.962, 0.5}, {0.855, 0.1}};
				damageOverrideString = "{{0.979, 1.0}, {0.962, 0.5}, {0.855, 0.1}}";
			};
		};
	};

	class kr_Bullet_762x25_Base: Bullet_Base
	{
		scope = 0;
		round = "";
		spawnPileType = "";
		casing = "FxCartridge_kr_762x25";
		hit = 7.5;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		caliber = 0.8;
		deflecting = 30;
		initSpeed = 300;
		typicalSpeed = 345;
		airFriction = -0.0015;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		damageBarrel = 150;
		damageBarrelDestroyed = 150;
		weight = 0.006;
		hitAnimation = 0;
		unconRefillModifier = 6;
		kr_caliber = "7.62x25";
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 35;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 35;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};

	class Bullet_762x25_PT_gz: kr_Bullet_762x25_Base
	{
		scope = 1;
		round = "FxRound_762x25_PT_gz";
		spawnPileType = "kr_Ammo_762x25_PT_gz";
		initSpeed = 415;
		typicalSpeed = 415;
		airFriction = -0.0015;
		damageBarrel = 300;
		damageBarrelDestroyed = 300;
		weight = 0.0084;
		tracerScale = 1.0;
		tracerStartTime = 0.01;
		tracerEndTime = 1;
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\pistol_tracer_red.p3d";
		unconRefillModifier = 6;
		dispersion = 0.0005;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.964, 1.0}, {0.949, 0.8}, {0.935, 0.5}, {0.86, 0.3}};
			defaultDamageOverrideString = "{{0.964, 1.0}, {0.949, 0.8}, {0.935, 0.5}, {0.86, 0.3}}";

			class Health
			{
				damage = 45;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{1.0, 1.0},  {0.985, 0.5}, {0.861, 0.2}};
				damageOverrideString = "{{1.0, 1.0},  {0.985, 0.5}, {0.861, 0.2}}";
			};
		};
	};

	class Bullet_762x25_PST_gz: kr_Bullet_762x25_Base
	{
		scope = 1;
		round = "FxRound_762x25_PST_gz";
		spawnPileType = "kr_Ammo_762x25_PST_gz";
		initSpeed = 430;
		typicalSpeed = 430;
		airFriction = -0.0015;
		damageBarrel = 280;
		damageBarrelDestroyed = 280;
		weight = 0.0084;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.956, 1.0}, {0.942, 0.8}, {0.928, 0.5}, {0.86, 0.3}};
			defaultDamageOverrideString = "{{0.956, 1.0}, {0.942, 0.8}, {0.928, 0.5}, {0.86, 0.3}}";

			class Health
			{
				armorDamage = 1.7;
				damage = 43;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{1.0, 1.0},  {0.955, 0.5}, {0.861, 0.2}};
				damageOverrideString = "{{1.0, 1.0},  {0.955, 0.5}, {0.861, 0.2}}";
			};
		};
	};

	class Bullet_762x25_FMJ43: kr_Bullet_762x25_Base
	{
		scope = 1;
		round = "FxRound_762x25_FMJ43";
		spawnPileType = "kr_Ammo_762x25_FMJ43";
		initSpeed = 427;
		typicalSpeed = 427;
		airFriction = -0.0015;
		damageBarrel = 200;
		damageBarrelDestroyed = 200;
		weight = 0.0084;
		unconRefillModifier = 6;
		dispersion = -0.0003;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.956, 1.0}, {0.941, 0.8}, {0.913, 0.5}, {0.862, 0.3}};
			defaultDamageOverrideString = "{{0.956, 1.0}, {0.941, 0.8}, {0.913, 0.5}, {0.862, 0.3}}";

			class Health
			{
				damage = 50;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{1.0, 1.0},  {0.955, 0.5}, {0.861, 0.2}};
				damageOverrideString = "{{1.0, 1.0},  {0.955, 0.5}, {0.861, 0.2}}";
			};
		};
	};

	class Bullet_762x25_AKBS: kr_Bullet_762x25_Base
	{
		scope = 1;
		round = "FxRound_762x25_AKBS";
		spawnPileType = "kr_Ammo_762x25_AKBS";
		initSpeed = 425;
		typicalSpeed = 425;
		airFriction = -0.0015;
		damageBarrel = 228;
		damageBarrelDestroyed = 228;
		weight = 0.0084;
		unconRefillModifier = 6;
		dispersion = 0.001;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.969, 1.0}, {0.955, 0.8}, {0.941, 0.5}, {0.861, 0.3}};
			defaultDamageOverrideString = "{{0.969, 1.0}, {0.955, 0.8}, {0.941, 0.5}, {0.861, 0.3}}";

			class Health
			{
				damage = 40;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 30;
				damageOverride[] = {{1.0, 1.0},  {0.985, 0.5}, {0.861, 0.2}};
				damageOverrideString = "{{1.0, 1.0},  {0.985, 0.5}, {0.861, 0.2}}";
			};
		};
	};

	class Bullet_762x25_HP: kr_Bullet_762x25_Base
	{
		scope = 1;
		round = "FxRound_762x25_HP";
		spawnPileType = "kr_Ammo_762x25_HP";
		initSpeed = 400;
		typicalSpeed = 400;
		airFriction = -0.0015;
		damageBarrel = 310;
		damageBarrelDestroyed = 310;
		weight = 0.0084;
		unconRefillModifier = 6;
		dispersion = 0.005;
		hit = 8.5;

		class kr_Gunplay: kr_Gunplay_Base
		{
			isHollowPoint = 1;
			hollowPointMultiplier = 8.5;
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.7;
			defaultDamageOverride[] = {{0.985, 1.0}, {0.978, 0.8}, {0.97, 0.5}, {0.963, 0.1}};
			defaultDamageOverrideString = "{{0.985, 1.0}, {0.978, 0.8}, {0.97, 0.5}, {0.963, 0.1}}";

			class Health
			{
				damage = 9;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{1.0, 1.0},  {0.97, 0.5}, {0.94, 0.2}};
				damageOverrideString = "{{1.0, 1.0},  {0.97, 0.5}, {0.94, 0.2}}";
			};
		};
	};

	class kr_Bullet_545x39_Base: Bullet_Base
	{
		scope = 0;
		spawnPileType = "Ammo_545x39";
		round = "FxRound_556";
		casing = "FxCartridge_kr_545x39";
		hit = 7.2;
		airFriction = -0.00125;
		typicalSpeed = 880;
		initSpeed = 880;
		caliber = 0.9;
		deflecting = 10;
		damageBarrel = 214.28572;
		damageBarrelDestroyed = 214.28572;
		weight = 0.00343;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		kr_caliber = "5.45x39";
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 115;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 115;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};

	class Bullet_545x39_BS: kr_Bullet_545x39_Base
	{
		scope = 1;
		round = "FxRound_545x39_BS";
		spawnPileType = "kr_Ammo_545x39_BS";
		initSpeed = 880;
		typicalSpeed = 880;
		airFriction = -0.00125;
		damageBarrel = 400;
		damageBarrelDestroyed = 400;
		weight = 0.00343;
		unconRefillModifier = 6;
		dispersion = 0.0001;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.829, 1.0}, {0.799, 0.8}, {0.713, 0.5}, {0.646, 0.3}};
			defaultDamageOverrideString = "{{0.829, 1.0}, {0.799, 0.8}, {0.713, 0.5}, {0.646, 0.3}}";

			class Health
			{
				armorDamage = 3;
				damage = 110;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 50;
				damageOverride[] = {{0.9, 1.0},{0.5, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.5, 0.1}}";
			};
		};
	};

	class Bullet_545x39_BT: kr_Bullet_545x39_Base
	{
		scope = 1;
		round = "FxRound_545x39_BT";
		spawnPileType = "kr_Ammo_545x39_BT";
		initSpeed = 600;
		typicalSpeed = 600;
		airFriction = -0.0017;
		damageBarrel = 350;
		damageBarrelDestroyed = 350;
		weight = 0.012;
		tracerScale = 2.0;
		tracerStartTime = 0.01;
		tracerEndTime = 1;
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\pistol_tracer_red.p3d";
		unconRefillModifier = 6;
		dispersion = 0.0005;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.815, 1.0}, {0.762, 0.8}, {0.712, 0.5}, {0.653, 0.3}};
			defaultDamageOverrideString = "{{0.815, 1.0}, {0.762, 0.8}, {0.712, 0.5}, {0.653, 0.3}}";

			class Health
			{
				armorDamage = 3;
				damage = 120;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 50;
				damageOverride[] = {{0.9, 1.0},{0.5, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.5, 0.1}}";
			};
		};
	};

	class Bullet_545x39_FMJ: kr_Bullet_545x39_Base
	{
		scope = 1;
		round = "FxRound_545x39_FMJ";
		spawnPileType = "kr_Ammo_545x39_FMJ";
		initSpeed = 884;
		typicalSpeed = 884;
		airFriction = -0.00125;
		damageBarrel = 270;
		damageBarrelDestroyed = 270;
		weight = 0.00343;
		unconRefillModifier = 6;
		dispersion = 0.0005;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.894, 1.0}, {0.799, 0.8}, {0.759, 0.5}, {0.714, 0.3}};
			defaultDamageOverrideString = "{{0.894, 1.0}, {0.799, 0.8}, {0.759, 0.5}, {0.714, 0.3}}";

			class Health
			{
				damage = 115;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 115;
				damageOverride[] = {{0.9, 1.0},{0.7, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.7, 0.1}}";
			};
		};
	};

	class Bullet_545x39_PRS: kr_Bullet_545x39_Base
	{
		scope = 1;
		round = "FxRound_545x39_PRS";
		spawnPileType = "kr_Ammo_545x39_PRS";
		initSpeed = 866;
		typicalSpeed = 866;
		airFriction = -0.0017;
		damageBarrel = 166.5;
		damageBarrelDestroyed = 166.5;
		weight = 0.00643;
		unconRefillModifier = 6;
		dispersion = 0.0005;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.888, 1.0}, {0.801, 0.8}, {0.724, 0.5}, {0.654, 0.3}};
			defaultDamageOverrideString = "{{0.888, 1.0}, {0.801, 0.8}, {0.724, 0.5}, {0.654, 0.3}}";

			class Health
			{
				damage = 75;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 50;
				damageOverride[] = {{0.9, 1.0},{0.6, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.6, 0.1}}";
			};
		};
	};

	class Bullet_545x39_PS: kr_Bullet_545x39_Base
	{
		scope = 1;
		round = "FxRound_545x39_PS";
		spawnPileType = "kr_Ammo_545x39_PS";
		initSpeed = 890;
		typicalSpeed = 890;
		airFriction = -0.00125;
		damageBarrel = 300;
		damageBarrelDestroyed = 300;
		weight = 0.00343;
		unconRefillModifier = 6;
		dispersion = -0.0003;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.893, 1.0}, {0.799, 0.8}, {0.713, 0.5}, {0.646, 0.3}};
			defaultDamageOverrideString = "{{0.893, 1.0}, {0.799, 0.8}, {0.713, 0.5}, {0.646, 0.3}}";

			class Health
			{
				damage = 100;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 70;
				damageOverride[] = {{0.9, 1.0},{0.5, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.5, 0.1}}";
			};
		};
	};

	class Bullet_545x39_T: kr_Bullet_545x39_Base
	{
		scope = 1;
		round = "FxRound_545x39_T";
		spawnPileType = "kr_Ammo_545x39_T";
		initSpeed = 883;
		typicalSpeed = 883;
		airFriction = -0.00125;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		weight = 0.00343;
		tracerScale = 2.0;
		tracerStartTime = 0.01;
		tracerEndTime = 1;
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\pistol_tracer_green.p3d";
		unconRefillModifier = 6;
		dispersion = -0.0003;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.894, 1.0}, {0.819, 0.8}, {0.779, 0.5}, {0.732, 0.3}};
			defaultDamageOverrideString = "{{0.894, 1.0}, {0.819, 0.8}, {0.779, 0.5}, {0.732, 0.3}}";

			class Health
			{
				damage = 75;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 50;
				damageOverride[] = {{0.9, 1.0},{0.68, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.68, 0.1}}";
			};
		};
	};

	class Bullet_545x39_US: kr_Bullet_545x39_Base
	{
		scope = 1;
		round = "FxRound_545x39_US";
		spawnPileType = "kr_Ammo_545x39_US";
		initSpeed = 303;
		typicalSpeed = 303;
		airFriction = -0.00125;
		damageBarrel = 200;
		damageBarrelDestroyed = 200;
		weight = 0.012;
		unconRefillModifier = 6;
		dispersion = -0.0002;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.881, 1.0}, {0.861, 0.8}, {0.828, 0.5}, {0.789, 0.3}};
			defaultDamageOverrideString = "{{0.881, 1.0}, {0.861, 0.8}, {0.828, 0.5}, {0.789, 0.3}}";

			class Health
			{
				armorDamage = 1.5;
				damage = 80;
			};

			class Blood
			{
				damage = 220;
			};

			class Shock
			{
				damage = 65;
				damageOverride[] = {{0.861, 1.0}, {0.851, 0.8}, {0.775, 0.1}};
				damageOverrideString = "{{0.861, 1.0}, {0.851, 0.8}, {0.775, 0.1}}";
			};
		};
	};

	class Bullet_545x39_HP: kr_Bullet_545x39_Base
	{
		scope = 1;
		round = "FxRound_545x39_HP";
		spawnPileType = "kr_Ammo_545x39_HP";
		initSpeed = 450;
		typicalSpeed = 450;
		airFriction = -0.0017;
		damageBarrel = 320;
		damageBarrelDestroyed = 320;
		weight = 0.009;
		unconRefillModifier = 6;
		dispersion = 0.0045;

		class kr_Gunplay: kr_Gunplay_Base
		{
			isHollowPoint = 1;
			hollowPointMultiplier = 14;
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.7;
			defaultDamageOverride[] = {{0.982, 1.0}, {0.967, 0.8}, {0.918, 0.5}, {0.844, 0.1}};
			defaultDamageOverrideString = "{{0.982, 1.0}, {0.967, 0.8}, {0.918, 0.5}, {0.844, 0.1}}";

			class Health
			{
				damage = 12;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 25;
				damageOverride[] = {{0.97, 1.0},{0.7, 0.1}};
				damageOverrideString = "{{0.97, 1.0},{0.7, 0.1}}";
			};
		};
	};

	class kr_Bullet_556x45_Base: Bullet_Base
	{
		scope = 0;
		spawnPileType = "";
		round = "";
		casing = "FxCartridge_kr_556x45";
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 850;
		typicalSpeed = 1000;
		airFriction = -0.00125;
		caliber = 1;
		deflecting = 10;
		tracerScale = 1;
		tracerStartTime = 0.01;
		tracerEndTime = 1;
		nvgOnly = 1;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		weight = 0.004;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		kr_caliber = "5.56x45";
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.87,1.0}};
			defaultDamageOverrideString = "{{0.87,1.0}}";
			class Health
			{
				damage = 110;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 110;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};

	class Bullet_556x45_FMJ: kr_Bullet_556x45_Base
	{
		scope = 1;
		round = "FxRound_556x45_FMJ";
		spawnPileType = "kr_Ammo_556x45_FMJ";
		initSpeed = 957;
		typicalSpeed = 957;
		airFriction = -0.002;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		weight = 0.003;
		unconRefillModifier = 6;
		dispersion = 0.0005;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.787, 1.0}, {0.741, 0.8}, {0.698, 0.5}, {0.606, 0.3}};
			defaultDamageOverrideString = "{{0.787, 1.0}, {0.741, 0.8}, {0.698, 0.5}, {0.606, 0.3}}";

			class Health
			{
				damage = 90;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{0.9, 1.0},{0.5, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.5, 0.1}}";
			};
		};
	};

	class Bullet_556x45_m855: kr_Bullet_556x45_Base
	{
		scope = 1;
		round = "FxRound_556x45_m855";
		spawnPileType = "kr_Ammo_556x45_m855";
		initSpeed = 922;
		typicalSpeed = 922;
		airFriction = -0.00125;
		damageBarrel = 285;
		damageBarrelDestroyed = 285;
		weight = 0.00343;
		unconRefillModifier = 6;
		dispersion = -0.0003;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.861, 1.0}, {0.798, 0.8}, {0.759, 0.5}, {0.688, 0.3}};
			defaultDamageOverrideString = "{{0.861, 1.0}, {0.798, 0.8}, {0.759, 0.5}, {0.688, 0.3}}";

			class Health
			{
				damage = 105;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{0.9, 1.0},{0.5, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.5, 0.1}}";
			};
		};
	};

	class Bullet_556x45_m855a1: kr_Bullet_556x45_Base
	{
		scope = 1;
		round = "FxRound_556x45_m855a1";
		spawnPileType = "kr_Ammo_556x45_m855a1";
		initSpeed = 740;
		typicalSpeed = 740;
		airFriction = -0.0017;
		damageBarrel = 437.5;
		damageBarrelDestroyed = 437.5;
		weight = 0.012;
		unconRefillModifier = 6;
		dispersion = 0.0005;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.815, 1.0}, {0.774, 0.8}, {0.736, 0.5}, {0.654, 0.3}};
			defaultDamageOverrideString = "{{0.815, 1.0}, {0.774, 0.8}, {0.736, 0.5}, {0.654, 0.3}}";

			class Health
			{
				armorDamage = 3;
				damage = 90;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{0.9, 1.0},{0.5, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.5, 0.1}}";
			};
		};
	};

	class Bullet_556x45_m856: kr_Bullet_556x45_Base
	{
		scope = 1;
		round = "FxRound_556x45_m856";
		spawnPileType = "kr_Ammo_556x45_m856";
		initSpeed = 872;
		typicalSpeed = 872;
		airFriction = -0.00125;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		weight = 0.00343;
		tracerScale = 2.0;
		tracerStartTime = 0.01;
		tracerEndTime = 1;
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\pistol_tracer_red.p3d";
		unconRefillModifier = 6;
		dispersion = -0.0003;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.883, 1.0}, {0.829, 0.8}, {0.779, 0.5}, {0.732, 0.3}};
			defaultDamageOverrideString = "{{0.883, 1.0}, {0.829, 0.8}, {0.779, 0.5}, {0.732, 0.3}}";

			class Health
			{
				damage = 80;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{0.9, 1.0},{0.5, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.5, 0.1}}";
			};
		};
	};

	class Bullet_556x45_m995: kr_Bullet_556x45_Base
	{
		scope = 1;
		round = "FxRound_556x45_m995";
		spawnPileType = "kr_Ammo_556x45_m995";
		initSpeed = 1013;
		typicalSpeed = 1013;
		airFriction = -0.00125;
		damageBarrel = 550.5;
		damageBarrelDestroyed = 550.5;
		weight = 0.00343;
		unconRefillModifier = 6;
		dispersion = 0.0001;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.861, 1.0}, {0.799, 0.8}, {0.759, 0.5}, {0.687, 0.3}};
			defaultDamageOverrideString = "{{0.861, 1.0}, {0.799, 0.8}, {0.759, 0.5}, {0.687, 0.3}}";

			class Health
			{
				armorDamage = 3;
				damage = 105;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{0.9, 1.0},{0.5, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.5, 0.1}}";
			};
		};
	};

	class Bullet_556x45_warmageddon: kr_Bullet_556x45_Base
	{
		scope = 1;
		round = "FxRound_556x45_warmageddon";
		spawnPileType = "kr_Ammo_556x45_warmageddon";
		initSpeed = 650;
		typicalSpeed = 650;
		airFriction = -0.0017;
		damageBarrel = 320;
		damageBarrelDestroyed = 320;
		weight = 0.009;
		unconRefillModifier = 6;
		dispersion = 0.0045;

		class kr_Gunplay: kr_Gunplay_Base
		{
			isHollowPoint = 1;
			hollowPointMultiplier = 15;
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.983, 1.0}, {0.966, 0.8}, {0.918, 0.5}, {0.843, 0.1}};
			defaultDamageOverrideString = "{{0.983, 1.0}, {0.966, 0.8}, {0.918, 0.5}, {0.843, 0.1}}";

			class Health
			{
				damage = 12;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{0.9, 1.0},{0.5, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.5, 0.1}}";
			};
		};
	};

	class kr_Bullet_762x39_Base: Bullet_Base
	{
		scope = 0;
		round = "";
		spawnPileType = "";
		casing = "FxCartridge_kr_762x39";
		hit = 9.5;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 640;
		typicalSpeed = 740;
		airFriction = -0.0015;
		caliber = 1.0;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.008;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		kr_caliber = "7.62x39";
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			defaultDamageOverrideString = "{{0.95,1.0}}";
			class Health
			{
				damage = 110;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 110;
				damageOverride[] = {{0.8,1.0}};
				damageOverrideString = "{{0.8,1.0}}";
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};

	class Bullet_762x39_bp: kr_Bullet_762x39_Base
	{
		scope = 1;
		round = "FxRound_762x39_bp";
		spawnPileType = "kr_Ammo_762x39_bp";
		initSpeed = 730;
		typicalSpeed = 730;
		airFriction = -0.002;
		damageBarrel = 725;
		damageBarrelDestroyed = 725;
		weight = 0.008;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.771, 1.0}, {0.670, 0.8}, {0.607, 0.5}, {0.527, 0.3}};
			defaultDamageOverrideString = "{{0.771, 1.0}, {0.670, 0.8}, {0.607, 0.5}, {0.527, 0.3}}";

			class Health
			{
				armorDamage = 3;
				damage = 105;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 50;
				damageOverride[] = {{0.8, 1.0},{0.4, 0.1}};
				damageOverrideString = "{{0.8, 1.0},{0.4, 0.1}}";
			};
		};
	};

	class Bullet_762x39_fmj: kr_Bullet_762x39_Base
	{
		scope = 1;
		round = "FxRound_762x39_fmj";
		spawnPileType = "kr_Ammo_762x39_fmj";
		initSpeed = 755;
		typicalSpeed = 755;
		airFriction = -0.0015;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.009;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.823, 1.0}, {0.740, 0.8}, {0.687, 0.5}, {0.619, 0.3}};
			defaultDamageOverrideString = "{{0.823, 1.0}, {0.740, 0.8}, {0.687, 0.5}, {0.619, 0.3}}";

			class Health
			{
				damage = 90;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{0.8, 1.0},{0.4, 0.1}};
				damageOverrideString = "{{0.8, 1.0},{0.4, 0.1}}";
			};
		};
	};

	class Bullet_762x39_mai_ap: kr_Bullet_762x39_Base
	{
		scope = 1;
		round = "FxRound_762x39_mai_ap";
		spawnPileType = "kr_Ammo_762x39_mai_ap";
		initSpeed = 875;
		typicalSpeed = 875;
		airFriction = -0.002;
		damageBarrel = 850;
		damageBarrelDestroyed = 850;
		weight = 0.008;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.771, 1.0}, {0.607, 0.8}, {0.497, 0.5}, {0.407, 0.3}};
			defaultDamageOverrideString = "{{0.771, 1.0}, {0.607, 0.8}, {0.497, 0.5}, {0.407, 0.3}}";

			class Health
			{
				armorDamage = 4;
				damage = 100;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{0.8, 1.0},{0.4, 0.1}};
				damageOverrideString = "{{0.8, 1.0},{0.4, 0.1}}";
			};
		};
	};

	class Bullet_762x39_pp: kr_Bullet_762x39_Base
	{
		scope = 1;
		round = "FxRound_762x39_pp";
		spawnPileType = "kr_Ammo_762x39_pp";
		initSpeed = 730;
		typicalSpeed = 730;
		airFriction = -0.0015;
		damageBarrel = 675;
		damageBarrelDestroyed = 675;
		weight = 0.008;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.823, 1.0}, {0.688, 0.8}, {0.592, 0.5}, {0.510, 0.3}};
			defaultDamageOverrideString = "{{0.823, 1.0}, {0.688, 0.8}, {0.592, 0.5}, {0.510, 0.3}}";

			class Health
			{
				damage = 110;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 50;
				damageOverride[] = {{0.8, 1.0},{0.4, 0.1}};
				damageOverrideString = "{{0.8, 1.0},{0.4, 0.1}}";
			};
		};
	};

	class Bullet_762x39_ps: kr_Bullet_762x39_Base
	{
		scope = 1;
		round = "FxRound_762x39_ps";
		spawnPileType = "kr_Ammo_762x39_ps";
		initSpeed = 717;
		typicalSpeed = 717;
		airFriction = -0.0015;
		damageBarrel = 600;
		damageBarrelDestroyed = 600;
		weight = 0.008;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.823, 1.0}, {0.688, 0.8}, {0.591, 0.5}, {0.509, 0.3}};
			defaultDamageOverrideString = "{{0.823, 1.0}, {0.688, 0.8}, {0.591, 0.5}, {0.509, 0.3}}";

			class Health
			{
				damage = 100;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 50;
				damageOverride[] = {{0.8, 1.0},{0.4, 0.1}};
				damageOverrideString = "{{0.8, 1.0},{0.4, 0.1}}";
			};
		};
	};

	class Bullet_762x39_t45m: kr_Bullet_762x39_Base
	{
		scope = 1;
		round = "FxRound_762x39_t45m";
		spawnPileType = "kr_Ammo_762x39_t45m";
		initSpeed = 720;
		typicalSpeed = 720;
		airFriction = -0.002;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.007;
		tracerScale = 2.0;
		tracerStartTime = 0.01;
		tracerEndTime = 1;
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\pistol_tracer_red.p3d";
		unconRefillModifier = 6;
		dispersion = -0.0003;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.803, 1.0}, {0.697, 0.8}, {0.644, 0.5}, {0.571, 0.3}};
			defaultDamageOverrideString = "{{0.803, 1.0}, {0.697, 0.8}, {0.644, 0.5}, {0.571, 0.3}}";

			class Health
			{
				damage = 95;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 50;
				damageOverride[] = {{0.8, 1.0},{0.4, 0.1}};
				damageOverrideString = "{{0.8, 1.0},{0.4, 0.1}}";
			};
		};
	};

	class Bullet_762x39_us: kr_Bullet_762x39_Base
	{
		scope = 1;
		round = "FxRound_762x39_us";
		spawnPileType = "kr_Ammo_762x39_us";
		initSpeed = 303;
		typicalSpeed = 303;
		airFriction = -0.0015;
		damageBarrel = 400;
		damageBarrelDestroyed = 400;
		weight = 0.015;
		unconRefillModifier = 6;
		dispersion = -0.0002;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.861, 1.0}, {0.799, 0.8}, {0.763, 0.5}, {0.719, 0.3}};
			defaultDamageOverrideString = "{{0.861, 1.0}, {0.799, 0.8}, {0.763, 0.5}, {0.719, 0.3}}";

			class Health
			{
				damage = 110;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 70;
				damageOverride[] = {{0.8, 1.0},{0.4, 0.1}};
				damageOverrideString = "{{0.8, 1.0},{0.4, 0.1}}";
			};
		};
	};

	class Bullet_762x39_HP: kr_Bullet_762x39_Base
	{
		scope = 1;
		round = "FxRound_762x39_HP";
		spawnPileType = "kr_Ammo_762x39_HP";
		initSpeed = 754;
		typicalSpeed = 754;
		airFriction = -0.0025;
		damageBarrel = 520;
		damageBarrelDestroyed = 520;
		weight = 0.015;
		unconRefillModifier = 6;
		dispersion = 0.0045;

		class kr_Gunplay: kr_Gunplay_Base
		{
			isHollowPoint = 1;
			hollowPointMultiplier = 16;
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.7;
			defaultDamageOverride[] = {{0.939, 1.0}, {0.840, 0.8}, {0.798, 0.5}, {0.741, 0.1}};
			defaultDamageOverrideString = "{{0.939, 1.0}, {0.840, 0.8}, {0.798, 0.5}, {0.741, 0.1}}";

			class Health
			{
				damage = 20;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 50;
				damageOverride[] = {{0.8, 1.0},{0.4, 0.1}};
				damageOverrideString = "{{0.8, 1.0},{0.4, 0.1}}";
			};
		};
	};

	class kr_Bullet_762x51_Base: Bullet_Base
	{
		scope = 0;
		round = "";
		spawnPileType = "";
		casing = "FxCartridge_kr_762x51";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 770;
		typicalSpeed = 940;
		tracerScale = 1.2;
		tracerStartTime = 0.01;
		tracerEndTime = 1;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.01;
		impactBehaviour = 1;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		kr_caliber = ".308";
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.9,1.0}};
			defaultDamageOverrideString = "{{0.9,1.0}}";
			class Health
			{
				damage = 150;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 150;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};

	class Bullet_762x51_bpz_fmj: kr_Bullet_762x51_Base
	{
		scope = 1;
		round = "FxRound_762x51_bpz_fmj";
		spawnPileType = "kr_Ammo_762x51_bpz_fmj";
		initSpeed = 840;
		typicalSpeed = 840;
		airFriction = -0.0015;
		damageBarrel = 570;
		damageBarrelDestroyed = 570;
		weight = 0.008;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.823, 1.0}, {0.687, 0.8}, {0.592, 0.5}, {0.549, 0.3}};
			defaultDamageOverrideString = "{{0.823, 1.0}, {0.687, 0.8}, {0.592, 0.5}, {0.549, 0.3}}";

			class Health
			{
				damage = 140;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 50;
				damageOverride[] = {{0.8, 1.0},{0.4, 0.1}};
				damageOverrideString = "{{0.8, 1.0},{0.4, 0.1}}";
			};
		};
	};

	class Bullet_762x51_m61: kr_Bullet_762x51_Base
	{
		scope = 1;
		round = "FxRound_762x51_m61";
		spawnPileType = "kr_Ammo_762x51_m61";
		initSpeed = 849;
		typicalSpeed = 849;
		airFriction = -0.001;
		damageBarrel = 1026;
		damageBarrelDestroyed = 1026;
		weight = 0.0084;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.879, 1.0}, {0.819, 0.8}, {0.779, 0.5}, {0.727, 0.3}};
			defaultDamageOverrideString = "{{0.879, 1.0}, {0.819, 0.8}, {0.779, 0.5}, {0.727, 0.3}}";

			class Health
			{
				armorDamage = 3;
				damage = 120;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 50;
				damageOverride[] = {{0.8, 1.0},{0.4, 0.1}};
				damageOverrideString = "{{0.8, 1.0},{0.4, 0.1}}";
			};
		};
	};

	class Bullet_762x51_m80: kr_Bullet_762x51_Base
	{
		scope = 1;
		round = "FxRound_762x51_m80";
		spawnPileType = "kr_Ammo_762x51_m80";
		initSpeed = 833;
		typicalSpeed = 833;
		airFriction = -0.0013;
		damageBarrel = 741;
		damageBarrelDestroyed = 741;
		weight = 0.006;
		unconRefillModifier = 6;
		dispersion = 0.0003;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.813, 1.0}, {0.685, 0.8}, {0.610, 0.5}, {0.557, 0.3}};
			defaultDamageOverrideString = "{{0.813, 1.0}, {0.685, 0.8}, {0.610, 0.5}, {0.557, 0.3}}";

			class Health
			{
				damage = 150;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 65;
				damageOverride[] = {{0.8, 1.0},{0.4, 0.1}};
				damageOverrideString = "{{0.8, 1.0},{0.4, 0.1}}";
			};
		};
	};

	class Bullet_762x51_m993: kr_Bullet_762x51_Base
	{
		scope = 1;
		round = "FxRound_762x51_m993";
		spawnPileType = "kr_Ammo_762x51_m993";
		initSpeed = 910;
		typicalSpeed = 910;
		airFriction = -0.001;
		damageBarrel = 1140;
		damageBarrelDestroyed = 1140;
		weight = 0.005;
		unconRefillModifier = 6;
		dispersion = -0.0002;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.852, 1.0}, {0.748, 0.8}, {0.684, 0.5}, {0.637, 0.3}};
			defaultDamageOverrideString = "{{0.852, 1.0}, {0.748, 0.8}, {0.684, 0.5}, {0.637, 0.3}}";

			class Health
			{
				armorDamage = 3;
				damage = 140;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 75;
				damageOverride[] = {{0.95, 1.0},{0.35, 0.1}};
				damageOverrideString = "{{0.95, 1.0},{0.35, 0.1}}";
			};
		};
	};

	class Bullet_762x51_tpz_sp: kr_Bullet_762x51_Base
	{
		scope = 1;
		round = "FxRound_762x51_tpz_sp";
		spawnPileType = "kr_Ammo_762x51_tpz_sp";
		initSpeed = 833;
		typicalSpeed = 833;
		airFriction = -0.0015;
		damageBarrel = 741;
		damageBarrelDestroyed = 741;
		weight = 0.009;
		unconRefillModifier = 6;
		dispersion = 0.0005;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.822, 1.0}, {0.741, 0.8}, {0.688, 0.5}, {0.618, 0.3}};
			defaultDamageOverrideString = "{{0.822, 1.0}, {0.741, 0.8}, {0.688, 0.5}, {0.618, 0.3}}";

			class Health
			{
				damage = 120;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 80;
				damageOverride[] = {{0.8, 1.0},{0.533, 0.1}};
				damageOverrideString = "{{0.8, 1.0},{0.533, 0.1}}";
			};
		};
	};

	class Bullet_762x51_ultra_nosler: kr_Bullet_762x51_Base
	{
		scope = 1;
		round = "FxRound_762x51_ultra_nosler";
		spawnPileType = "kr_Ammo_762x51_ultra_nosler";
		initSpeed = 822;
		typicalSpeed = 822;
		airFriction = -0.0025;
		damageBarrel = 649.8;
		damageBarrelDestroyed = 649.8;
		weight = 0.015;
		unconRefillModifier = 6;
		dispersion = 0.0045;

		class kr_Gunplay: kr_Gunplay_Base
		{
			isHollowPoint = 1;
			hollowPointMultiplier = 10;
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.939, 1.0}, {0.839, 0.8}, {0.798, 0.5}, {0.741, 0.1}};
			defaultDamageOverrideString = "{{0.939, 1.0}, {0.839, 0.8}, {0.798, 0.5}, {0.741, 0.1}}";

			class Health
			{
				damage = 23;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 45;
				damageOverride[] = {{0.995, 1.0},{0.8, 0.7},{0.4, 0.1}};
				damageOverrideString = "{{0.995, 1.0},{0.8, 0.7},{0.4, 0.1}}";
			};
		};
	};

	class kr_Bullet_762x54_Base: Bullet_Base
	{
		scope = 0;
		round = "";
		spawnPileType = "";
		casing = "FxCartridge_kr_762x54";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 785;
		typicalSpeed = 865;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.012;
		impactBehaviour = 1;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		kr_caliber = "7.62x54";
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			defaultDamageOverrideString = "{{0.94,1.0}}";
			class Health
			{
				damage = 150;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 150;
				damageOverride[] = {{0.86,1.0}};
				damageOverrideString = "{{0.86,1.0}}";
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};

	class Bullet_762x54r_bs: kr_Bullet_762x54_Base
	{
		scope = 1;
		round = "FxRound_762x54r_bs";
		spawnPileType = "kr_Ammo_762x54r_bs";
		initSpeed = 850;
		typicalSpeed = 850;
		airFriction = -0.0011;
		damageBarrel = 1190;
		damageBarrelDestroyed = 1190;
		weight = 0.006;
		unconRefillModifier = 6;
		dispersion = 0.0003;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.829, 1.0}, {0.704, 0.8}, {0.644, 0.5}, {0.576, 0.4}};
			defaultDamageOverrideString = "{{0.829, 1.0}, {0.704, 0.8}, {0.644, 0.5}, {0.576, 0.4}}";

			class Health
			{
				armorDamage = 3;
				damage = 200;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 100;
				damageOverride[] = {{0.9, 1.0},{0.5, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.5, 0.1}}";
			};
		};
	};

	class Bullet_762x54r_bthp: kr_Bullet_762x54_Base
	{
		scope = 1;
		round = "FxRound_762x54r_bthp";
		spawnPileType = "kr_Ammo_762x54r_bthp";
		initSpeed = 870;
		typicalSpeed = 870;
		airFriction = -0.0025;
		damageBarrel = 703.5;
		damageBarrelDestroyed = 703.5;
		weight = 0.01;
		unconRefillModifier = 6;
		dispersion = 0.004;

		class kr_Gunplay: kr_Gunplay_Base
		{
			isHollowPoint = 1;
			hollowPointMultiplier = 10;
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.916, 1.0}, {0.808, 0.8}, {0.760, 0.5}, {0.723, 0.1}};
			defaultDamageOverrideString = "{{0.916, 1.0}, {0.808, 0.8}, {0.760, 0.5}, {0.723, 0.1}}";

			class Health
			{
				damage = 23;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{0.9, 1.0},{0.5, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.5, 0.1}}";
			};
		};
	};

	class Bullet_762x54r_fmj: kr_Bullet_762x54_Base
	{
		scope = 1;
		round = "FxRound_762x54r_fmj";
		spawnPileType = "kr_Ammo_762x54r_fmj";
		initSpeed = 760;
		typicalSpeed = 760;
		airFriction = -0.0019;
		damageBarrel = 700;
		damageBarrelDestroyed = 700;
		weight = 0.007;
		unconRefillModifier = 6;
		dispersion = 0.0003;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.782, 1.0}, {0.711, 0.8}, {0.622, 0.5}, {0.566, 0.3}};
			defaultDamageOverrideString = "{{0.782, 1.0}, {0.711, 0.8}, {0.622, 0.5}, {0.566, 0.3}}";

			class Health
			{
				damage = 125;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 80;
				damageOverride[] = {{0.9, 1.0},{0.35, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.35, 0.1}}";
			};
		};
	};

	class Bullet_762x54r_lps: kr_Bullet_762x54_Base
	{
		scope = 1;
		round = "FxRound_762x54r_lps";
		spawnPileType = "kr_Ammo_762x54r_lps";
		initSpeed = 865;
		typicalSpeed = 865;
		airFriction = -0.0005;
		damageBarrel = 770;
		damageBarrelDestroyed = 770;
		weight = 0.004;
		unconRefillModifier = 6;
		dispersion = -0.0001;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.923, 1.0}, {0.852, 0.8}, {0.818, 0.5}, {0.799, 0.4}};
			defaultDamageOverrideString = "{{0.923, 1.0}, {0.852, 0.8}, {0.818, 0.5}, {0.799, 0.4}}";

			class Health
			{
				damage = 140;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 90;
				damageOverride[] = {{0.9, 1.0},{0.75, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.75, 0.1}}";
			};
		};
	};

	class Bullet_762x54r_ps: kr_Bullet_762x54_Base
	{
		scope = 1;
		round = "FxRound_762x54r_ps";
		spawnPileType = "kr_Ammo_762x54r_ps";
		initSpeed = 870;
		typicalSpeed = 870;
		airFriction = -0.001;
		damageBarrel = 798;
		damageBarrelDestroyed = 798;
		weight = 0.005;
		unconRefillModifier = 6;
		dispersion = 0.0001;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.852, 1.0}, {0.756, 0.8}, {0.705, 0.5}, {0.670, 0.3}};
			defaultDamageOverrideString = "{{0.852, 1.0}, {0.756, 0.8}, {0.705, 0.5}, {0.670, 0.3}}";

			class Health
			{
				damage = 140;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 85;
				damageOverride[] = {{0.9, 1.0},{0.5, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.5, 0.1}}";
			};
		};
	};

	class Bullet_762x54r_snb: kr_Bullet_762x54_Base
	{
		scope = 1;
		round = "FxRound_762x54r_snb";
		spawnPileType = "kr_Ammo_762x54r_snb";
		initSpeed = 875;
		typicalSpeed = 875;
		airFriction = -0.001;
		damageBarrel = 840;
		damageBarrelDestroyed = 840;
		weight = 0.0084;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.861, 1.0}, {0.786, 0.8}, {0.741, 0.5}, {0.683, 0.4}};
			defaultDamageOverrideString = "{{0.861, 1.0}, {0.786, 0.8}, {0.741, 0.5}, {0.683, 0.4}}";

			class Health
			{
				armorDamage = 3;
				damage = 130;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 87;
				damageOverride[] = {{0.9, 1.0},{0.5, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.5, 0.1}}";
			};
		};
	};

	class Bullet_762x54r_t46m: kr_Bullet_762x54_Base
	{
		scope = 1;
		round = "FxRound_762x54r_t46m";
		spawnPileType = "kr_Ammo_762x54r_t46m";
		initSpeed = 800;
		typicalSpeed = 800;
		airFriction = -0.0013;
		damageBarrel = 700;
		damageBarrelDestroyed = 700;
		weight = 0.01;
		tracerScale = 2.0;
		tracerStartTime = 0.01;
		tracerEndTime = 1;
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\pistol_tracer_green.p3d";
		unconRefillModifier = 6;
		dispersion = 0.0002;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.823, 1.0}, {0.733, 0.8}, {0.678, 0.5}, {0.610, 0.3}};
			defaultDamageOverrideString = "{{0.823, 1.0}, {0.733, 0.8}, {0.678, 0.5}, {0.610, 0.3}}";

			class Health
			{
				damage = 130;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 98;
				damageOverride[] = {{0.9, 1.0},{0.5, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.5, 0.1}}";
			};
		};
	};

	class kr_Bullet_9x39_Base: Bullet_Base
	{
		scope = 0;
		round = "";
		spawnPileType = "";
		casing = "FxCartridge_kr_9x39";
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		caliber = 0.9;
		deflecting = 20;
		typicalSpeed = 280;
		airFriction = -0.0015;
		initSpeed = 280;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		weight = 0.017;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		kr_caliber = "9x39";
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 75;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 75;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};

	class Bullet_9x39_bp: kr_Bullet_9x39_Base
	{
		scope = 1;
		round = "FxRound_9x39_bp";
		spawnPileType = "kr_Ammo_9x39_bp";
		initSpeed = 295;
		typicalSpeed = 295;
		airFriction = -0.0015;
		damageBarrel = 577;
		damageBarrelDestroyed = 577;
		weight = 0.005;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.862, 1.0},{0.689, 0.8},{0.590, 0.5},{0.508, 0.25}};
			defaultDamageOverrideString = "{{0.862, 1.0},{0.689, 0.8},{0.590, 0.5},{0.508, 0.25}}";

			class Health
			{
				armorDamage = 3;
				damage = 90;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 60;
				damageOverride[] = {{0.8, 1.0},{0.508, 0.3}};
				damageOverrideString = "{{0.8, 1.0},{0.508, 0.3}}";
			};
		};
	};

	class Bullet_9x39_pab9: kr_Bullet_9x39_Base
	{
		scope = 1;
		round = "FxRound_9x39_pab9";
		spawnPileType = "kr_Ammo_9x39_pab9";
		initSpeed = 450;
		typicalSpeed = 450;
		airFriction = -0.0015;
		damageBarrel = 647.5;
		damageBarrelDestroyed = 647.5;
		weight = 0.005;
		unconRefillModifier = 6;
		dispersion = -0.0005;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.998, 1.0},{0.798, 0.8},{0.687, 0.5},{0.636, 0.25}};
			defaultDamageOverrideString = "{{0.998, 1.0},{0.798, 0.8},{0.687, 0.5},{0.636, 0.25}}";

			class Health
			{
				armorDamage = 4;
				damage = 100;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 80;
				damageOverride[] = {{0.8, 1.0},{0.636, 0.4}};
				damageOverrideString = "{{0.8, 1.0},{0.636, 0.4}}";
			};
		};
	};

	class Bullet_9x39_sp5: kr_Bullet_9x39_Base
	{
		scope = 1;
		round = "FxRound_9x39_sp5";
		spawnPileType = "kr_Ammo_9x39_sp5";
		initSpeed = 305;
		typicalSpeed = 305;
		airFriction = -0.0015;
		damageBarrel = 350;
		damageBarrelDestroyed = 350;
		weight = 0.005;
		unconRefillModifier = 6;
		dispersion = 0.0005;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.862, 1.0},{0.741, 0.8},{0.636, 0.5},{0.508, 0.25}};
			defaultDamageOverrideString = "{{0.862, 1.0},{0.741, 0.8},{0.636, 0.5},{0.508, 0.25}}";

			class Health
			{
				damage = 75;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{0.8, 1.0},{0.508, 0.3}};
				damageOverrideString = "{{0.8, 1.0},{0.508, 0.3}}";
			};
		};
	};

	class Bullet_9x39_sp6: kr_Bullet_9x39_Base
	{
		scope = 1;
		round = "FxRound_9x39_sp6";
		spawnPileType = "kr_Ammo_9x39_sp6";
		initSpeed = 305;
		typicalSpeed = 305;
		airFriction = -0.0015;
		damageBarrel = 507.5;
		damageBarrelDestroyed = 507.5;
		weight = 0.005;
		unconRefillModifier = 6;
		dispersion = 0.0003;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.862, 1.0},{0.741, 0.8},{0.636, 0.5},{0.508, 0.25}};
			defaultDamageOverrideString = "{{0.862, 1.0},{0.741, 0.8},{0.636, 0.5},{0.508, 0.25}}";

			class Health
			{
				armorDamage = 3;
				damage = 75;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 45;
				damageOverride[] = {{0.8, 1.0},{0.508, 0.3}};
				damageOverrideString = "{{0.8, 1.0},{0.508, 0.3}}";
			};
		};
	};

	class Bullet_9x39_HP: kr_Bullet_9x39_Base
	{
		scope = 1;
		round = "FxRound_9x39_HP";
		spawnPileType = "kr_Ammo_9x39_HP";
		initSpeed = 200;
		typicalSpeed = 200;
		airFriction = -0.0015;
		damageBarrel = 400;
		damageBarrelDestroyed = 400;
		weight = 0.01;
		unconRefillModifier = 6;
		dispersion = 0.004;

		class kr_Gunplay: kr_Gunplay_Base
		{
			isHollowPoint = 1;
			hollowPointMultiplier = 16;
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.7;
			defaultDamageOverride[] = {{0.970, 1.0}, {0.930, 0.8}, {0.900, 0.5}, {0.860, 0.1}};
			defaultDamageOverrideString = "{{0.970, 1.0}, {0.930, 0.8}, {0.900, 0.5}, {0.860, 0.1}}";

			class Health
			{
				damage = 19;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 40;
				damageOverride[] = {{0.9, 1.0},{0.85, 0.5},{0.75, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.85, 0.5},{0.75, 0.1}}";
			};
		};
	};

	class kr_Bullet_366TKM_Base: Bullet_Base
	{
		scope = 0;
		round = "";
		spawnPileType = "";
		casing = "FxCartridge_kr_366TKM";
		hit = 9.5;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 640;
		typicalSpeed = 740;
		airFriction = -0.0015;
		caliber = 1.0;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.008;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		kr_caliber = ".366TKM";
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			defaultDamageOverrideString = "{{0.95,1.0}}";
			class Health
			{
				damage = 110;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 110;
				damageOverride[] = {{0.8,1.0}};
				damageOverrideString = "{{0.8,1.0}}";
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};

	class Bullet_366TKM_custom_ap: kr_Bullet_366TKM_Base
	{
		scope = 1;
		round = "FxRound_366TKM_custom_ap";
		spawnPileType = "kr_Ammo_366TKM_custom_ap";
		initSpeed = 602;
		typicalSpeed = 602;
		airFriction = -0.0015;
		damageBarrel = 665;
		damageBarrelDestroyed = 665;
		weight = 0.0084;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.847, 1.0}, {0.764, 0.8}, {0.688, 0.5}, {0.638, 0.3}};
			defaultDamageOverrideString = "{{0.847, 1.0}, {0.764, 0.8}, {0.688, 0.5}, {0.638, 0.3}}";

			class Health
			{
				armorDamage = 3;
				damage = 120;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 75;
				damageOverride[] = {{0.9, 1.0},{0.5, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.5, 0.1}}";
			};
		};
	};

	class Bullet_366TKM_EKO: kr_Bullet_366TKM_Base
	{
		scope = 1;
		round = "FxRound_366TKM_EKO";
		spawnPileType = "kr_Ammo_366TKM_EKO";
		initSpeed = 770;
		typicalSpeed = 770;
		airFriction = -0.0015;
		damageBarrel = 350;
		damageBarrelDestroyed = 350;
		weight = 0.0084;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.835, 1.0}, {0.740, 0.8}, {0.687, 0.5}, {0.638, 0.3}};
			defaultDamageOverrideString = "{{0.835, 1.0}, {0.740, 0.8}, {0.687, 0.5}, {0.638, 0.3}}";

			class Health
			{
				damage = 130;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 80;
				damageOverride[] = {{0.9, 1.0},{0.5, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.5, 0.1}}";
			};
		};
	};

	class Bullet_366TKM_FMJ: kr_Bullet_366TKM_Base
	{
		scope = 1;
		round = "FxRound_366TKM_FMJ";
		spawnPileType = "kr_Ammo_366TKM_FMJ";
		initSpeed = 580;
		typicalSpeed = 580;
		airFriction = -0.0015;
		damageBarrel = 350;
		damageBarrelDestroyed = 350;
		weight = 0.0084;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.848, 1.0}, {0.764, 0.8}, {0.688, 0.5}, {0.638, 0.3}};
			defaultDamageOverrideString = "{{0.848, 1.0}, {0.764, 0.8}, {0.688, 0.5}, {0.638, 0.3}}";

			class Health
			{
				damage = 120;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 80;
				damageOverride[] = {{0.9, 1.0},{0.5, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.5, 0.1}}";
			};
		};
	};

	class Bullet_366TKM_Geksa: kr_Bullet_366TKM_Base
	{
		scope = 1;
		round = "FxRound_366TKM_Geksa";
		spawnPileType = "kr_Ammo_366TKM_Geksa";
		initSpeed = 550;
		typicalSpeed = 550;
		airFriction = -0.0015;
		damageBarrel = 472.5;
		damageBarrelDestroyed = 472.5;
		weight = 0.01;
		unconRefillModifier = 6;
		dispersion = 0;

		class kr_Gunplay: kr_Gunplay_Base
		{
			isHollowPoint = 1;
			hollowPointMultiplier = 15;
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.964, 1.0}, {0.900, 0.8}, {0.875, 0.5}, {0.835, 0.1}};
			defaultDamageOverrideString = "{{0.964, 1.0}, {0.900, 0.8}, {0.875, 0.5}, {0.835, 0.1}}";

			class Health
			{
				damage = 20;
			};

			class Blood
			{
				damage = 100;
			};

			class Shock
			{
				damage = 80;
				damageOverride[] = {{0.9, 1.0},{0.7, 0.1}};
				damageOverrideString = "{{0.9, 1.0},{0.7, 0.1}}";
			};
		};
	};

	class kr_Bullet_127x55_Base: Bullet_Base
	{
		scope = 0;
		round = "";
		spawnPileType = "";
		casing = "FxCartridge_kr_127x55";
		hit = 14;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		caliber = 0.9;
		deflecting = 20;
		typicalSpeed = 280;
		airFriction = -0.0015;
		initSpeed = 280;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		weight = 0.017;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		kr_caliber = "12.7x55";
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 75;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 75;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};

	class Bullet_127x55_PS12: kr_Bullet_127x55_Base
	{
		scope = 1;
		round = "FxRound_127x55_PS12";
		spawnPileType = "kr_Ammo_127x55_PS12";
		initSpeed = 285;
		typicalSpeed = 285;
		airFriction = -0.001;
		damageBarrel = 560;
		damageBarrelDestroyed = 560;
		weight = 0.002;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.905, 1.0}, {0.860, 0.8}, {0.779, 0.5}, {0.705, 0.3}};
			defaultDamageOverrideString = "{{0.905, 1.0}, {0.860, 0.8}, {0.779, 0.5}, {0.705, 0.3}}";

			class Health
			{
				armorDamage = 2;
				damage = 180;
			};

			class Blood
			{
				damage = 300;
			};

			class Shock
			{
				damage = 75;
				damageOverride[] = {{0.95, 1.0},{0.8, 0.5},{0.67, 0.1}};
				damageOverrideString = "{{0.95, 1.0},{0.8, 0.5},{0.67, 0.1}}";
			};
		};
	};

	class Bullet_127x55_PS12A: kr_Bullet_127x55_Base
	{
		scope = 1;
		round = "FxRound_127x55_PS12A";
		spawnPileType = "kr_Ammo_127x55_PS12A";
		initSpeed = 290;
		typicalSpeed = 290;
		airFriction = -0.0012;
		damageBarrel = 400;
		damageBarrelDestroyed = 400;
		weight = 0.003;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.886, 1.0}, {0.786, 0.8}, {0.697, 0.5}, {0.617, 0.3}};
			defaultDamageOverrideString = "{{0.886, 1.0}, {0.786, 0.8}, {0.697, 0.5}, {0.617, 0.3}}";

			class Health
			{
				damage = 190;
			};

			class Blood
			{
				damage = 300;
			};

			class Shock
			{
				damage = 90;
				damageOverride[] = {{0.930, 1.0}, {0.583, 0.1}};
				damageOverrideString = "{{0.930, 1.0}, {0.583, 0.1}}";
			};
		};
	};

	class Bullet_127x55_PS12B: kr_Bullet_127x55_Base
	{
		scope = 1;
		round = "FxRound_127x55_PS12B";
		spawnPileType = "kr_Ammo_127x55_PS12B";
		initSpeed = 300;
		typicalSpeed = 300;
		airFriction = -0.0009;
		damageBarrel = 400;
		damageBarrelDestroyed = 400;
		weight = 0.002;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.897, 1.0}, {0.800, 0.8}, {0.730, 0.5}, {0.637, 0.3}};
			defaultDamageOverrideString = "{{0.897, 1.0}, {0.800, 0.8}, {0.730, 0.5}, {0.637, 0.3}}";

			class Health
			{
				armorDamage = 3;
				damage = 170;
			};

			class Blood
			{
				damage = 300;
			};

			class Shock
			{
				damage = 75;
				damageOverride[] = {{0.85, 1.0}, {0.583, 0.1}};
				damageOverrideString = "{{0.85, 1.0}, {0.583, 0.1}}";
			};
		};
	};

	class Bullet_127x55_PS12HP: kr_Bullet_127x55_Base
	{
		scope = 1;
		round = "FxRound_127x55_PS12HP";
		spawnPileType = "kr_Ammo_127x55_PS12HP";
		initSpeed = 200;
		typicalSpeed = 200;
		airFriction = -0.0025;
		damageBarrel = 450;
		damageBarrelDestroyed = 450;
		weight = 0.01;
		unconRefillModifier = 6;
		dispersion = 0.004;

		class kr_Gunplay: kr_Gunplay_Base
		{
			isHollowPoint = 1;
			hollowPointMultiplier = 16;
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.7;
			defaultDamageOverride[] = {{0.930, 1.0}, {0.860, 0.8}, {0.820, 0.5}, {0.780, 0.1}};
			defaultDamageOverrideString = "{{0.930, 1.0}, {0.860, 0.8}, {0.820, 0.5}, {0.780, 0.1}}";

			class Health
			{
				damage = 21;
			};

			class Blood
			{
				damage = 300;
			};

			class Shock
			{
				damage = 75;
				damageOverride[] = {{0.930, 1.0}, {0.79, 0.1}};
				damageOverrideString = "{{0.930, 1.0}, {0.79, 0.1}}";
			};
		};
	};

	class kr_Bullet_338LM_Base: Bullet_Base
	{
		scope = 0;
		round = "";
		spawnPileType = "";
		casing = "FxCartridge_kr_338LM";
		hit = 17;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 785;
		typicalSpeed = 865;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.012;
		impactBehaviour = 1;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		kr_caliber = ".338LM";
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			defaultDamageOverrideString = "{{0.94,1.0}}";
			class Health
			{
				damage = 150;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 150;
				damageOverride[] = {{0.86,1.0}};
				damageOverrideString = "{{0.86,1.0}}";
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};

	class Bullet_338LM_ap: kr_Bullet_338LM_Base
	{
		scope = 1;
		round = "FxRound_338LM_ap";
		spawnPileType = "kr_Ammo_338LM_ap";
		initSpeed = 849;
		typicalSpeed = 849;
		airFriction = -0.0005;
		damageBarrel = 1400;
		damageBarrelDestroyed = 1400;
		weight = 0.02;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.905, 1.0}, {0.840, 0.8}, {0.799, 0.5}};
			defaultDamageOverrideString = "{{0.905, 1.0}, {0.840, 0.8}, {0.799, 0.5}}";

			class Health
			{
				armorDamage = 4;
				damage = 200;
			};

			class Blood
			{
				damage = 200;
			};

			class Shock
			{
				damage = 150;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
	};

	class Bullet_338LM_upz: kr_Bullet_338LM_Base
	{
		scope = 1;
		round = "FxRound_338LM_upz";
		spawnPileType = "kr_Ammo_338LM_upz";
		initSpeed = 730;
		typicalSpeed = 730;
		airFriction = -0.001;
		damageBarrel = 1120;
		damageBarrelDestroyed = 1120;
		weight = 0.02;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.819, 1.0}, {0.741, 0.8}, {0.670, 0.5}};
			defaultDamageOverrideString = "{{0.819, 1.0}, {0.741, 0.8}, {0.670, 0.5}}";

			class Health
			{
				damage = 200;
			};

			class Blood
			{
				damage = 200;
			};

			class Shock
			{
				damage = 150;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
	};

	class Bullet_338LM_fmj: kr_Bullet_338LM_Base
	{
		scope = 1;
		round = "FxRound_338LM_fmj";
		spawnPileType = "kr_Ammo_338LM_fmj";
		initSpeed = 900;
		typicalSpeed = 900;
		airFriction = -0.0009;
		damageBarrel = 700;
		damageBarrelDestroyed = 700;
		weight = 0.02;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.836, 1.0}, {0.730, 0.8}, {0.667, 0.5}};
			defaultDamageOverrideString = "{{0.836, 1.0}, {0.730, 0.8}, {0.667, 0.5}}";

			class Health
			{
				damage = 220;
			};

			class Blood
			{
				damage = 200;
			};

			class Shock
			{
				damage = 150;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
	};

	class Bullet_338LM_tac_x: kr_Bullet_338LM_Base
	{
		scope = 1;
		round = "FxRound_338LM_tac_x";
		spawnPileType = "kr_Ammo_338LM_tac_x";
		initSpeed = 730;
		typicalSpeed = 730;
		airFriction = -0.001;
		damageBarrel = 980;
		damageBarrelDestroyed = 980;
		weight = 0.025;
		unconRefillModifier = 6;
		dispersion = 0.0025;

		class kr_Gunplay: kr_Gunplay_Base
		{
			isHollowPoint = 1;
			hollowPointMultiplier = 7;
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.882, 1.0}, {0.819, 0.8}, {0.741, 0.5}};
			defaultDamageOverrideString = "{{0.882, 1.0}, {0.819, 0.8}, {0.741, 0.5}}";

			class Health
			{
				damage = 50;
			};

			class Blood
			{
				damage = 350;
			};

			class Shock
			{
				damage = 100;
				damageOverride[] = {{0.9, 1.0}, {0.741, 0.5}};
				damageOverrideString = "{{0.9, 1.0}, {0.741, 0.5}}";
			};
		};
	};

	class kr_Bullet_408CheyTac_Base: Bullet_Base
	{
		scope = 0;
		round = "";
		spawnPileType = "";
		casing = "FxCartridge_kr_408CheyTac";
		hit = 20;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 785;
		typicalSpeed = 865;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.012;
		impactBehaviour = 1;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		kr_caliber = ".408";
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			defaultDamageOverrideString = "{{0.94,1.0}}";
			class Health
			{
				damage = 150;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 150;
				damageOverride[] = {{0.86,1.0}};
				damageOverrideString = "{{0.86,1.0}}";
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};

	class Bullet_408CheyTac: kr_Bullet_408CheyTac_Base
	{
		scope = 1;
		round = "FxRound_408CheyTac";
		spawnPileType = "kr_Ammo_408CheyTac";
		initSpeed = 1110;
		typicalSpeed = 1110;
		airFriction = -0.0007;
		damageBarrel = 1200;
		damageBarrelDestroyed = 1200;
		weight = 0.028;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.811, 1.0}, {0.680, 0.5}};
			defaultDamageOverrideString = "{{0.811, 1.0}, {0.680, 0.5}}";

			class Health
			{
				damage = 400;
			};

			class Blood
			{
				damage = 700;
			};

			class Shock
			{
				damage = 400;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
	};

	class kr_Bullet_50BMG_Base: Bullet_Base
	{
		scope = 0;
		round = "FxRound_50BMG";
		spawnPileType = "kr_Ammo_50BMG";
		hit = 25;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 785;
		typicalSpeed = 865;
		airFriction = -0.001;
		caliber = 12;
		deflecting = 3;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.009;
		impactBehaviour = 1;
		hitAnimation = 1;
		unconRefillModifier = 0.75;
		kr_caliber = ".50BMG";
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			defaultDamageOverrideString = "{{0.94,1.0}}";
			class Health
			{
				damage = 150;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 150;
				damageOverride[] = {{0.86,1.0}};
				damageOverrideString = "{{0.86,1.0}}";
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};

	class Bullet_50BMG: kr_Bullet_50BMG_Base
	{
		scope = 1;
		round = "FxRound_50BMG";
		spawnPileType = "kr_Ammo_50BMG";
		casing = "FxCartridge_kr_50BMG";
		initSpeed = 730;
		typicalSpeed = 730;
		airFriction = -0.0003;
		damageBarrel = 3500;
		damageBarrelDestroyed = 3500;
		weight = 0.035;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.874,1.0}, {0.823,0.8}, {0.786,0.4}};
			defaultDamageOverrideString = "{{0.874,1.0}, {0.823,0.8}, {0.786,0.4}}";

			class Health
			{
				damage = 450;
			};

			class Blood
			{
				damage = 1500;
			};

			class Shock
			{
				damage = 500;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
	};

	class Bullet_50BMG_AP: kr_Bullet_50BMG_Base
	{
		scope = 1;
		round = "FxRound_50BMG_AP";
		spawnPileType = "kr_Ammo_50BMG_AP";
		casing = "FxCartridge_50BMG_kr";
		initSpeed = 770;
		typicalSpeed = 770;
		airFriction = -0.0003;
		damageBarrel = 5000;
		damageBarrelDestroyed = 5000;
		weight = 0.035;
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.874,1.0}, {0.823,0.8}, {0.786,0.4}};
			defaultDamageOverrideString = "{{0.874,1.0}, {0.823,0.8}, {0.786,0.4}}";

			class Health
			{
				armorDamage = 4;
				damage = 550;
			};

			class Blood
			{
				damage = 1500;
			};

			class Shock
			{
				damage = 500;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
	};

	class Bullet_50BMG_T: kr_Bullet_50BMG_Base
	{
		scope = 1;
		round = "FxRound_50BMG_T";
		spawnPileType = "kr_Ammo_50BMG_T";
		casing = "FxCartridge_50BMG_kr";
		initSpeed = 650;
		typicalSpeed = 650;
		airFriction = -0.0003;
		damageBarrel = 2500;
		damageBarrelDestroyed = 2500;
		weight = 0.035;
		tracerScale = 2.0;
		tracerStartTime = 0.01;
		tracerEndTime = 1;
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\big_tracer_green.p3d";
		unconRefillModifier = 6;
		dispersion = 0;

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.874,1.0}, {0.823,0.8}, {0.786,0.4}};
			defaultDamageOverrideString = "{{0.874,1.0}, {0.823,0.8}, {0.786,0.4}}";

			class Health
			{
				damage = 450;
			};

			class Blood
			{
				damage = 700;
			};

			class Shock
			{
				damage = 400;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
	};

	class kr_Bullet_12x76_Base: Bullet_Base
	{
		scope = 0;
		round = "";
		spawnPileType = "";
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 380;
		typicalSpeed = 420;
		airFriction = -0.005;
		caliber = 1;
		deflecting = 0;
		damageBarrel = 600.0;
		damageBarrelDestroyed = 600.0;
		weight = 0.028;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 1.75;
		kr_caliber = "12x70";
		class SoundSetsGroundHits
		{
			default[] = {"Shell_12ga_default_SoundSet"};
			asphalt_ext[] = {"Shell_12ga_default_SoundSet"};
			asphalt_destroyed_ext[] = {"Shell_12ga_default_SoundSet"};
			asphalt_int[] = {"Shell_12ga_default_int_SoundSet"};
			asphalt_destroyed_int[] = {"Shell_12ga_default_int_SoundSet"};
			asphalt_felt[] = {"Shell_12ga_default_SoundSet"};
			asphalt_felt_int[] = {"Shell_12ga_default_int_SoundSet"};
			cp_broadleaf_dense1[] = {"Shell_12ga_leaves_SoundSet"};
			cp_broadleaf_dense2[] = {"Shell_12ga_leaves_SoundSet"};
			cp_broadleaf_sparse1[] = {"Shell_12ga_leaves_SoundSet"};
			cp_broadleaf_sparse2[] = {"Shell_12ga_leaves_SoundSet"};
			cp_conifer_common1[] = {"Shell_12ga_leaves_SoundSet"};
			cp_conifer_common2[] = {"Shell_12ga_leaves_SoundSet"};
			cp_conifer_moss1[] = {"Shell_12ga_leaves_SoundSet"};
			cp_conifer_moss2[] = {"Shell_12ga_leaves_SoundSet"};
			cp_concrete1[] = {"Shell_12ga_default_SoundSet"};
			cp_concrete2[] = {"Shell_12ga_default_SoundSet"};
			concrete_ext[] = {"Shell_12ga_default_SoundSet"};
			concrete_stairs_ext[] = {"Shell_12ga_default_SoundSet"};
			concrete_int[] = {"Shell_12ga_default_int_SoundSet"};
			concrete_stairs[] = {"Shell_12ga_default_SoundSet"};
			ceramic_tiles_ext[] = {"Shell_12ga_default_SoundSet"};
			ceramic_tiles_int[] = {"Shell_12ga_default_SoundSet"};
			ceramic_tiles_roof_ext[] = {"Shell_12ga_default_SoundSet"};
			ceramic_tiles_roof_int[] = {"Shell_12ga_default_SoundSet"};
			cp_dirt[] = {"Shell_12ga_dirt_SoundSet"};
			dirt_ext[] = {"Shell_12ga_dirt_SoundSet"};
			dirt_int[] = {"Shell_12ga_dirt_int_SoundSet"};
			cp_grass[] = {"Shell_12ga_grass_SoundSet"};
			grass_dry_ext[] = {"Shell_12ga_grass_SoundSet"};
			grass_dry_int[] = {"Shell_12ga_grass_int_SoundSet"};
			cp_grass_tall[] = {"Shell_12ga_grass_SoundSet"};
			cp_gravel[] = {"Shell_12ga_gravel_SoundSet"};
			gravel_small_ext[] = {"Shell_12ga_gravel_SoundSet"};
			gravel_small_int[] = {"Shell_12ga_gravel_int_SoundSet"};
			gravel_large_ext[] = {"Shell_12ga_gravel_SoundSet"};
			gravel_large_int[] = {"Shell_12ga_gravel_int_SoundSet"};
			lino_ext[] = {"Shell_12ga_default_SoundSet"};
			lino_int[] = {"Shell_12ga_default_SoundSet"};
			metal_thick_ext[] = {"Shell_12ga_metal_SoundSet"};
			metal_stairs_ext[] = {"Shell_12ga_metal_SoundSet"};
			metal_thick_int[] = {"Shell_12ga_metal_int_SoundSet"};
			metal_thin_ext[] = {"Shell_12ga_metal_SoundSet"};
			metal_thin_int[] = {"Shell_12ga_metal_int_SoundSet"};
			metal_thin_mesh_ext[] = {"Shell_12ga_metal_SoundSet"};
			metal_thin_mesh_int[] = {"Shell_12ga_metal_int_SoundSet"};
			cp_rock[] = {"Shell_12ga_default_SoundSet"};
			rubble_large_ext[] = {"Shell_12ga_gravel_SoundSet"};
			rubble_large_int[] = {"Shell_12ga_gravel_SoundSet"};
			rubble_small_ext[] = {"Shell_12ga_gravel_SoundSet"};
			rubble_small_int[] = {"Shell_12ga_gravel_SoundSet"};
			sand_ext[] = {"Shell_12ga_sand_SoundSet"};
			sand_int[] = {"Shell_12ga_sand_int_SoundSet"};
			stone_ext[] = {"Shell_12ga_sand_SoundSet"};
			stone_int[] = {"Shell_12ga_sand_int_SoundSet"};
			textile_carpet_ext[] = {"Shell_12ga_carpet_SoundSet"};
			textile_carpet_int[] = {"Shell_12ga_carpet_int_SoundSet"};
			trash_ext[] = {"Shell_12ga_default_SoundSet"};
			trash_int[] = {"Shell_12ga_default_SoundSet"};
			wood_parquet_ext[] = {"Shell_12ga_wood_SoundSet"};
			wood_parquet_int[] = {"Shell_12ga_wood_int_SoundSet"};
			wood_planks_ext[] = {"Shell_12ga_wood_SoundSet"};
			wood_planks_stairs_ext[] = {"Shell_12ga_wood_SoundSet"};
			wood_planks_int[] = {"Shell_12ga_wood_int_SoundSet"};
			wood_planks_stairs_int[] = {"Shell_12ga_wood_int_SoundSet"};
			fresh_water_ext[] = {"Shell_12ga_water_SoundSet"};
			fresh_water_int[] = {"Shell_12ga_water_int_SoundSet"};
			water_int[] = {"Shell_12ga_water_int_SoundSet"};
			water[] = {"Shell_12ga_water_int_SoundSet"};
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 110;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 110;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};

	class Bullet_12x76_AP20: kr_Bullet_12x76_Base
	{
		scope = 1;
		round = "FxRound_12x76_AP20";
		spawnPileType = "kr_Ammo_12x76_AP20";
		initSpeed = 460;
		typicalSpeed = 460;
		airFriction = -0.0015;
		damageBarrel = 1760;
		damageBarrelDestroyed = 1760;
		weight = 0.0084;
		dispersion = -0.0005;
		proxyShape = "\KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_AP20.p3d";

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.5;
			defaultDamageOverride[] = {{0.964, 1.0}, {0.927, 0.8}, {0.886, 0.5}, {0.741, 0.3}};
			defaultDamageOverrideString = "{{0.964, 1.0}, {0.927, 0.8}, {0.886, 0.5}, {0.741, 0.3}}";

			class Health
			{
				armorDamage = 3;
				damage = 120;
			};

			class Blood
			{
				damage = 250;
			};

			class Shock
			{
				damage = 90;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
	};

	class Bullet_12x76_lead_slug: kr_Bullet_12x76_Base
	{
		scope = 1;
		round = "FxRound_12x76_lead_slug";
		spawnPileType = "kr_Ammo_12x76_lead_slug";
		initSpeed = 340;
		typicalSpeed = 340;
		airFriction = -0.0015;
		damageBarrel = 1200;
		damageBarrelDestroyed = 1200;
		weight = 0.0084;
		dispersion = 0.005;
		proxyShape = "\KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_lead_slug.p3d";

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.2;
			defaultDamageOverride[] = {{0.985, 1.0}, {0.950, 0.8}, {0.926, 0.5}, {0.862, 0.3}};
			defaultDamageOverrideString = "{{0.985, 1.0}, {0.950, 0.8}, {0.926, 0.5}, {0.862, 0.3}}";

			class Health
			{
				damage = 130;
			};

			class Blood
			{
				damage = 150;
			};

			class Shock
			{
				damage = 50;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
	};

	class Bullet_12x76_FTX_custom: kr_Bullet_12x76_Base
	{
		scope = 1;
		round = "FxRound_12x76_FTX_custom";
		spawnPileType = "kr_Ammo_12x76_FTX_custom";
		initSpeed = 440;
		typicalSpeed = 440;
		airFriction = -0.0015;
		damageBarrel = 1280;
		damageBarrelDestroyed = 1280;
		weight = 0.0084;
		dispersion = 0.002;
		proxyShape = "\KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_FTX_custom.p3d";

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.1;
			defaultDamageOverride[] = {{0.984, 1.0}, {0.941, 0.8}, {0.914, 0.5}, {0.886, 0.3}};
			defaultDamageOverrideString = "{{0.984, 1.0}, {0.941, 0.8}, {0.914, 0.5}, {0.886, 0.3}}";

			class Health
			{
				damage = 150;
			};

			class Blood
			{
				damage = 200;
			};

			class Shock
			{
				damage = 95;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
	};

	class Bullet_12x76_RIP: kr_Bullet_12x76_Base
	{
		scope = 1;
		round = "FxRound_12x76_RIP";
		spawnPileType = "kr_Ammo_12x76_RIP";
		initSpeed = 370;
		typicalSpeed = 370;
		airFriction = -0.0015;
		damageBarrel = 1440;
		damageBarrelDestroyed = 1440;
		weight = 0.0084;
		dispersion = 0.008;
		proxyShape = "\KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_RIP.p3d";

		class kr_Gunplay: kr_Gunplay_Base
		{
			isHollowPoint = 1;
			hollowPointMultiplier = 7;
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.5;
			bleedThreshold = 0.3;
			defaultDamageOverride[] = {{0.984, 1.0}, {0.970, 0.8}, {0.957, 0.5}, {0.914, 0.1}};
			defaultDamageOverrideString = "{{0.984, 1.0}, {0.970, 0.8}, {0.957, 0.5}, {0.914, 0.1}}";

			class Health
			{
				damage = 40;
			};

			class Blood
			{
				damage = 500;
			};

			class Shock
			{
				damage = 50;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
	};

	class Bullet_12x76_Grizzly40: kr_Bullet_12x76_Base
	{
		scope = 1;
		round = "FxRound_12x76_Grizzly40";
		spawnPileType = "kr_Ammo_12x76_Grizzly40";
		initSpeed = 360;
		typicalSpeed = 360;
		airFriction = -0.0015;
		damageBarrel = 1280;
		damageBarrelDestroyed = 1280;
		weight = 0.0084;
		dispersion = 0.01;
		proxyShape = "\KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_Grizzly40.p3d";

		class kr_Gunplay: kr_Gunplay_Base
		{
			isHollowPoint = 1;
			hollowPointMultiplier = 5.75;
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.2;
			bleedThreshold = 0.8;
			defaultDamageOverride[] = {{0.986, 1.0}, {0.978, 0.8}, {0.969, 0.5}, {0.942, 0.1}};
			defaultDamageOverrideString = "{{0.986, 1.0}, {0.978, 0.8}, {0.969, 0.5}, {0.942, 0.1}}";

			class Health
			{
				damage = 40;
			};

			class Blood
			{
				damage = 300;
			};

			class Shock
			{
				damage = 65;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
	};

	class Bullet_12x76_buckshot_5: Shotgun_Base
	{
		scope = 1;
		round = "FxRound_12x76_buckshot_5";
		spawnPileType = "kr_Ammo_12x76_buckshot_5";
		initSpeed = 380;
		typicalSpeed = 380;
		airFriction = -0.00575;
		caliber = 0.5;
		deflecting = 0;
		projectilesCount = 15;
		damageBarrel = 800;
		damageBarrelDestroyed = 800;
		weight = 0.005;
		impactBehaviour = 0;
		hitAnimation = 0;
		dispersion = 0.005;
		proxyShape = "\KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_buckshot_5.p3d";

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.945, 1.0}, {0.918, 0.8}, {0.866, 0.5}, {0.750, 0.3}};
			defaultDamageOverrideString = "{{0.945, 1.0}, {0.918, 0.8}, {0.866, 0.5}, {0.750, 0.3}}";

			class Health
			{
				armorDamage = 0.5;
				damage = 15;
			};

			class Blood
			{
				damage = 25;
			};

			class Shock
			{
				damage = 10;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
		class NoiseHit
		{
			strength = 2;
			type = "shot";
		};
	};

	class Bullet_12x76_buckshot_7: Shotgun_Base
	{
		scope = 1;
		round = "FxRound_12x76_buckshot_7";
		spawnPileType = "kr_Ammo_12x76_buckshot_7";
		initSpeed = 330;
		typicalSpeed = 330;
		airFriction = -0.0078;
		caliber = 0.5;
		deflecting = 0;
		projectilesCount = 12;
		damageBarrel = 960;
		damageBarrelDestroyed = 960;
		weight = 0.005;
		impactBehaviour = 0;
		hitAnimation = 0;
		dispersion = 0.007;
		proxyShape = "\KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_buckshot_7.p3d";

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.924, 1.0}, {0.855, 0.8}, {0.824, 0.5}, {0.676, 0.3}};
			defaultDamageOverrideString = "{{0.924, 1.0}, {0.855, 0.8}, {0.824, 0.5}, {0.676, 0.3}}";

			class Health
			{
				armorDamage = 0.5;
				damage = 30;
			};

			class Blood
			{
				damage = 35;
			};

			class Shock
			{
				damage = 15;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
		class NoiseHit
		{
			strength = 3;
			type = "shot";
		};
	};

	class Bullet_12x76_buckshot_8: Shotgun_Base
	{
		scope = 1;
		round = "FxRound_12x76_buckshot_8";
		spawnPileType = "kr_Ammo_12x76_buckshot_8";
		initSpeed = 300;
		typicalSpeed = 300;
		airFriction = -0.01;
		caliber = 0.5;
		deflecting = 0;
		projectilesCount = 10;
		damageBarrel = 1120;
		damageBarrelDestroyed = 1120;
		weight = 0.005;
		impactBehaviour = 0;
		hitAnimation = 0;
		dispersion = 0.01;
		proxyShape = "\KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_buckshot_8.p3d";

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.903, 1.0}, {0.820, 0.8}, {0.740, 0.5}, {0.550, 0.3}};
			defaultDamageOverrideString = "{{0.903, 1.0}, {0.820, 0.8}, {0.740, 0.5}, {0.550, 0.3}}";

			class Health
			{
				armorDamage = 0.5;
				damage = 45;
			};

			class Blood
			{
				damage = 45;
			};

			class Shock
			{
				damage = 17;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
		class NoiseHit
		{
			strength = 5;
			type = "shot";
		};
	};

	class Bullet_23x75_shrapnel_10: Shotgun_Base
	{
		scope = 1;
		round = "FxRound_23x75_shrapnel_10";
		spawnPileType = "kr_Ammo_23x75_shrapnel_10";
		initSpeed = 270;
		typicalSpeed = 270;
		airFriction = -0.00575;
		caliber = 0.5;
		deflecting = 0;
		projectilesCount = 8;
		damageBarrel = 1500;
		damageBarrelDestroyed = 1500;
		weight = 0.005;
		impactBehaviour = 0;
		hitAnimation = 0;
		dispersion = 0.007;
		proxyShape = "KR\weapons\kr_weaponpack_2\ammunition\bullets\23x75_shrapnel_10_SingleRound.p3d";
		kr_caliber = "23x75";

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.5;
			defaultDamageOverride[] = {{0.970, 1.0}, {0.944, 0.8}, {0.919, 0.5}, {0.841, 0.1}};
			defaultDamageOverrideString = "{{0.970, 1.0}, {0.944, 0.8}, {0.919, 0.5}, {0.841, 0.1}}";

			class Health
			{
				armorDamage = 0.5;
				damage = 80;
			};

			class Blood
			{
				damage = 30;
			};

			class Shock
			{
				damage = 19;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
		class NoiseHit
		{
			strength = 5;
			type = "shot";
		};
	};

	class Bullet_23x75_shrapnel_25: Shotgun_Base
	{
		scope = 1;
		round = "FxRound_23x75_shrapnel_25";
		spawnPileType = "kr_Ammo_23x75_shrapnel_25";
		initSpeed = 375;
		typicalSpeed = 375;
		airFriction = -0.0078;
		caliber = 0.5;
		deflecting = 0;
		projectilesCount = 8;
		damageBarrel = 1800;
		damageBarrelDestroyed = 1800;
		weight = 0.005;
		impactBehaviour = 0;
		hitAnimation = 0;
		dispersion = 0.015;
		proxyShape = "KR\weapons\kr_weaponpack_2\ammunition\bullets\23x75_shrapnel_25_SingleRound.p3d";
		kr_caliber = "23x75";

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.5;
			defaultDamageOverride[] = {{0.904, 1.0}, {0.824, 0.8}, {0.760, 0.5}, {0.704, 0.1}};
			defaultDamageOverrideString = "{{0.904, 1.0}, {0.824, 0.8}, {0.760, 0.5}, {0.704, 0.1}}";

			class Health
			{
				armorDamage = 0.5;
				damage = 90;
			};

			class Blood
			{
				damage = 30;
			};

			class Shock
			{
				damage = 19;
				damageOverride[] = {{0.9,1.0}};
				damageOverrideString = "{{0.9,1.0}}";
			};
		};
		class NoiseHit
		{
			strength = 5;
			type = "shot";
		};
	};

	class Bullet_23x75_barrikade: Bullet_Base
	{
		scope = 1;
		round = "FxRound_23x75_barrikade";
		spawnPileType = "kr_Ammo_23x75_barrikade";
		initSpeed = 420;
		typicalSpeed = 420;
		airFriction = -0.0015;
		caliber = 0.5;
		deflecting = 0;
		damageBarrel = 2000;
		damageBarrelDestroyed = 2000;
		weight = 0.0084;
		impactBehaviour = 0;
		hitAnimation = 0;
		dispersion = -0.0005;
		proxyShape = "KR\weapons\kr_weaponpack_2\ammunition\bullets\23x75_barrikade_SingleRound.p3d";
		kr_caliber = "23x75";

		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.8;
			defaultDamageOverride[] = {{0.950, 1.0}, {0.900, 0.8}, {0.860, 0.5}, {0.798, 0.1}};
			defaultDamageOverrideString = "{{0.950, 1.0}, {0.900, 0.8}, {0.860, 0.5}, {0.798, 0.1}}";

			class Health
			{
				armorDamage = 3;
				damage = 250;
			};

			class Blood
			{
				damage = 400;
			};

			class Shock
			{
				damage = 120;
				damageOverride[] = {{0.9, 1.0}, {0.740, 0.1}};
				damageOverrideString = "{{0.9, 1.0}, {0.740, 0.1}}";
			};
		};
		class NoiseHit
		{
			strength = 20;
			type = "shot";
		};
	};
};

class CfgAmmoTypes
{
	class AType_Bullet_HollowPointTech
	{
		name = "Bullet_HollowPointTech";
	};
	class AType_Bullet_9x19_7n21
	{
		name = "Bullet_9x19_7n21";
	};
	class AType_Bullet_9x19_7n31
	{
		name = "Bullet_9x19_7n31";
	};
	class AType_Bullet_9x19_ap_63
	{
		name = "Bullet_9x19_ap_63";
	};
	class AType_Bullet_9x19_gt
	{
		name = "Bullet_9x19_gt";
	};
	class AType_Bullet_9x19_pso_gz
	{
		name = "Bullet_9x19_pso_gz";
	};
	class AType_Bullet_9x19_quakemaker
	{
		name = "Bullet_9x19_quakemaker";
	};
	class AType_Bullet_9x19_rip
	{
		name = "Bullet_9x19_rip";
	};
	class AType_Bullet_9x18_ppt_gz
	{
		name = "Bullet_9x18_ppt_gz";
	};
	class AType_Bullet_9x18_pbm_gz
	{
		name = "Bullet_9x18_pbm_gz";
	};
	class AType_Bullet_9x18_pmm_gz
	{
		name = "Bullet_9x18_pmm_gz";
	};
	class AType_Bullet_9x18_pso_gz
	{
		name = "Bullet_9x18_pso_gz";
	};
	class AType_Bullet_9x18_pst_gz
	{
		name = "Bullet_9x18_pst_gz";
	};
	class AType_Bullet_9x18_sp7_gz
	{
		name = "Bullet_9x18_sp7_gz";
	};
	class AType_Bullet_545x39_BS
	{
		name = "Bullet_545x39_BS";
	};
	class AType_Bullet_545x39_BT
	{
		name = "Bullet_545x39_BT";
	};
	class AType_Bullet_545x39_FMJ
	{
		name = "Bullet_545x39_FMJ";
	};
	class AType_Bullet_545x39_PRS
	{
		name = "Bullet_545x39_PRS";
	};
	class AType_Bullet_545x39_PS
	{
		name = "Bullet_545x39_PS";
	};
	class AType_Bullet_545x39_T
	{
		name = "Bullet_545x39_T";
	};
	class AType_Bullet_545x39_US
	{
		name = "Bullet_545x39_US";
	};
	class AType_Bullet_556x45_FMJ
	{
		name = "Bullet_556x45_FMJ";
	};
	class AType_Bullet_556x45_m855
	{
		name = "Bullet_556x45_m855";
	};
	class AType_Bullet_556x45_m855a1
	{
		name = "Bullet_556x45_m855a1";
	};
	class AType_Bullet_556x45_m856
	{
		name = "Bullet_556x45_m856";
	};
	class AType_Bullet_556x45_m995
	{
		name = "Bullet_556x45_m995";
	};
	class AType_Bullet_556x45_warmageddon
	{
		name = "Bullet_556x45_warmageddon";
	};
	class AType_Bullet_762x39_bp
	{
		name = "Bullet_762x39_bp";
	};
	class AType_Bullet_762x39_fmj
	{
		name = "Bullet_762x39_fmj";
	};
	class AType_Bullet_762x39_mai_ap
	{
		name = "Bullet_762x39_mai_ap";
	};
	class AType_Bullet_762x39_pp
	{
		name = "Bullet_762x39_pp";
	};
	class AType_Bullet_762x39_ps
	{
		name = "Bullet_762x39_ps";
	};
	class AType_Bullet_762x39_t45m
	{
		name = "Bullet_762x39_t45m";
	};
	class AType_Bullet_762x39_us
	{
		name = "Bullet_762x39_us";
	};
	class AType_Bullet_762x51_bpz_fmj
	{
		name = "Bullet_762x51_bpz_fmj";
	};
	class AType_Bullet_762x51_m61
	{
		name = "Bullet_762x51_m61";
	};
	class AType_Bullet_762x51_m80
	{
		name = "Bullet_762x51_m80";
	};
	class AType_Bullet_762x51_m993
	{
		name = "Bullet_762x51_m993";
	};
	class AType_Bullet_762x51_tpz_sp
	{
		name = "Bullet_762x51_tpz_sp";
	};
	class AType_Bullet_762x51_ultra_nosler
	{
		name = "Bullet_762x51_ultra_nosler";
	};
	class AType_Bullet_762x54r_bs
	{
		name = "Bullet_762x54r_bs";
	};
	class AType_Bullet_762x54r_bthp
	{
		name = "Bullet_762x54r_bthp";
	};
	class AType_Bullet_762x54r_fmj
	{
		name = "Bullet_762x54r_fmj";
	};
	class AType_Bullet_762x54r_lps
	{
		name = "Bullet_762x54r_lps";
	};
	class AType_Bullet_762x54r_ps
	{
		name = "Bullet_762x54r_ps";
	};
	class AType_Bullet_762x54r_snb
	{
		name = "Bullet_762x54r_snb";
	};
	class AType_Bullet_762x54r_t46m
	{
		name = "Bullet_762x54r_t46m";
	};
	class AType_Bullet_9x39_bp
	{
		name = "Bullet_9x39_bp";
	};
	class AType_Bullet_9x39_pab9
	{
		name = "Bullet_9x39_pab9";
	};
	class AType_Bullet_9x39_sp5
	{
		name = "Bullet_9x39_sp5";
	};
	class AType_Bullet_9x39_sp6
	{
		name = "Bullet_9x39_sp6";
	};
	class AType_Bullet_762x25_PT_gz
	{
		name = "Bullet_762x25_PT_gz";
	};
	class AType_Bullet_762x25_PST_gz
	{
		name = "Bullet_762x25_PST_gz";
	};
	class AType_Bullet_762x25_FMJ43
	{
		name = "Bullet_762x25_FMJ43";
	};
	class AType_Bullet_762x25_AKBS
	{
		name = "Bullet_762x25_AKBS";
	};
	class AType_Bullet_366TKM_custom_ap
	{
		name = "Bullet_366TKM_custom_ap";
	};
	class AType_Bullet_366TKM_EKO
	{
		name = "Bullet_366TKM_EKO";
	};
	class AType_Bullet_366TKM_FMJ
	{
		name = "Bullet_366TKM_FMJ";
	};
	class AType_Bullet_366TKM_Geksa
	{
		name = "Bullet_366TKM_Geksa";
	};
	class AType_Bullet_127x55_PS12
	{
		name = "Bullet_127x55_PS12";
	};
	class AType_Bullet_127x55_PS12A
	{
		name = "Bullet_127x55_PS12A";
	};
	class AType_Bullet_127x55_PS12B
	{
		name = "Bullet_127x55_PS12B";
	};
	class AType_Bullet_338LM_ap
	{
		name = "Bullet_338LM_ap";
	};
	class AType_Bullet_338LM_upz
	{
		name = "Bullet_338LM_upz";
	};
	class AType_Bullet_338LM_fmj
	{
		name = "Bullet_338LM_fmj";
	};
	class AType_Bullet_338LM_tac_x
	{
		name = "Bullet_338LM_tac_x";
	};
	class AType_Bullet_408CheyTac
	{
		name = "Bullet_408CheyTac";
	};
	class AType_Bullet_50BMG
	{
		name = "Bullet_50BMG";
	};
	class AType_Bullet_50BMG_AP
	{
		name = "Bullet_50BMG_AP";
	};
	class AType_Bullet_50BMG_T
	{
		name = "Bullet_50BMG_T";
	};
	class AType_Bullet_12x76_Grizzly40
	{
		name = "Bullet_12x76_Grizzly40";
	};
	class AType_Bullet_12x76_AP20
	{
		name = "Bullet_12x76_AP20";
	};
	class AType_Bullet_12x76_lead_slug
	{
		name = "Bullet_12x76_lead_slug";
	};
	class AType_Bullet_12x76_FTX_custom
	{
		name = "Bullet_12x76_FTX_custom";
	};
	class AType_Bullet_12x76_RIP
	{
		name = "Bullet_12x76_RIP";
	};
	class AType_Bullet_12x76_buckshot_5
	{
		name = "Bullet_12x76_buckshot_5";
	};
	class AType_Bullet_12x76_buckshot_7
	{
		name = "Bullet_12x76_buckshot_7";
	};
	class AType_Bullet_12x76_buckshot_8
	{
		name = "Bullet_12x76_buckshot_8";
	};
	class AType_Bullet_23x75_barrikade
	{
		name = "Bullet_23x75_barrikade";
	};
	class AType_Bullet_23x75_shrapnel_25
	{
		name = "Bullet_23x75_shrapnel_25";
	};
	class AType_Bullet_23x75_shrapnel_10
	{
		name = "Bullet_23x75_shrapnel_10";
	};

	class AType_Bullet_762x25_HP
	{
		name = "Bullet_762x25_HP";
	};
	class AType_Bullet_545x39_HP
	{
		name = "Bullet_545x39_HP";
	};
	class AType_Bullet_762x39_HP
	{
		name = "Bullet_762x39_HP";
	};
	class AType_Bullet_9x39_HP
	{
		name = "Bullet_9x39_HP";
	};
	class AType_Bullet_127x55_PS12HP
	{
		name = "Bullet_127x55_PS12HP";
	};

};
class cfgVehicles
{
	class FxRound;
	class FxCartridge;
	class FxRound_9x19_7n21: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_7n21_SingleRound.p3d";
	};
	class FxCartridge_9x19_7n21: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_7n21_SingleRound.p3d";
	};
	class FxRound_9x19_7n31: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_7n31_SingleRound.p3d";
	};
	class FxCartridge_9x19_7n31: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_7n31_SingleRound.p3d";
	};
	class FxRound_9x19_ap_63: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_ap_63_SingleRound.p3d";
	};
	class FxCartridge_9x19_ap_63: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_ap_63_SingleRound.p3d";
	};
	class FxRound_9x19_gt: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_gt_SingleRound.p3d";
	};
	class FxCartridge_9x19_gt: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_gt_SingleRound.p3d";
	};
	class FxRound_9x19_pso_gz: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_pso_gz_SingleRound.p3d";
	};
	class FxCartridge_9x19_pso_gz: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_pso_gz_SingleRound.p3d";
	};
	class FxRound_9x19_quakemaker: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_quakemaker_SingleRound.p3d";
	};
	class FxCartridge_9x19_quakemaker: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_quakemaker_SingleRound.p3d";
	};
	class FxRound_9x19_rip: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_rip_SingleRound.p3d";
	};
	class FxCartridge_9x19_rip: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x19_rip_SingleRound.p3d";
	};
	class FxRound_9x18_ppt_gz: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_ppt_gz_SingleRound.p3d";
	};
	class FxCartridge_9x18_ppt_gz: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_ppt_gz_SingleRound.p3d";
	};
	class FxRound_9x18_pbm_gz: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_pbm_gz_SingleRound.p3d";
	};
	class FxCartridge_9x18_pbm_gz: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_pbm_gz_SingleRound.p3d";
	};
	class FxRound_9x18_pmm_gz: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_pmm_gz_SingleRound.p3d";
	};
	class FxCartridge_9x18_pmm_gz: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_pmm_gz_SingleRound.p3d";
	};
	class FxRound_9x18_pso_gz: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_pso_gz_SingleRound.p3d";
	};
	class FxCartridge_9x18_pso_gz: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_pso_gz_SingleRound.p3d";
	};
	class FxRound_9x18_pst_gz: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_pst_gz_SingleRound.p3d";
	};
	class FxCartridge_9x18_pst_gz: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_pst_gz_SingleRound.p3d";
	};
	class FxRound_9x18_sp7_gz: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_sp7_gz_SingleRound.p3d";
	};
	class FxCartridge_9x18_sp7_gz: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x18_sp7_gz_SingleRound.p3d";
	};
	class FxRound_545x39_BS: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_BS_SingleRound.p3d";
	};
	class FxCartridge_545x39_BS: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_BS_SingleRound.p3d";
	};
	class FxRound_545x39_BT: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_BT_SingleRound.p3d";
	};
	class FxCartridge_545x39_BT: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_BT_SingleRound.p3d";
	};
	class FxRound_545x39_FMJ: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_FMJ_SingleRound.p3d";
	};
	class FxCartridge_545x39_FMJ: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_FMJ_SingleRound.p3d";
	};
	class FxRound_545x39_PRS: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_PRS_SingleRound.p3d";
	};
	class FxCartridge_545x39_PRS: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_PRS_SingleRound.p3d";
	};
	class FxRound_545x39_PS: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_PS_SingleRound.p3d";
	};
	class FxCartridge_545x39_PS: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_PS_SingleRound.p3d";
	};
	class FxRound_545x39_T: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_T_SingleRound.p3d";
	};
	class FxCartridge_545x39_T: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_T_SingleRound.p3d";
	};
	class FxRound_545x39_US: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_US_SingleRound.p3d";
	};
	class FxCartridge_545x39_US: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_US_SingleRound.p3d";
	};
	class FxRound_556x45_FMJ: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_FMJ_SingleRound.p3d";
	};
	class FxCartridge_556x45_FMJ: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_FMJ_SingleRound.p3d";
	};
	class FxRound_556x45_m855: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_m855_SingleRound.p3d";
	};
	class FxCartridge_556x45_m855: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_m855_SingleRound.p3d";
	};
	class FxRound_556x45_m855a1: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_m855a1_SingleRound.p3d";
	};
	class FxCartridge_556x45_m855a1: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_m855a1_SingleRound.p3d";
	};
	class FxRound_556x45_m856: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_m856_SingleRound.p3d";
	};
	class FxCartridge_556x45_m856: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_m856_SingleRound.p3d";
	};
	class FxRound_556x45_m995: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_m995_SingleRound.p3d";
	};
	class FxCartridge_556x45_m995: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_m995_SingleRound.p3d";
	};
	class FxRound_556x45_warmageddon: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_warmageddon_SingleRound.p3d";
	};
	class FxCartridge_556x45_warmageddon: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\556x45_warmageddon_SingleRound.p3d";
	};
	class FxRound_762x39_bp: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_bp_SingleRound.p3d";
	};
	class FxCartridge_762x39_bp: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_bp_SingleRound.p3d";
	};
	class FxRound_762x39_fmj: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_fmj_SingleRound.p3d";
	};
	class FxCartridge_762x39_fmj: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_fmj_SingleRound.p3d";
	};
	class FxRound_762x39_mai_ap: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_mai_ap_SingleRound.p3d";
	};
	class FxCartridge_762x39_mai_ap: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_mai_ap_SingleRound.p3d";
	};
	class FxRound_762x39_pp: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_pp_SingleRound.p3d";
	};
	class FxCartridge_762x39_pp: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_pp_SingleRound.p3d";
	};
	class FxRound_762x39_ps: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_ps_SingleRound.p3d";
	};
	class FxCartridge_762x39_ps: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_ps_SingleRound.p3d";
	};
	class FxRound_762x39_t45m: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_t45m_SingleRound.p3d";
	};
	class FxCartridge_762x39_t45m: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_t45m_SingleRound.p3d";
	};
	class FxRound_762x39_us: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_us_SingleRound.p3d";
	};
	class FxCartridge_762x39_us: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_us_SingleRound.p3d";
	};
	class FxRound_762x51_bpz_fmj: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_bpz_fmj_SingleRound.p3d";
	};
	class FxCartridge_762x51_bpz_fmj: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_bpz_fmj_SingleRound.p3d";
	};
	class FxRound_762x51_m61: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_m61_SingleRound.p3d";
	};
	class FxCartridge_762x51_m61: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_m61_SingleRound.p3d";
	};
	class FxRound_762x51_m80: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_m80_SingleRound.p3d";
	};
	class FxCartridge_762x51_m80: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_m80_SingleRound.p3d";
	};
	class FxRound_762x51_m993: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_m993_SingleRound.p3d";
	};
	class FxCartridge_762x51_m993: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_m993_SingleRound.p3d";
	};
	class FxRound_762x51_tpz_sp: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_tpz_sp_SingleRound.p3d";
	};
	class FxCartridge_762x51_tpz_sp: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_tpz_sp_SingleRound.p3d";
	};
	class FxRound_762x51_ultra_nosler: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_ultra_nosler_SingleRound.p3d";
	};
	class FxCartridge_762x51_ultra_nosler: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x51_ultra_nosler_SingleRound.p3d";
	};
	class FxRound_762x54r_bs: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_bs_SingleRound.p3d";
	};
	class FxCartridge_762x54r_bs: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_bs_SingleRound.p3d";
	};
	class FxRound_762x54r_bthp: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_bthp_SingleRound.p3d";
	};
	class FxCartridge_762x54r_bthp: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_bthp_SingleRound.p3d";
	};
	class FxRound_762x54r_fmj: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_fmj_SingleRound.p3d";
	};
	class FxCartridge_762x54r_fmj: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_fmj_SingleRound.p3d";
	};
	class FxRound_762x54r_lps: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_lps_SingleRound.p3d";
	};
	class FxCartridge_762x54r_lps: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_lps_SingleRound.p3d";
	};
	class FxRound_762x54r_ps: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_ps_SingleRound.p3d";
	};
	class FxCartridge_762x54r_ps: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_ps_SingleRound.p3d";
	};
	class FxRound_762x54r_snb: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_snb_SingleRound.p3d";
	};
	class FxCartridge_762x54r_snb: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_snb_SingleRound.p3d";
	};
	class FxRound_762x54r_t46m: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_t46m_SingleRound.p3d";
	};
	class FxCartridge_762x54r_t46m: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_t46m_SingleRound.p3d";
	};
	class FxRound_9x39_bp: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x39_bp_SingleRound.p3d";
	};
	class FxCartridge_9x39_bp: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x39_bp_SingleRound.p3d";
	};
	class FxRound_9x39_pab9: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x39_pab9_SingleRound.p3d";
	};
	class FxCartridge_9x39_pab9: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x39_pab9_SingleRound.p3d";
	};
	class FxRound_9x39_sp5: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x39_sp5_SingleRound.p3d";
	};
	class FxCartridge_9x39_sp5: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x39_sp5_SingleRound.p3d";
	};
	class FxRound_9x39_sp6: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x39_sp6_SingleRound.p3d";
	};
	class FxCartridge_9x39_sp6: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x39_sp6_SingleRound.p3d";
	};
	class FxRound_762x25_PT_gz: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x25_PT_gz_SingleRound.p3d";
	};
	class FxCartridge_762x25_PT_gz: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x25_PT_gz_SingleRound.p3d";
	};
	class FxRound_762x25_PST_gz: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x25_PST_gz_SingleRound.p3d";
	};
	class FxCartridge_762x25_PST_gz: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x25_PST_gz_SingleRound.p3d";
	};
	class FxRound_762x25_FMJ43: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x25_FMJ43_SingleRound.p3d";
	};
	class FxCartridge_762x25_FMJ43: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x25_FMJ43_SingleRound.p3d";
	};
	class FxRound_762x25_AKBS: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x25_AKBS_SingleRound.p3d";
	};
	class FxCartridge_762x25_AKBS: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x25_AKBS_SingleRound.p3d";
	};
	class FxRound_366TKM_custom_ap: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\366TKM_custom_ap_SingleRound.p3d";
	};
	class FxCartridge_366TKM_custom_ap: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\366TKM_custom_ap_SingleRound.p3d";
	};
	class FxRound_366TKM_EKO: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\366TKM_EKO_SingleRound.p3d";
	};
	class FxCartridge_366TKM_EKO: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\366TKM_EKO_SingleRound.p3d";
	};
	class FxRound_366TKM_FMJ: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\366TKM_FMJ_SingleRound.p3d";
	};
	class FxCartridge_366TKM_FMJ: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\366TKM_FMJ_SingleRound.p3d";
	};
	class FxRound_366TKM_Geksa: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\366TKM_Geksa_SingleRound.p3d";
	};
	class FxCartridge_366TKM_Geksa: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\366TKM_Geksa_SingleRound.p3d";
	};
	class FxRound_127x55_PS12: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\127x55_PS12_SingleRound.p3d";
	};
	class FxCartridge_127x55_PS12: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\127x55_PS12_SingleRound.p3d";
	};
	class FxRound_127x55_PS12A: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\127x55_PS12A_SingleRound.p3d";
	};
	class FxCartridge_127x55_PS12A: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\127x55_PS12A_SingleRound.p3d";
	};
	class FxRound_127x55_PS12B: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\127x55_PS12B_SingleRound.p3d";
	};
	class FxCartridge_127x55_PS12B: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\127x55_PS12B_SingleRound.p3d";
	};
	class FxRound_338LM_ap: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\338LM_ap_SingleRound.p3d";
	};
	class FxCartridge_338LM_ap: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\338LM_ap_SingleRound.p3d";
	};
	class FxRound_338LM_upz: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\338LM_upz_SingleRound.p3d";
	};
	class FxCartridge_338LM_upz: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\338LM_upz_SingleRound.p3d";
	};
	class FxRound_338LM_fmj: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\338LM_fmj_SingleRound.p3d";
	};
	class FxCartridge_338LM_fmj: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\338LM_fmj_SingleRound.p3d";
	};
	class FxRound_338LM_tac_x: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\338LM_tac_x_SingleRound.p3d";
	};
	class FxCartridge_338LM_tac_x: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\338LM_tac_x_SingleRound.p3d";
	};
	class FxRound_408CheyTac: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\408CheyTac_SingleRound.p3d";
	};
	class FxCartridge_408CheyTac: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\408CheyTac_SingleRound.p3d";
	};
	class FxRound_50BMG: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50BMG_SingleRound.p3d";
	};
	class FxCartridge_50BMG: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50BMG_SingleRound.p3d";
	};
	class FxRound_50BMG_AP: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50BMG_AP_SingleRound.p3d";
	};
	class FxCartridge_50BMG_AP: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50BMG_AP_SingleRound.p3d";
	};
	class FxRound_50BMG_T: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50BMG_T_SingleRound.p3d";
	};
	class FxCartridge_50BMG_T: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50BMG_T_SingleRound.p3d";
	};
	class FxCartridge_12x76_Grizzly40: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_Grizzly40.p3d";
	};
	class FxRound_12x76_Grizzly40: FxRound
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_Grizzly40.p3d";
	};
	class FxCartridge_12x76_AP20: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_AP20.p3d";
	};
	class FxRound_12x76_AP20: FxRound
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_AP20.p3d";
	};
	class FxCartridge_12x76_lead_slug: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_lead_slug.p3d";
	};
	class FxRound_12x76_lead_slug: FxRound
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_lead_slug.p3d";
	};
	class FxCartridge_12x76_FTX_custom: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_FTX_custom.p3d";
	};
	class FxRound_12x76_FTX_custom: FxRound
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_FTX_custom.p3d";
	};
	class FxCartridge_12x76_RIP: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_RIP.p3d";
	};
	class FxRound_12x76_RIP: FxRound
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_RIP.p3d";
	};
	class FxCartridge_12x76_buckshot_5: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_buckshot_5.p3d";
	};
	class FxRound_12x76_buckshot_5: FxRound
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_buckshot_5.p3d";
	};
	class FxCartridge_12x76_buckshot_7: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_buckshot_7.p3d";
	};
	class FxRound_12x76_buckshot_7: FxRound
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_buckshot_7.p3d";
	};
	class FxCartridge_12x76_buckshot_8: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_buckshot_8.p3d";
	};
	class FxRound_12x76_buckshot_8: FxRound
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_buckshot_8.p3d";
	};
	class FxCartridge_23x75_shrapnel_10: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack_2\ammunition\bullets\23x75_shrapnel_10_SingleRound.p3d";
	};
	class FxCartridge_23x75_shrapnel_25: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack_2\ammunition\bullets\23x75_shrapnel_25_SingleRound.p3d";
	};
	class FxCartridge_23x75_barrikade: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack_2\ammunition\bullets\23x75_barrikade_SingleRound.p3d";
	};
	class FxRound_23x75_shrapnel_10: FxRound
	{
		model = "KR\weapons\kr_weaponpack_2\ammunition\bullets\23x75_shrapnel_10_SingleRound.p3d";
	};
	class FxRound_23x75_shrapnel_25: FxRound
	{
		model = "KR\weapons\kr_weaponpack_2\ammunition\bullets\23x75_shrapnel_25_SingleRound.p3d";
	};
	class FxRound_23x75_barrikade: FxRound
	{
		model = "KR\weapons\kr_weaponpack_2\ammunition\bullets\23x75_barrikade_SingleRound.p3d";
	};

	class FxRound_762x25_HP: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x25_HP_SingleRound.p3d";
	};
	class FxCartridge_762x25_HP: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x25_HP_SingleRound.p3d";
	};
	class FxRound_545x39_HP: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_HP_SingleRound.p3d";
	};
	class FxCartridge_545x39_HP: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\545x39_HP_SingleRound.p3d";
	};
	class FxRound_762x39_HP: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_HP_SingleRound.p3d";
	};
	class FxCartridge_762x39_HP: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\762x39_HP_SingleRound.p3d";
	};
	class FxRound_9x39_HP: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x39_HP_SingleRound.p3d";
	};
	class FxCartridge_9x39_HP: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\9x39_HP_SingleRound.p3d";
	};
	class FxRound_127x55_PS12HP: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\127x55_PS12HP_SingleRound.p3d";
	};
	class FxCartridge_127x55_PS12HP: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\127x55_PS12HP_SingleRound.p3d";
	};
	class FxCartridge_kr_9x18 : FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\9x18_case.p3d";
	};
	class FxCartridge_kr_9x19 : FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\9x19_case.p3d";
	};
	class FxCartridge_kr_762x25 : FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\762x25_case.p3d";
	};
	class FxCartridge_kr_545x39 : FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\545x39_case.p3d";
	};
	class FxCartridge_kr_556x45 : FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\556x45_case.p3d";
	};
	class FxCartridge_kr_762x39 : FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\762x39_case.p3d";
	};
	class FxCartridge_kr_762x51 : FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\762x51_case.p3d";
	};
	class FxCartridge_kr_762x54 : FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\762x54r_case.p3d";
	};
	class FxCartridge_kr_9x39 : FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\9x39_case.p3d";
	};
	class FxCartridge_kr_366TKM : FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\366TKM_case.p3d";
	};
	class FxCartridge_kr_127x55 : FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\127x55_case.p3d";
	};
	class FxCartridge_kr_338LM : FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\338lm_case.p3d";
	};
	class FxCartridge_kr_408CheyTac : FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\408CheyTac_case.p3d";
	};
	class FxCartridge_kr_50BMG : FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\50bmg_case.p3d";
	};
};