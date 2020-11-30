#include "IRace.h"
#pragma once


class Halflings  : public IRace
{

public:
	Halflings() : IRace(6, 3, 0, 5){}
    virtual ~Halflings() {}
};