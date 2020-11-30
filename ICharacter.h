#pragma once
#include "IRace.h"

class ICharacter
{
public:

    ICharacter(IRace* race) :  m_ArmorNumber(0), m_HitBonus(0), m_race(race), m_InitiativeBonus(0)
    {
		m_Hit = 6 + race->GetHitPointMod();
    }

	bool isAlive()
	{
		if(this->GetHitPoints() <= 0){
            return false;
        }
		return true;
	}

	int getInit(){
		return m_InitiativeBonus;
	}

	int GetHitPoints()
	{
		return m_Hit;
	}
	
	int getArmor()
	{
		return m_ArmorNumber;
	}

	int getDamage()
	{
		return m_damage;
	}

	void setHealth(int damage)
	{
		m_Hit = m_Hit - damage;
	}
	void addHealth(int heals)
	{
		m_Hit = m_Hit + heals;
	}
	void setParty(int partyNum)
	{
		m_party = partyNum;
	}
	int getParty(){
		return m_party;
	}
    virtual ~ICharacter() {}

protected:
	int m_Hit;
	int m_ArmorNumber;
	int m_HitBonus;
	int m_InitiativeBonus;
	int m_damage;
	int m_party;
	IRace* m_race;

};