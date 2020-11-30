#pragma once

#include "ICharacter.h"
#include "IRace.h"

class Wizard : public ICharacter{
    public:

    Wizard(IRace * race):ICharacter(race){
        m_HitBonus = m_HitBonus + 1;
        m_ArmorNumber = m_ArmorNumber + 0;
        m_InitiativeBonus = m_InitiativeBonus + 1;
        m_Hit = m_Hit + 5;
        m_damage = 2;
    }

    virtual ~Wizard(){}


    private:
        Wizard();

};
