#include "DigitaleMeter.h"
#include "Snelheid.h"

DigitaleMeter::DigitaleMeter(Snelheid* t) : Observer(t) {
}

void DigitaleMeter::update()
{
	cout << "Digitaal: " << dynamic_cast<Snelheid*>(getSubject())->geef() << "\n";
}