#pragma once

#include "PartyForming.h"

class PartyAttack
{
public:
	PartyAttack(Party<ICharacter*> *firstParty, Party<ICharacter*> * secondParty) 
    {
        m_done = false;
        m_firstParty = firstParty;
        m_secondParty = secondParty;
    }

    void Attack();
    Party<ICharacter*> getFirstParty();
    Party<ICharacter*> getSecondParty();
    std::vector<ICharacter*>  determineOrderOfCharacters();
    ~PartyAttack() {}
protected:
    void printWinner(int winner);
    bool m_done;
    Party<ICharacter*>  * m_firstParty;
    Party<ICharacter*>  * m_secondParty;
    int winner = 0;
};

