#include "MIPhoneFactory.h"


MIPhoneFactory::MIPhoneFactory()
{
}


MIPhoneFactory::~MIPhoneFactory()
{
}

Phone* MIPhoneFactory::createPhone() {
	return new MIPhone();
}