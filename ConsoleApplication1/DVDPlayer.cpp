#include "DVDPlayer.h"
#include <iostream>


DVDPlayer::DVDPlayer()
{
}


DVDPlayer::~DVDPlayer()
{
}

void DVDPlayer::powerOn()
{
	std::cout << "The DVDPlayer is powered on." << std::endl;
}

void DVDPlayer::powerOff()
{
	std::cout << "The DVDPlayer is powered off." << std::endl;
}

void DVDPlayer::play()
{
	std::cout << "The DVD player is playing." << std::endl;
}
