#pragma once

class Phone {
public:
	Phone() {};
	virtual ~Phone() {};

	virtual void makeCall() = 0;
};

class HWPhone : public Phone {
public:
	HWPhone() {};
	virtual ~HWPhone() {};

	virtual void makeCall();
};

class MIPhone : public Phone {
public:
	MIPhone() {};
	virtual ~MIPhone() {};

	virtual void makeCall();
};