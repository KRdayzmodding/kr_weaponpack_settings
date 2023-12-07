class CfgPatches
{
	class DZ_Weapons_Firearms_VSS_fix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Firearms_VSS"};
	};
};
class cfgWeapons
{
	class Rifle_Base;
	class VSS_Base: Rifle_Base
	{
		magazines[] += {"Mag_9x39_6l24_10Rnd","Mag_9x39_6l25_20Rnd","Mag_9x39_sr3m_30Rnd"};
	};
	class ASVAL: VSS_Base
	{
		magazines[] += {"Mag_9x39_6l24_10Rnd","Mag_9x39_6l25_20Rnd","Mag_9x39_sr3m_30Rnd"};
	};
};
