modded class PlayerBase
{
    override bool EEOnDamageCalculated(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
    {
        EntityAI m_vest = this.GetItemOnSlot("VEST");
        float m_vest_hp = -1.0;
        string m_vestpath;

        if (m_vest && damageType == DamageType.FIRE_ARM && dmgZone == "Torso")
        {
            string m_ammopath = "CfgAmmo " + ammo + " DamageApplied Health armorPenetration";
            m_vest_hp = m_vest.GetHealth();
            m_vestpath = "CfgVehicles " + m_vest.GetType() + " DamageSystem GlobalArmor Projectile Health damage";
        
            if (GetGame().ConfigIsExisting(m_vestpath) && GetGame().ConfigIsExisting(m_ammopath) && GetGame().ConfigGetFloat(m_vestpath) < 1.0)
            {
                float m_damage = damageResult.GetDamage(dmgZone, "Health");
                float m_bulletCoef = 1.0;

                if (GetGame().ConfigIsExisting(m_ammopath))
                {
                    m_bulletCoef = GetGame().ConfigGetFloat(m_ammopath);
                }

                if (m_vest.GetHealth01() > 0.0)
                {
                    DecreaseHealth( "","", m_damage*m_bulletCoef );
                }
                else
                {
                    return super.EEOnDamageCalculated(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);
                }
                
                return false;
            }
        }

        return super.EEOnDamageCalculated(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);
    }
}