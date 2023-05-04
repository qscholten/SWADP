#include "Auto.h"
#include "Snelheid.h"

Auto::Auto(Snelheid* s) : snelheid(s)
{
}

void Auto::meetSnelheid()
{
	snelheid->meet();
}