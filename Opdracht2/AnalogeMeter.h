#ifndef __AnalogeMeter_H
#define __AnalogeMeter_H
#include <iostream>

#include "Observer.h"
#include "Snelheid.h"

class AnalogeMeter : public Observer
{
public:
	AnalogeMeter(Snelheid* t);
	virtual void update();
};

#endif