#pragma once
#include "IPrototype.h"
#include <string>
#include <iostream>

class PrototypeProduct1 :
	public IPrototype
{
public:
	PrototypeProduct1();
	~PrototypeProduct1();

	IPrototype* clone() override;

	friend std::ostream& operator<<(std::ostream& os, const PrototypeProduct1& product);
private:
	std::string name;
	std::string color;
};

