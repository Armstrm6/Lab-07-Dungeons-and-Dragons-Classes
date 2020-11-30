#pragma once

#include "IRace.h"
#include "ICharacter.h"


class Dwarves;
class Elves;
class Halflings;
class Humans;


class CharacterFactory{
public:

        
        enum ClassType {ClericClass, FighterClass, RougeClass, WizardClass};
        enum RaceType {DwarvesRace, ElvesRace, HalflingsRace, HumansRace};

        CharacterFactory();

        ICharacter * CreateCharacter(ClassType classSelection, RaceType race);

    virtual ~CharacterFactory(){}
    
private:

    IRace* getRace(RaceType RaceToRetrieve);


    Dwarves *m_dwarf;
    Elves *m_elf;
    Halflings *m_halfling;
    Humans *m_human;

};