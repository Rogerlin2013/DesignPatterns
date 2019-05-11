#pragma once
class IElectricDevice
{
public:
	IElectricDevice();
	virtual ~IElectricDevice();

	virtual void powerOn() = 0;
	virtual void powerOff() = 0;
};

