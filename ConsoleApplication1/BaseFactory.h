#pragma once

#include "Pad.h"
#include "phone.h"

class BaseFactory
{
public:
	BaseFactory();
	virtual ~BaseFactory();

	virtual Phone* createPhone() = 0;
	virtual Pad* createPad() = 0;
};

