#pragma once
#include <vector>
#include "ICharacter.h"

template<class ItemType>

class Party
{
private:
   std::vector<ItemType> m_FrontLine;
   std::vector<ItemType> m_BackLine;
   Party(const ItemType& theItem);
   Party();
public:
    void addFrontLine(const ItemType& toBeAdded);
    std::vector<ItemType> getFrontLine();
    void addBackLine(const ItemType& toBeAdded);
    std::vector<ItemType> getBackLine();
    virtual ~Party(){}
};


template<class ItemType>
Party<ItemType>::Party(const ItemType& theItem){} 


template<class ItemType>
void Party<ItemType>::addFrontLine(const ItemType& toBeAdded)
{ 
    m_FrontLine.push_back(toBeAdded);
}
template<class ItemType>
std::vector<ItemType> Party<ItemType>::getFrontLine()
{
    return m_FrontLine;
}

template<class ItemType>
void Party<ItemType>::addBackLine(const ItemType& toBeAdded)
{ 
    m_BackLine.push_back(toBeAdded);
}
template<class ItemType>
std::vector<ItemType> Party<ItemType>::getBackLine()
{
    return m_BackLine;
}