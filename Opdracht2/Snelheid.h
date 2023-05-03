#ifndef __Snelheid_H
#define __Snelheid_H

#include <iostream>
#include "Observer.h"
#include "Subject.h"

class Snelheid : public Subject
{
private:
	float waarde;
public:
	Snelheid();
	virtual ~Snelheid() {}
	virtual void meet();
	virtual float geef();
};

#endif // !__Snelheid_H