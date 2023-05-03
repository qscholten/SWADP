#include "Snelheid.h"

Snelheid::Snelheid() : waarde(0) {
}

void Snelheid::meet() {
	cout << "Geef snelheid: ";
	cin >> waarde;
	cout << "\n";
	notify();
}
float Snelheid::geef() {
	return waarde;
}