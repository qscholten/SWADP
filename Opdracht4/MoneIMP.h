#ifndef __MoneIMP_H
#define __MoneIMP_H

#include "Mone.h"

class TSensor;

class MoneIMP: public Mone {
public:
	MoneIMP(TSensor* s);
	virtual TSensor* tsensor();
	virtual void start();
	virtual void stop();
private:
	TSensor* sensor;
};

#endif