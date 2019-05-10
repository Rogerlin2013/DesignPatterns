#include "MIPhoneBuilder.h"
#include "PhoneProduct.h"
#include <string>


MIPhoneBuilder::MIPhoneBuilder()
{
}


MIPhoneBuilder::~MIPhoneBuilder()
{
}

void MIPhoneBuilder::createPhone()
{
	this->phoneProduct = new PhoneProduct();
}

void MIPhoneBuilder::buildCPU()
{
	std::string cpu("MICPU");
	this->phoneProduct->setCPU(cpu);
}

void MIPhoneBuilder::buildCapacity()
{
	std::string capacity("64G");
	this->phoneProduct->setCapacity(capacity);
}

void MIPhoneBuilder::buildDisplay()
{
	std::string display("6.3");
	this->phoneProduct->setDisplay(display);
}

PhoneProduct* MIPhoneBuilder::obtainPhone()
{
	return this->phoneProduct;
}
