class CfgPatches
{
	class kr_attachments_gl
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","kr_data"};
	};
};

class Mode_Single;
class Mode_SemiAuto;
class Mode_kr_GL;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class kr_gl_Base: Rifle_Base
	{
		scope = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,10,170,4,10};
		WeaponLength = 0.7;
		ObstructionDistance = 0.523;
		barrelArmor = 1.875;
		initSpeedMultiplier = 1.0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_40mm_Explosive","Ammo_40mm_ChemGas","Ammo_40mm_Smoke_Red","Ammo_40mm_Smoke_Green","Ammo_40mm_Smoke_White","Ammo_40mm_Smoke_Black"};
		magazines[] = {};
		DisplayMagazine = 0;
		ejectType = 3;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
        inventorySlot[]+={"kr_gl"};

		class NoiseShoot
		{
			strength = 40;
			type = "shot";
		};

		modes[] = {"Single"};
		class Single: Mode_kr_GL
		{
			soundSetShot[] = {"M79_Shot_SoundSet","M79_Tail_SoundSet","M79_InteriorTail_SoundSet","M79_Slapback_SoundSet","M79_Tail_2D_SoundSet","M79_Shot_Interior_SoundSet"};
			soundSetShotExt[] = {{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorHomeMadeTail_SoundSet"}};
			envShootingDecrease = 0.05;
			reloadTime = 1;
			dispersion = 0.025;
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {75};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 75;
			distanceZoomMax = 75;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {-0.15,0.08,0.015};
				orientation[] = {0,0,-5};
			};
			class Melee
			{
				position[] = {-0.15,0.1,-0.03};
				orientation[] = {0,0,-5};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_mosin9130_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 0;
					positionOffset[] = {-0.03,0,0};
				};
			};
		};
		weaponStateAnim = "dz\anims\anm\player\reloads\M79\w_m79_states.anm";
		boneRemap[] = {"release","Weapon_Bone_02","barrel","Weapon_Bone_01","trigger","Weapon_Trigger","extractor","Weapon_Bone_03","bullet","Weapon_Bullet","charging","Weapon_Bone_04"};
	};
};