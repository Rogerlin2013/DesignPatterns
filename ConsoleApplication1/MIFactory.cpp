#include "MIFactory.h"
#include "MIPad.h"
#include "phone.h"

MIFactory::MIFactory()
{
}


MIFactory::~MIFactory()
{
}

Pad* MIFactory::createPad() {
	return new MIPad();
}

Phone* MIFactory::createPhone() {
	return new MIPhone();
}