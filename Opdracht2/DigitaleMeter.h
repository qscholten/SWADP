#ifndef __DigitaleMeter_H
#define __DigitaleMeter_H


#include "Observer.h"

class Snelheid;

class DigitaleMeter : public Observer
{
public:
	DigitaleMeter(Snelheid* t);
	virtual void update();
};

#endif