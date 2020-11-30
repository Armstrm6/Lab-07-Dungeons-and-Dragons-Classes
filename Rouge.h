#pragma once
#include "ICharacter.h"
#include "IRace.h"

class Rouge : public ICharacter {
public:
    Rouge(IRace* race) : ICharacter(race)
    {
        m_HitBonus = m_HitBonus + 1;
        m_ArmorNumber = m_ArmorNumber + 3;
        m_InitiativeBonus = m_InitiativeBonus + 3;
        m_Hit = m_Hit + 2;
        m_damage = 5;
    }
    virtual ~Rouge()
    {

    }


private:
    Rouge();
};
