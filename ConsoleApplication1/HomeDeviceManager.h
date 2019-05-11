#include <vector>

class IElectricDevice;
class AirCondition;
class DVDPlayer;
class Projector;
class VoiceBox;

#pragma once
class HomeDeviceManager
{
public:
	HomeDeviceManager();
	~HomeDeviceManager();

	// aircondition
	void coolWind();
	void warmWind();

	void playMovie();
	void offMovie();

	void allDeviceOn();
	void allDeviceOff();

private:
	AirCondition* mAircondition = nullptr;
	DVDPlayer* mDVDPlayer = nullptr;
	Projector* mProjector = nullptr;
	VoiceBox* mVoiceBox = nullptr;

	std::vector<IElectricDevice*> *mAllDevice;
};

