#include "Auto.h"

Auto::Auto(Snelheid* s) : snelheid(s)
{
}

void Auto::meetSnelheid()
{
	snelheid->meet();
}