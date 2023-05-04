#ifndef __Auto_H
#define __Auto_H

class Snelheid;

class Auto
{
private:
	Snelheid* snelheid;
public:
	Auto(Snelheid*);
	virtual ~Auto() {}
	virtual void meetSnelheid();
};

#endif
