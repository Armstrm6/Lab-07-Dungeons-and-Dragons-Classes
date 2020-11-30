#include <iostream>
#include <stack>
#include <random>
#include <time.h>
#include "IRace.h"
#include "PartyForming.h"
#include "CharacterFactory.h"
#include "ICharacter.h"
#include "PartyAttack.h"
#include "Fighter.h"
#include "Cleric.h"
#include "Wizard.h"
#include "Rouge.h"


void attackAction(ICharacter* attacker, ICharacter* defender);
void healAction(ICharacter* healer, ICharacter* toBeHealed);
int diceRoll();
bool checkLine(std::vector<ICharacter*> line, ICharacter* charToBeFound);



void PartyAttack::Attack()
{
    int teamWinner = 0;
    Party<ICharacter*> Party1Access = this->getFirstParty();
    Party<ICharacter*> Party2Access = this->getSecondParty();
    std::vector<ICharacter*>  lineAccess;
    ICharacter* attacker = nullptr;
    ICharacter* defender = nullptr;
    std::vector<ICharacter*> turnOrder;
    int randint;
    turnOrder = this->determineOrderOfCharacters();
    while(!m_done)
    {
        for(auto turn = turnOrder.begin(); turn < turnOrder.end(); turn++)
        {
            ICharacter *player = *turn;

            if(player->isAlive())
            {
                if(typeid(player) != typeid(Cleric)){
                    if(player->getParty() == 1){
                        if(typeid(player) == typeid(Rouge)){
                            if(rand()% 50 + 1 > 50){
                                lineAccess = Party2Access->getFrontLine();
                            }else{
                                lineAccess = Party2Access->getBackLine();
                            }
                            randint = rand()%2;
                            defender = lineAccess.at(randint);
                            attackAction(player, defender);
                        }
                        if((rand()% 2 +1) == 1){
                            
                        }
                    }
                    //check to see if they are in line
                    //if they are, check to see if alive
                    //call attackAction()
                    //if they aren't, skip to next turn
                }
            }
        }
        //after all turns are done, we see if one party is alive or not. then set m_done along with who the party winner is+
    }


    this->printWinner(teamWinner);
    
}


Party<ICharacter*> PartyAttack::getFirstParty(){
    return * m_firstParty;
}

Party<ICharacter*> PartyAttack::getSecondParty(){
    return * m_secondParty;
}

//this function is only meant to sort a single vector

void sortingFunct(std::vector<ICharacter*> temp){
    ICharacter * tempChar1;
    ICharacter * tempChar2;
    ICharacter * tempChar3;

    tempChar1 = temp.at(0);
    tempChar2 = temp.at(1);

    int tempVal1 = tempChar1->getInit();
    int tempVal2 = tempChar2->getInit();


    if(tempVal1 > tempVal2){

    }else{
        tempChar3 = tempChar1;
        tempChar1 = tempChar2;
        tempChar2 = tempChar3;
    }

    temp.at(0) = tempChar1;
    temp.at(1) = tempChar2;
}

void sortFour(ICharacter* temp1, ICharacter* temp2, ICharacter* temp3, ICharacter* temp4, std::vector<ICharacter*> retVect){
    int max = temp1->getInit();
    if(max >= temp2->getInit()){ //max here is temp 1
        if(max >= temp3->getInit()){
            if(max >= temp4->getInit()){
                retVect.push_back(temp1);
                max = temp2->getInit();
                if(max >= temp3->getInit()){
                    if(max >= temp4->getInit()){ //max here is temp2
                        retVect.push_back(temp2);
                        retVect.push_back(temp3);
                        retVect.push_back(temp4);
                    }else{
                        retVect.push_back(temp4);
                        retVect.push_back(temp2);
                        retVect.push_back(temp3);
                    }
                }else{
                    retVect.push_back(temp3);
                    if(max >= temp4->getInit()){
                        retVect.push_back(temp2);
                        retVect.push_back(temp4);
                    }else{
                        retVect.push_back(temp4);
                        retVect.push_back(temp2);
                    }
                }
            }else{
              retVect.push_back(temp4);
              retVect.push_back(temp1);
              if(temp2->getInit() >= temp3->getInit()){
                    retVect.push_back(temp2);
                    retVect.push_back(temp3);
                }else{
                    retVect.push_back(temp3);
                    retVect.push_back(temp2);
                }  
            }
        }else{
            max = temp3->getInit();
            if(max >= temp4->getInit()){
                retVect.push_back(temp3);
                if(temp1->getInit() >= temp4->getInit()){
                    retVect.push_back(temp1);
                    if(temp2->getInit() >= temp4->getInit()){
                        retVect.push_back(temp2);
                        retVect.push_back(temp4);
                    }else{
                        retVect.push_back(temp4);
                        retVect.push_back(temp2);
                    }
                }else{
                    retVect.push_back(temp4);
                    retVect.push_back(temp1);
                    retVect.push_back(temp2);
                }
            }else{
                retVect.push_back(temp4);
                retVect.push_back(temp3);
                retVect.push_back(temp1);
                retVect.push_back(temp2);
            }
        }
    }else{
        max = temp2->getInit();
        if(max >= temp3->getInit()){
            if(max >= temp4->getInit()){
                retVect.push_back(temp2);
                max = temp1->getInit();
                if(max >= temp3->getInit()){
                    if(max >= temp4->getInit()){
                        retVect.push_back(temp1);
                        if(temp3->getInit() >= temp4->getInit()){
                            retVect.push_back(temp3);
                            retVect.push_back(temp4);
                        }else{
                            retVect.push_back(temp4);
                            retVect.push_back(temp3);
                        }
                    }else{
                        retVect.push_back(temp4);
                        retVect.push_back(temp1);
                        retVect.push_back(temp3);
                    }
                }else{
                    if(temp3->getInit() >= temp4->getInit()){
                        retVect.push_back(temp3);
                        if(temp1->getInit() >= temp4->getInit()){
                            retVect.push_back(temp1);
                            retVect.push_back(temp4);
                        }else{
                            retVect.push_back(temp4);
                            retVect.push_back(temp1);
                        }
                    }else{
                        retVect.push_back(temp4);
                        retVect.push_back(temp3);
                        retVect.push_back(temp1);
                    }
                }
            }else{
                retVect.push_back(temp4);
                retVect.push_back(temp3);
                retVect.push_back(temp1);
            }
        }else{
            retVect.push_back(temp4);
            retVect.push_back(temp3);
            retVect.push_back(temp2);
            retVect.push_back(temp1);
        }
    }
}


std::vector<ICharacter*>  PartyAttack::determineOrderOfCharacters()
{
    std::vector<ICharacter*>  retVal;
    Party<ICharacter*> * tempParty1;
    Party<ICharacter*> * tempParty2;

    *tempParty1 = this->getFirstParty();
    *tempParty2 = this->getSecondParty();

    std::vector<ICharacter*>  temp1Front = tempParty1->getFrontLine();
    std::vector<ICharacter*>  temp2Front = tempParty2->getFrontLine();
    std::vector<ICharacter*>  temp1Back = tempParty1->getBackLine();
    std::vector<ICharacter*>  temp2Back = tempParty2->getBackLine();
    
    sortingFunct(temp1Front);
    sortingFunct(temp2Front);
    sortingFunct(temp1Back);
    sortingFunct(temp2Back);

    ICharacter* tempChar1 = temp1Front.at(0);
    ICharacter* tempChar2 = temp2Front.at(0);
    ICharacter* tempChar3 = temp1Back.at(0);
    ICharacter* tempChar4 = temp2Back.at(0);


    sortFour(tempChar1, tempChar2, tempChar3, tempChar4, retVal);

    tempChar1 = temp1Front.at(1);
    tempChar2 = temp2Front.at(1);
    tempChar3 = temp1Back.at(1);
    tempChar4 = temp2Back.at(1);
    
    sortFour(tempChar1, tempChar2, tempChar3, tempChar4, retVal);

    return retVal;
}

void PartyAttack::printWinner(int winner)
{
    if(winner == 1){
        std::cout << "Party 1 are the winners!" << std::endl;
    }else if(winner == 2){
        std::cout << "Party 2 are the winners!" << std::endl;
    }else{
        throw "NO WINNER ERROR.";
    }

}

int diceRoll(){
    srand(time(NULL));
    return rand()%20 + 1;
}

void attackAction(ICharacter* attacker, ICharacter* defender){
    int attackRoll = diceRoll() + attacker->getDamage();
    int defendArmor = defender->getArmor() + 10;
    int damage;
    if(((attackRoll - attacker->getDamage()) != 20) && ((attackRoll - attacker->getDamage()) != 1))
    {
        if(attackRoll > defendArmor)
        {
            defender->setHealth(attacker->getDamage());
        }
    }
    else if((attackRoll - attacker->getDamage()) == 20)
    {
        damage = attacker->getDamage();
        damage = damage * 2;
        defender->setHealth(damage);
    }
    else if((attackRoll - attacker->getDamage()) == 1)
    {
        damage = defender->getDamage();
        attacker->setHealth(damage);
    }
}
void healAction(ICharacter* healer, ICharacter* toBeHealed){

}
bool checkLine(std::vector<ICharacter*> line, ICharacter* charToBeFound){
    ICharacter* inLine = nullptr;
    bool val;
    int i = 0;
    for(auto pos = line.begin(); pos < line.end(); pos++)
    {
        inLine = line.at(i);
        if(inLine == charToBeFound)
        {
            val = true;
        }else{
            val = false;
        }
        i++;
    }
    return val;
}

int main()
{
	CharacterFactory factoryClass;


	ICharacter * val = factoryClass.CreateCharacter(CharacterFactory::FighterClass, CharacterFactory::HumansRace);
    val->setParty(1);
	Fighter* fighter = dynamic_cast<Fighter*>(val);

    val = factoryClass.CreateCharacter(CharacterFactory::ClericClass, CharacterFactory::HumansRace);
    val->setParty(1);
    Cleric* cleric = dynamic_cast<Cleric*>(val);

    val = factoryClass.CreateCharacter(CharacterFactory::WizardClass, CharacterFactory::ElvesRace);
    val->setParty(1);
    Wizard* wizard = dynamic_cast<Wizard*>(val);

    val = factoryClass.CreateCharacter(CharacterFactory::ClericClass, CharacterFactory::HumansRace);
    val->setParty(1);
    Rouge* rouge = dynamic_cast<Rouge*>(val);

    Party<ICharacter*> *party1;

    party1->addFrontLine(fighter);
    party1->addFrontLine(rouge);
    party1->addBackLine(cleric);
    party1->addBackLine(wizard);

    Party<ICharacter*> *party2;

    val = factoryClass.CreateCharacter(CharacterFactory::WizardClass, CharacterFactory::DwarvesRace);
    val->setParty(2);
    Wizard* wizardBad = dynamic_cast<Wizard*>(val);

    val = factoryClass.CreateCharacter(CharacterFactory::ClericClass, CharacterFactory::ElvesRace);
    val->setParty(2);
    Cleric* clericBad = dynamic_cast<Cleric*>(val);

    val = factoryClass.CreateCharacter(CharacterFactory::FighterClass, CharacterFactory::DwarvesRace);
    val->setParty(2);
    Fighter* fighterBad = dynamic_cast<Fighter*>(val);

    val = factoryClass.CreateCharacter(CharacterFactory::RougeClass, CharacterFactory::HalflingsRace);
    val->setParty(2);
    Rouge* rougeBad = dynamic_cast<Rouge*>(val);

    party2->addFrontLine(wizardBad);
    party2->addFrontLine(fighterBad);
    party2->addBackLine(clericBad);
    party2->addBackLine(rougeBad);



    PartyAttack gameStart(party1,party2);
    gameStart.Attack();

    std::cout << "Hello World!\n";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
