#pragma once

#include <string>
#include "phone.h"

class PhoneFactory {
public:
	static Phone* createPhoneByTag(std::string& tag);
};