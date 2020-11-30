#include "CharacterFactory.h"

#include "Fighter.h" //classes
#include "Cleric.h"
#include "Rouge.h"
#include "Wizard.h"

#include "Humans.h" //races
#include "Elves.h"
#include "Dwarves.h"
#include "Halflings.h"

#include "PartyForming.h"


CharacterFactory::CharacterFactory(){
   m_dwarf = new Dwarves();
   m_elf = new Elves();
   m_halfling = new Halflings();
   m_human = new Humans();
}

IRace * CharacterFactory::getRace(RaceType RaceToRetrieve){
    switch(RaceToRetrieve){
        case CharacterFactory::DwarvesRace:
            return m_dwarf;
            break;
        case CharacterFactory::ElvesRace:
            return m_elf;
            break;
        case CharacterFactory::HalflingsRace:
            return m_halfling;
            break;
        case CharacterFactory::HumansRace:
            return m_human;
            break;
        default:
            throw "RACE NOT FOUND.";
    }
}

ICharacter * CharacterFactory::CreateCharacter(ClassType classSelection, RaceType race){
   IRace * reference = getRace(race);
   ICharacter * returnVal = nullptr;

   if(classSelection == ClericClass){
       returnVal = new Cleric(reference);
   }else if(classSelection == FighterClass){
       returnVal = new Fighter(reference);
   }else if(classSelection == RougeClass){
       returnVal = new Rouge(reference);
   }else if(classSelection == WizardClass){
       returnVal = new Wizard(reference);
   }

   return returnVal;
}