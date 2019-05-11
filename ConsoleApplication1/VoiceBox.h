#pragma once
#include "IElectricDevice.h"

class DVDPlayer;

class VoiceBox :
	public IElectricDevice
{
public:
	VoiceBox();
	~VoiceBox();

	void powerOn() override;
	void powerOff() override;
	void connectToDVDPlayer(DVDPlayer* player);
	void disconnectDVDPlayer(DVDPlayer* player);
};

