#ifndef __MachineWindow_H
#define __MachineWindow_H

#include "Observer.h"

class MachineWindow : public Observer
{
public:
	MachineWindow(Subject* s);
	virtual ~MachineWindow() {}
	virtual void update();
	virtual void run();
	virtual void halt();
};

#endif