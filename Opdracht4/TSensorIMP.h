#ifndef __TSensorIMP_H
#define __TSensorIMP_H

#include "TSensor.h"

class TSensorIMP: public TSensor, public Subject {
public:
	TSensorIMP();
	virtual void read();
	virtual int temperatuur();
private:
	int temp;
};

#endif