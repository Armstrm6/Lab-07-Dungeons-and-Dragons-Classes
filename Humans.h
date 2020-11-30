#include "IRace.h"
#pragma once

class Humans:public IRace
{

public:
	Humans():IRace(10, 2, 2, 1){}
    virtual ~Humans() {}
};