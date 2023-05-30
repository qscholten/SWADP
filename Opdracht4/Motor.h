#ifndef __Motor_H
#define __Motor_H

class TSensor;

class Motor {
public:
	virtual ~Motor() {}
	virtual TSensor* tsensor() = 0;
	virtual void start() = 0;
	virtual void stop() = 0;
};

#endif