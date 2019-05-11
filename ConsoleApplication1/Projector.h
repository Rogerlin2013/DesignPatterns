#pragma once
#include "IElectricDevice.h"
#include "DVDPlayer.h"

class Projector :
	public IElectricDevice
{
public:
	Projector();
	~Projector();

	void powerOn() override;
	void powerOff() override;
	void connectDVDPlayer(DVDPlayer* player);
	void disconnectDVDPlayer(DVDPlayer* player);
};

