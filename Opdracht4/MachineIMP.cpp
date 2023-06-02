#include "MachineIMP.h"
#include "Motor.h"
#include "TSensor.h"

MachineIMP::MachineIMP(Motor* m1, Motor* m2): m1(m1), m2(m2) {
}

Motor* MachineIMP::motor1() {
	return m1;
}

Motor* MachineIMP::motor2() {
	return m2;
}

void MachineIMP::run() {
	m1->start();
	m1->tsensor()->read();
	m2->start();
	m2->tsensor()->read();
}

void MachineIMP::halt() {
	m2->stop();
	m1->stop();
}