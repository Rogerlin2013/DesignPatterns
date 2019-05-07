#pragma once
#include "Pad.h"
class HWPad :
	public Pad
{
public:
	HWPad();
	virtual ~HWPad();

	virtual void playPadGame();
};

