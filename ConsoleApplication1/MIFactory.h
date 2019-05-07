#pragma once
#include "BaseFactory.h"
class MIFactory :
	public BaseFactory
{
public:
	MIFactory();
	virtual ~MIFactory();

	virtual Pad* createPad();
	virtual Phone* createPhone();
};

