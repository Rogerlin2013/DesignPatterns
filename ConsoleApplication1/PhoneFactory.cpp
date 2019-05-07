#include "PhoneFactory.h"

Phone* PhoneFactory::createPhoneByTag(std::string& tag) {
	Phone* newPhone = nullptr;

	if (std::string("MI") == tag) {
		newPhone = new MIPhone();
	}
	else if (std::string("HW") == tag) {
		newPhone = new HWPhone();
	}

	return newPhone;
}