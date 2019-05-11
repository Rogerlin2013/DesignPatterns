#include "HomeDeviceManager.h"
#include "AirCondition.h"
#include "DVDPlayer.h"
#include "Projector.h"
#include "VoiceBox.h"
#include "IElectricDevice.h"


HomeDeviceManager::HomeDeviceManager(): mAircondition {new AirCondition()},
mDVDPlayer {new DVDPlayer()}, mVoiceBox {new VoiceBox()}, mProjector { new Projector() }
{
	this->mAllDevice = new std::vector<IElectricDevice*>();

	this->mAllDevice->push_back(this->mAircondition);
	this->mAllDevice->push_back(this->mDVDPlayer);
	this->mAllDevice->push_back(this->mVoiceBox);
	this->mAllDevice->push_back(this->mProjector);
}


HomeDeviceManager::~HomeDeviceManager()
{
	std::vector<IElectricDevice*>::iterator it = this->mAllDevice->begin();
	while (it != this->mAllDevice->end()) {
		delete *it;
		it++;
	}

	delete this->mAllDevice;
}

void HomeDeviceManager::coolWind()
{
	this->mAircondition->powerOn();
	this->mAircondition->switchToSummerMode();
}

void HomeDeviceManager::warmWind()
{
	this->mAircondition->powerOff();
	this->mAircondition->switchToWinterMode();
}

void HomeDeviceManager::playMovie()
{
	this->mVoiceBox->connectToDVDPlayer(this->mDVDPlayer);
	this->mProjector->connectDVDPlayer(this->mDVDPlayer);
	this->mVoiceBox->powerOn();
	this->mProjector->powerOn();
	this->mDVDPlayer->powerOn();
	this->mDVDPlayer->play();
}

void HomeDeviceManager::offMovie()
{
	this->mDVDPlayer->powerOff();
	this->mVoiceBox->powerOff();
	this->mProjector->powerOff();
	this->mVoiceBox->disconnectDVDPlayer(this->mDVDPlayer);
	this->mProjector->disconnectDVDPlayer(this->mDVDPlayer);
}

void HomeDeviceManager::allDeviceOn()
{
	std::vector<IElectricDevice*>::iterator it = this->mAllDevice->begin();
	while (it != this->mAllDevice->end()) {
		(*it)->powerOn();
		it++;
	}
}

void HomeDeviceManager::allDeviceOff()
{
	std::vector<IElectricDevice*>::iterator it = this->mAllDevice->begin();
	while (it != this->mAllDevice->end()) {
		(*it)->powerOff();
		it++;
	}
}
