#include "MoneIMP.h"
#include "TSensorIMP.h"
#include <iostream>

MoneIMP::MoneIMP(TSensor* s): sensor(s) {
}

TSensor* MoneIMP::tsensor() {
	return sensor;
}

void MoneIMP::start() {
	std::cout << "Motor 1 is aangezet." << std::endl;
}

void MoneIMP::stop() {
	std::cout << "Motor 1 is uitgezet." << std::endl;
}