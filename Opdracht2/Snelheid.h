#ifndef __Snelheid_H
#define __Snelheid_H

#include <iostream>
#include "Observer.h"

class Snelheid : public Subject
{
	private:
		float waarde;
	public:
		Snelheid() : waarde(0) { }
		virtual void meet() { cin >> "Geef snelheid: " >> waarde; cout << "\n"; notify(); }
		virtual float geef() { return waarde; }
};

#endif // !__Snelheid_H
