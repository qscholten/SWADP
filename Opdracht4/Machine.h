#ifndef __Machine_H
#define __Machine_H

#include"Subject.h"

class Motor;

class Machine {
public:
	virtual ~Machine() {}
	virtual Motor* motor1() = 0;
	virtual Motor* motor2() = 0;
	virtual void run() = 0;
	virtual void halt() = 0;
};

#endif