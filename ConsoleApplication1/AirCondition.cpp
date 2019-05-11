#include "AirCondition.h"
#include <iostream>


AirCondition::AirCondition()
{
}


AirCondition::~AirCondition()
{
}

void AirCondition::powerOn()
{
	std::cout << "The aircondition is powered on." << std::endl;
}

void AirCondition::powerOff()
{
	std::cout << "The aircondition is powered off." << std::endl;
}

void AirCondition::switchToSummerMode()
{
	std::cout << "Set aircondition to summer-mode." << std::endl;
}

void AirCondition::switchToWinterMode()
{
	std::cout << "Set the aircondition to winter-mode." << std::endl;
}
