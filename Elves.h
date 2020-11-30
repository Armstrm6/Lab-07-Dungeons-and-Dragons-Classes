#include "IRace.h"
#pragma once


class Elves  : public IRace
{

public:
	Elves() : IRace(8, 0, 0, 3){}
    virtual ~Elves() {}
};