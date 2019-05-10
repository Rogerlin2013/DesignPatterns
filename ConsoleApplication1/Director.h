#pragma once
#include "PhoneBuilder.h"

class Director
{
public:
	Director();
	~Director();

	void constructPhoneWithBuilder(PhoneBuilder* builder);

	PhoneProduct* obtainPhoneProduct();
private:
	PhoneBuilder* phoneBuilder;
};

