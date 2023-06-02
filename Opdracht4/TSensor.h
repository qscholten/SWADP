#ifndef __TSensor_H
#define __TSensor_H

#include "Subject.h"

class TSensor {
public:
	virtual ~TSensor() {}
	virtual void read() = 0;
	virtual int temperatuur() = 0;
};

#endif