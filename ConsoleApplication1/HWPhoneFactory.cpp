#include "HWPhoneFactory.h"



HWPhoneFactory::HWPhoneFactory()
{
}


HWPhoneFactory::~HWPhoneFactory()
{
}

Phone* HWPhoneFactory::createPhone() {
	return new HWPhone();
}