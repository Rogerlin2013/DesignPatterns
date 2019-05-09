#include "PhoneStore.h"
#include "SimplePhoneFactory.h"
#include "MIPhoneFactory.h"
#include "HWPhoneFactory.h"

#include "MIFactory.h"
#include "HWFactory.h"

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

	delete phone1;
	delete phone2;
}

void PhoneStore::sellPhoneFactoryMethod() {
	PhoneFactory* miPhoneFactory = new MIPhoneFactory();
	Phone* phone1 = miPhoneFactory->createPhone();
	phone1->makeCall();

	delete phone1;
	delete miPhoneFactory;

	PhoneFactory* hwPhoneFactory = new HWPhoneFactory();
	Phone* phone2 = hwPhoneFactory->createPhone();
	phone2->makeCall();

	delete phone2;
	delete hwPhoneFactory;
}

void PhoneStore::sellPhoneAbstractFactory() {
	BaseFactory* miFactory = new MIFactory();
	BaseFactory* hwFactory = new HWFactory();

	Phone* phone1 = miFactory->createPhone();
	phone1->makeCall();

	Phone* phone2 = hwFactory->createPhone();
	phone2->makeCall();

	delete phone1;
	delete phone2;
	delete miFactory;
	delete hwFactory;
}

void PhoneStore::playGameOnPad() {
	BaseFactory* miFactory = new MIFactory();
	BaseFactory* hwFactory = new HWFactory();

	Pad* pad1 = miFactory->createPad();
	pad1->playPadGame();

	Pad* pad2 = hwFactory->createPad();
	pad2->playPadGame();

	delete pad1;
	delete pad2;
	delete miFactory;
	delete hwFactory;
}