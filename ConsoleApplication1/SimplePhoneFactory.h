#pragma once

#include <string>
#include "phone.h"

class SimplePhoneFactory {
public:
	static Phone* createPhoneByTag(std::string& tag);
};