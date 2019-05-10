#pragma once
#include "PhoneBuilder.h"
class MIPhoneBuilder :
	public PhoneBuilder
{
public:
	MIPhoneBuilder();
	~MIPhoneBuilder();

	void createPhone() override;
	void buildCPU() override;
	void buildCapacity() override;
	void buildDisplay() override;
	PhoneProduct* obtainPhone() override;
};

