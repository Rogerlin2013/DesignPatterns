#include "HWFactory.h"
#include "HWPad.h"
#include "phone.h"


HWFactory::HWFactory()
{
}


HWFactory::~HWFactory()
{
}

Pad* HWFactory::createPad() {
	return new HWPad();
}

Phone* HWFactory::createPhone() {
	return new HWPhone();
}