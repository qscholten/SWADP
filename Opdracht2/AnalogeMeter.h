#ifndef __AnalogeMeter_H
#define __AnalogeMeter_H
#include <iostream>

#include "Observer.h"
#include "Snelheid.h"

class AnalogeMeter : public Observer
{
	public: 
		AnalogeMeter(Snelheid* t) : Observer(t) { }
		virtual void update()
		{
			cout << "Analoog: " << dynamic_cast<Snelheid*>(getSubject())->geef() << "\n";
		}
};

#endif