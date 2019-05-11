#pragma once
#include "IElectricDevice.h"
class AirCondition :
	public IElectricDevice
{
public:
	AirCondition();
	~AirCondition();

	void powerOn() override;
	void powerOff() override;
	void switchToSummerMode();
	void switchToWinterMode();
};

