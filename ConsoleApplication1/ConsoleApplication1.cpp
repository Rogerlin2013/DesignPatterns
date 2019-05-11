// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "PhoneStore.h"
#include "LogManager.h"
#include "Director.h"
#include "HWPhoneBuilder.h"
#include "MIPhoneBuilder.h"
#include "PhoneProduct.h"
#include "PrototypeProduct1.h"
#include "HomeDeviceManager.h"
#include <iostream>

void useSingletonLogger();
void createPhoneWithBuilder();
void createProductWithPrototype();
void useHomeDeviceWithFacade();

int main()
{
	/*PhoneStore::sellPhoneAbstractFactory();
	PhoneStore::playGameOnPad();*/
	//useSingletonLogger();
	//createPhoneWithBuilder();
	//createProductWithPrototype();
	useHomeDeviceWithFacade();
}

void useSingletonLogger() {
	LogManager::init();

	std::string info("fjjjj");
	LogManager::sharedInstance()->log(info);

	/*LogManager newLogger(*LogManager::sharedInstance());

	newLogger.log(info);

	LogManager logger2;
	logger2 = newLogger;
	logger2.log(info);*/
}

void createPhoneWithBuilder() {
	Director* director = new Director();
	PhoneBuilder* phoneBuilder = new HWPhoneBuilder();
	director->constructPhoneWithBuilder(phoneBuilder);
	PhoneProduct* phone = director->obtainPhoneProduct();

	std::cout << *phone << std::endl;

	PhoneBuilder* miPhoneBuilder = new MIPhoneBuilder();
	director->constructPhoneWithBuilder(miPhoneBuilder);
	PhoneProduct* miPhone = director->obtainPhoneProduct();

	std::cout << *miPhone << std::endl;

	delete phone;
	delete miPhone;
	delete miPhoneBuilder;
	delete phoneBuilder;
	delete director;
}

void createProductWithPrototype() {
	IPrototype* prototype = new PrototypeProduct1();
	IPrototype* newProduct = prototype->clone();

	PrototypeProduct1* product = dynamic_cast<PrototypeProduct1*>(newProduct);
	if (product != nullptr) {
		std::cout << (*product) << std::endl;
	}
}

void useHomeDeviceWithFacade() {
	HomeDeviceManager* deviceManager = new HomeDeviceManager();
	deviceManager->coolWind();
	deviceManager->playMovie();
	deviceManager->offMovie();
	deviceManager->allDeviceOff();

	delete deviceManager;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
