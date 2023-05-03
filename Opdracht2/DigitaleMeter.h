#ifndef __DigitaleMeter_H
#define __DigitaleMeter_H


#include "Observer.h"
#include "Snelheid.h"

class DigitaleMeter : public Observer
{
public:
	DigitaleMeter(Snelheid* t);
	virtual void update();
};

#endif