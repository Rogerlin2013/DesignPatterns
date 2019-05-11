#include "PrototypeProduct1.h"



PrototypeProduct1::PrototypeProduct1()
{
	this->name = "product1";
	this->color = "red";
}


PrototypeProduct1::~PrototypeProduct1()
{
}

IPrototype* PrototypeProduct1::clone()
{
	PrototypeProduct1* product = new PrototypeProduct1();
	product->name = this->name;
	product->color = this->color;
	return product;
}

std::ostream& operator<<(std::ostream& os, const PrototypeProduct1& product)
{
	os << "Name: " << product.name << "Color: " << product.color << std::endl;
	return os;
}
