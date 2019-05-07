#include "PhoneStore.h"
#include "SimplePhoneFactory.h"
#include "MIPhoneFactory.h"
#include "HWPhoneFactory.h"

PhoneStore::PhoneStore()
{
}


PhoneStore::~PhoneStore()
{
}

void PhoneStore::sellPhone() {
	auto HWTag = std::string("HW");
	auto MITag = std::string("MI");
	Phone* phone1 = SimplePhoneFactory::createPhoneByTag(HWTag);
	Phone* phone2 = SimplePhoneFactory::createPhoneByTag(MITag);
	phone1->makeCall();
	phone2->makeCall();
}

void PhoneStore::sellPhoneFactoryMethod() {
	PhoneFactory* miPhoneFactory = new MIPhoneFactory();
	Phone* phone1 = miPhoneFactory->createPhone();
	phone1->makeCall();

	PhoneFactory* hwPhoneFactory = new HWPhoneFactory();
	Phone* phone2 = hwPhoneFactory->createPhone();
	phone2->makeCall();
}