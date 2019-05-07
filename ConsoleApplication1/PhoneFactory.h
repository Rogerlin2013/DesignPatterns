#pragma once

#include "phone.h"

class PhoneFactory
{
public:
	PhoneFactory();
	virtual ~PhoneFactory();

	virtual Phone* createPhone() = 0;
};

