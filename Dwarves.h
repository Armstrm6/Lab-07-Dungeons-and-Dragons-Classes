#include "IRace.h"
#pragma once


class Dwarves  : public IRace
{

public:
	Dwarves() : IRace(10, 3, 1, -1){}
    virtual ~Dwarves() {}
};