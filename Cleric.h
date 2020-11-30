#pragma once
#include "ICharacter.h"
#include "IRace.h"

class Cleric : public ICharacter {
public:
    Cleric(IRace* race) : ICharacter(race)
    {
        m_HitBonus = m_HitBonus + 1;
        m_ArmorNumber = m_ArmorNumber + 0;
        m_InitiativeBonus = m_InitiativeBonus + 1;
        m_Hit = m_Hit + 5;
        m_damage = 4; //note while is called damage, it'll be used for a heal value instead.
    }
    virtual ~Cleric(){}


private:
    Cleric();

};