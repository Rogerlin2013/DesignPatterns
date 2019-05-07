#include "PhoneStore.h"
#include "PhoneFactory.h"

PhoneStore::PhoneStore()
{
}


PhoneStore::~PhoneStore()
{
}

void PhoneStore::sellPhone() {
	auto HWTag = std::string("HW");
	auto MITag = std::string("MI");
	Phone* phone1 = PhoneFactory::createPhoneByTag(HWTag);
	Phone* phone2 = PhoneFactory::createPhoneByTag(MITag);
	phone1->makeCall();
	phone2->makeCall();
}