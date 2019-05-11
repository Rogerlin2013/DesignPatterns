#pragma once
#include "IElectricDevice.h"
class DVDPlayer :
	public IElectricDevice
{
public:
	DVDPlayer();
	~DVDPlayer();

	void powerOn() override;
	void powerOff() override;
	void play();
};

