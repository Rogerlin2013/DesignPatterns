#pragma once

#include "PhoneFactory.h"

class MIPhoneFactory : public PhoneFactory
{
public:
	MIPhoneFactory();
	virtual ~MIPhoneFactory();

	virtual Phone* createPhone();
};

