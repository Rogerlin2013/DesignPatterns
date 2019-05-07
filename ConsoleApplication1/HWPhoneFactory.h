#pragma once
#include "PhoneFactory.h"
class HWPhoneFactory :
	public PhoneFactory
{
public:
	HWPhoneFactory();
	virtual ~HWPhoneFactory();

	virtual Phone* createPhone();
};

