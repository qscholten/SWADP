#ifndef __Auto_H
#define __Auto_H

#include "Snelheid.h"

class Auto
{
	private:
		Snelheid* snelheid;
	public:
		Auto(Snelheid*);
		virtual void meetSnelheid();
};

#endif
