#pragma once

class PhoneProduct;

class PhoneBuilder
{
public:
	PhoneBuilder();
	virtual ~PhoneBuilder();

	virtual void createPhone() = 0;
	virtual void buildCPU() = 0;
	virtual void buildCapacity() = 0;
	virtual void buildDisplay() = 0;

	virtual PhoneProduct* obtainPhone() = 0;
protected:
	PhoneProduct* phoneProduct;
};

