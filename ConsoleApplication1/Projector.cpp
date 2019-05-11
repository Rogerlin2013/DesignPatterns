#include "Projector.h"
#include <iostream>


Projector::Projector()
{
}


Projector::~Projector()
{
}

void Projector::powerOn()
{
	std::cout << "The projector is powered on." << std::endl;
}

void Projector::powerOff()
{
	std::cout << "The projector is powered off." << std::endl;
}

void Projector::connectDVDPlayer(DVDPlayer* player)
{
	std::cout << "The projector is connected to the DVD player." << std::endl;
}

void Projector::disconnectDVDPlayer(DVDPlayer* player)
{
	std::cout << "The projector is disconnected with the DVD player." << std::endl;
}
