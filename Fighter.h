#pragma once
#include "ICharacter.h"
#include "IRace.h"

class Fighter : public ICharacter {
public:
    Fighter(IRace* race) : ICharacter(race)
    {
        m_HitBonus = m_HitBonus + 10;
        m_ArmorNumber = m_ArmorNumber + 5;
        m_InitiativeBonus = m_InitiativeBonus + 3;
        m_Hit = m_Hit + 10;
        m_damage = 3;
    }
    virtual ~Fighter(){}


private:
    Fighter();
};