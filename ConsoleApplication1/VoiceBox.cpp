#include "VoiceBox.h"
#include <iostream>


VoiceBox::VoiceBox()
{
}


VoiceBox::~VoiceBox()
{
}

void VoiceBox::powerOn()
{
	std::cout << "The voice box is powered on." << std::endl;
}

void VoiceBox::powerOff()
{
	std::cout << "The voice box is powered off." << std::endl;
}

void VoiceBox::connectToDVDPlayer(DVDPlayer *player)
{
	std::cout << "The voice box is connected to the DVD player." << std::endl;
}

void VoiceBox::disconnectDVDPlayer(DVDPlayer* player)
{
	std::cout << "The voice box is disconnected to the DVD player." << std::endl;
}
