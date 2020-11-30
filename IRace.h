#pragma once
class IRace
{
public:
	IRace(int HitPointMod, int  ArmorClassMod, int  HitBonusMod, int InitiativeMod){
        m_HitPointMod = HitPointMod;
		m_ArmorClassMod = ArmorClassMod;
		m_HitBonusMod = HitBonusMod;
        m_InitiativeMod =InitiativeMod;
	}

	virtual int GetHitPointMod() { return m_HitPointMod; }
	virtual int GetArmorClassMod() { return m_ArmorClassMod; }
	virtual int GetHitBonusMod() { return m_HitBonusMod; }
    virtual int GetInitiativeMod() { return m_InitiativeMod; }

    ~IRace(){}
protected:
	int m_HitPointMod;
	int m_ArmorClassMod;
	int m_HitBonusMod;
    int m_InitiativeMod;
};

