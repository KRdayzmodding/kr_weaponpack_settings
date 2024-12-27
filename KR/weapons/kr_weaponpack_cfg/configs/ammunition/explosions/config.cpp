class CfgPatches
{
	class kr_weaponpack_ammunition_explosions
	{
		units[] = {"kr_explosion_base","kr_explosion","kr_explosion_frag_12","kr_explosion_devastator"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Projectiles","kr_data"};
		ammo[] = {"kr_Bullet_50bmg_expl_Base","Bullet_50bmg_ET","Bullet_50bmg_E","Bullet_12x76_devastator","Bullet_12x76_frag_12","Explosion_50BMG_Ammo","Explosion_12x76_Frag12_Ammo","Explosion_12x76_Devastator_Ammo"};
	};
};
class Entity;
class kr_Gunplay_Base;
class CfgAmmo
{
	class Bullet_Base;
	class Shotgun_Base;
	class kr_Bullet_50BMG_Base;
	class kr_Bullet_50bmg_expl_Base: kr_Bullet_50bmg_Base
	{
		scope = 1;
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50bmg_E_SingleRound.p3d";
		proxyShape = "\KR\weapons\kr_weaponpack\ammunition\bullets\50bmg_E_SingleRound.p3d";
		casing = "FxCartridge_50BMG_ET";
		round = "FxRound_50BMG_ET";
		hit = 9.5;
		indirectHit = 0.0;
		indirectHitRange = 0;
		timeToLive = 20;
		airLock = 0;
		initSpeed = 76;
		typicalSpeed = 76;
		airFriction = -0.0013;
		airFrictionChangeOnActivation = -0.0013;
		caliber = 0;
		deflecting = 0.0;
		deflectingMultiplier = 0;
		deflectionSlowDown = 0;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.23;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		spawnPileType = "kr_Bullet_50bmg_expl_Base";
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 50;
			};
			class Blood
			{
				damage = 50;
			};
			class Shock
			{
				damage = 100;
			};
		};
		class NoiseHit
		{
			strength = 15;
			type = "sound";
		};
	};
	class Bullet_50bmg_ET: kr_Bullet_50bmg_expl_Base
	{
		hit = 3;
		proxyShape = "\KR\weapons\kr_weaponpack\ammunition\bullets\50bmg_ET_SingleRound.p3d";
		indirectHit = 1;
		indirectHitRange = 10;
		indirectHitRangeMultiplier = 1;
		explosive = 1;
		caliber = 0.1;
		casing = "FxCartridge_50BMG_ET";
		round = "FxRound_50BMG_ET";
		spawnPileType = "kr_Ammo_50BMG_ET";
		soundSetExplosion[] = {};
		typicalSpeed = 1700;
		initSpeed = 1700;
		airFriction = -0.0012;
		damageBarrel = 4000;
		damageBarrelDestroyed = 4000;
		tracerScale = 0.5;
		tracerStartTime = 0.0125;
		tracerEndTime = 3.5;
		weight = 0.009;
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\big_tracer_red.p3d";
	};
	class Bullet_50bmg_E: kr_Bullet_50bmg_expl_Base
	{
		casing = "FxCartridge_50BMG_ET";
		round = "FxRound_50BMG_ET";
		spawnPileType = "kr_Ammo_50BMG_E";
		hit = 3;
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50bmg_E_SingleRound.p3d";
		proxyShape = "\KR\weapons\kr_weaponpack\ammunition\bullets\50bmg_E_SingleRound.p3d";
		indirectHit = 1;
		indirectHitRange = 10;
		indirectHitRangeMultiplier = 1;
		explosive = 1;
		caliber = 0.1;
		soundSetExplosion[] = {};
		typicalSpeed = 1700;
		initSpeed = 1700;
		airFriction = -0.0012;
		damageBarrel = 3000;
		damageBarrelDestroyed = 3000;
		weight = 0.009;
	};
	class kr_Bullet_12x76_Base;
	class Bullet_12x76_devastator: kr_Bullet_12x76_Base
	{
		scope = 1;
		casing = "FxCartridge_12x76_devastator";
		round = "FxRound_12x76_devastator";
		spawnPileType = "kr_Ammo_12x76_devastator";
		explosive = 1;
		initSpeed = 75;
		typicalSpeed = 150;
		airFriction = -0.003;
		damageBarrel = 2000.0;
		dispersion = 0.05;
		damageBarrelDestroyed = 2000.0;
		projectilesCount = 10;
		tracerScale = 1;
		tracerStartTime = 0.0125;
		tracerEndTime = 2;
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\pistol_tracer_red.p3d";
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 0.85;
			class Health
			{
				damage = 7;
			};
			class Blood
			{
				damage = 20;
			};
			class Shock
			{
				damage = 70;
			};
		};
	};
	class Bullet_12x76_frag_12: kr_Bullet_12x76_Base
	{
		scope = 1;
		casing = "FxCartridge_12x76_frag_12";
		round = "FxRound_12x76_frag_12";
		spawnPileType = "kr_Ammo_12x76_frag_12";
		explosive = 1;
		initSpeed = 300;
		typicalSpeed = 330;
		airFriction = -0.002;
		damageBarrel = 2000.0;
		damageBarrelDestroyed = 2000.0;
		tracerScale = 1.5;
		tracerStartTime = 0.0125;
		tracerEndTime = 2;
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\pistol_tracer_green.p3d";
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.5;
			class Health
			{
				damage = 45;
			};
			class Blood
			{
				damage = 70;
			};
			class Shock
			{
				damage = 25;
			};
		};
	};
	class DefaultAmmo;
	class Explosion_50BMG_Ammo: DefaultAmmo
	{
		indirectHit = 1;
		indirectHitRange = 3;
		indirectHitRangeMultiplier = 4;
		explosive = 1;
		caliber = 1;
		deflecting = 0;
		simulation = "shotShell";
		simulationStep = 0.05;
		soundSetExplosion[] = {"Grenade_explosion_SoundSet","Grenade_Tail_SoundSet"};
		class DamageApplied
		{
			type = "FragGrenade";
			class Health
			{
				damage = 50;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseHit
		{
			strength = 170;
			type = "shot";
		};
	};
	class Explosion_12x76_Frag12_Ammo: DefaultAmmo
	{
		indirectHit = 1;
		indirectHitRange = 2;
		indirectHitRangeMultiplier = 4;
		explosive = 1;
		caliber = 1;
		deflecting = 0;
		simulation = "shotShell";
		simulationStep = 0.05;
		soundSetExplosion[] = {"Grenade_explosion_SoundSet","Grenade_Tail_SoundSet"};
		class DamageApplied
		{
			type = "FragGrenade";
			class Health
			{
				damage = 50;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseHit
		{
			strength = 110;
			type = "shot";
		};
	};
	class Explosion_12x76_Devastator_Ammo: DefaultAmmo
	{
		indirectHit = 1;
		indirectHitRange = 2;
		indirectHitRangeMultiplier = 2;
		explosive = 1;
		caliber = 1;
		deflecting = 0;
		soundSetExplosion[] = {"GasCanister_Explosion_SoundSet","GasCanister_Explosion_Tail_SoundSet"};
		class DamageApplied
		{
			type = "FragGrenade";
			class Health
			{
				damage = 8;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseHit
		{
			strength = 80;
			type = "shot";
		};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_50bmg_E
	{
		name = "Bullet_50bmg_E";
	};
	class AType_Bullet_50bmg_ET
	{
		name = "Bullet_50bmg_ET";
	};
	class AType_Bullet_12x76_devastator
	{
		name = "Bullet_12x76_devastator";
	};
	class AType_Bullet_12x76_frag_12
	{
		name = "Bullet_12x76_frag_12";
	};
};
class CfgVehicles
{
	class FxRound;
	class FxCartridge;
	class FxCartridge_50BMG_E: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50BMG_E_SingleRound.p3d";
	};
	class FxRound_50BMG_ET: FxRound
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50BMG_ET_SingleRound.p3d";
	};
	class FxCartridge_50BMG_ET: FxCartridge
	{
		model = "\KR\weapons\kr_weaponpack\ammunition\bullets\50BMG_ET_SingleRound.p3d";
	};
	class FxCartridge_12x76_devastator: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_devastator.p3d";
	};
	class FxRound_12x76_devastator: FxRound
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_devastator.p3d";
	};
	class FxCartridge_12x76_frag_12: FxCartridge
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_frag_12.p3d";
	};
	class FxRound_12x76_frag_12: FxRound
	{
		model = "KR\weapons\kr_weaponpack\ammunition\bullets\shotgunshell_frag_12.p3d";
	};
	class ExplosionTest;
	class kr_explosion_base: ExplosionTest
	{
		scope = 2;
		model = "\DZ\data\lightpoint.p3d";
		ammoType = "Explosion_NonLethal";
	};
	class kr_explosion: kr_explosion_base{};
	class kr_explosion_frag_12: kr_explosion_base
	{
		ammoType = "KR_Explosion_Frag12";
	};
	class kr_explosion_devastator: kr_explosion_base
	{
		ammoType = "KR_Explosion_Devastator";
	};
};
