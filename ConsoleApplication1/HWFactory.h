#pragma once
#include "BaseFactory.h"
class HWFactory :
	public BaseFactory
{
public:
	HWFactory();
	virtual ~HWFactory();

	virtual Pad* createPad();
	virtual Phone* createPhone();
};

