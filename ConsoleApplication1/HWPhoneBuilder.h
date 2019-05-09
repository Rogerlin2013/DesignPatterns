#pragma once
#include "PhoneBuilder.h"
class HWPhoneBuilder :
	public PhoneBuilder
{
public:
	HWPhoneBuilder();
	~HWPhoneBuilder();

	void createPhone() override;
	void buildCPU() override;
	void buildCapacity() override;
	void buildDisplay() override;
	PhoneProduct* obtainPhone() override;
};

