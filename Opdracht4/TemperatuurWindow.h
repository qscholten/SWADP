#ifndef __TemperatuurWindow_H
#define __TemperatuurWindow_H

#include "Observer.h"

class TemperatuurWindow : public Observer
{
public:
	TemperatuurWindow(Subject* s);
	virtual ~TemperatuurWindow() {}
	virtual void update();
};

#endif