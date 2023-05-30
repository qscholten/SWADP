#ifndef __MachineIMP_H
#define __MachineIMP_H

#include "Machine.h"

class Motor;

class MachineIMP: public Machine {
public:
	MachineIMP(Motor* m1, Motor* m2);
	virtual Motor* motor1();
	virtual Motor* motor2();
	virtual void run();
	virtual void halt();
private:
	Motor* m1;
	Motor* m2;
};

#endif