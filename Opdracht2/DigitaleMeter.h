#ifndef __DigitaleMeter_H
#define __DigitaleMeter_H


#include "Observer.h"
#include "Snelheid.h"

class DigitaleMeter : public Observer
{
	public:
		DigitaleMeter(Snelheid* t) : Observer(t) { }
		virtual void update()
		{
			cout << "Digitaal: " << dynamic_cast<Snelheid*>(getSubject())->geef() << "\n";
		}
};

#endif