#ifndef __TemperatuurObserver_H
#define __TemperatuurObserver_H

#include "Observer.h"

class TemperatuurObserver : public Observer
{
public:
	TemperatuurObserver(Subject* s);
	virtual ~TemperatuurObserver() {}
	virtual void update();
};

#endif