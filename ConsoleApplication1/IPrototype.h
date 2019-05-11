#pragma once
class IPrototype
{
public:
	IPrototype();
	virtual ~IPrototype();

	virtual IPrototype* clone() = 0;
};

