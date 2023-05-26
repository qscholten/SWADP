#pragma once
#include "Observer.h"
class MachineWindow : public Observer
{
	public:
		MachineWindow(Subject* s);
		virtual ~MachineWindow() {}
		virtual void update();
};

