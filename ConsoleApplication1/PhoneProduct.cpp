#include "PhoneProduct.h"



PhoneProduct::PhoneProduct()
{
}


PhoneProduct::~PhoneProduct()
{
}

std::ostream& operator<<(std::ostream& os, const PhoneProduct& phone)
{
	os << phone.CPU << "|" << phone.capacity << "|" << phone.display << "|" << std::endl;
	return os;
}
