#include "HWPhoneBuilder.h"
#include "PhoneProduct.h"


HWPhoneBuilder::HWPhoneBuilder()
{
}


HWPhoneBuilder::~HWPhoneBuilder()
{
}

void HWPhoneBuilder::createPhone()
{
	this->phoneProduct = new PhoneProduct();
}

void HWPhoneBuilder::buildCPU()
{
	std::string hwCPU = "HWCPU";
	this->phoneProduct->setCPU(hwCPU);
}

void HWPhoneBuilder::buildCapacity()
{
	std::string capacity = "128G";
	this->phoneProduct->setCapacity(capacity);
}

void HWPhoneBuilder::buildDisplay()
{
	std::string display = "5.5";
	this->phoneProduct->setDisplay(display);
}

PhoneProduct* HWPhoneBuilder::obtainPhone()
{
	return this->phoneProduct;
}

