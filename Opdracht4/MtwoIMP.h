#ifndef __MtwoIMP_H
#define __MtwoIMP_H

#include "Mtwo.h"

class TSensor;

class MtwoIMP : public Mtwo {
public:
	MtwoIMP(TSensor* s);
	virtual TSensor* tsensor();
	virtual void start();
	virtual void stop();
private:
	TSensor* sensor;
};

#endif