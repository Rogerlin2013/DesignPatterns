#include "Director.h"



Director::Director()
{
	this->phoneBuilder = nullptr;
}


Director::~Director()
{
}

void Director::constructPhoneWithBuilder(PhoneBuilder* builder)
{
	this->phoneBuilder = builder;

	builder->createPhone();
	builder->buildCPU();
	builder->buildCapacity();
	builder->buildDisplay();
}

PhoneProduct* Director::obtainPhoneProduct()
{
	if (this->phoneBuilder) {
		return this->phoneBuilder->obtainPhone();
	}
	return nullptr;
}
