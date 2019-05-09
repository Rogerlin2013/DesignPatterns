#pragma once
#include <string>
#include <iostream>

class PhoneProduct
{
public:
	PhoneProduct();
	~PhoneProduct();

	inline void setCPU(std::string& cpu) { this->CPU = cpu; };
	inline void setCapacity(std::string& capacity) { this->capacity = capacity; };
	inline void setDisplay(std::string& display) { this->display = display; };

private:
	std::string CPU;
	std::string capacity;
	std::string display;
};

