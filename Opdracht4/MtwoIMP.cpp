#include "MtwoIMP.h"
#include "TSensorIMP.h"
#include <iostream>

MtwoIMP::MtwoIMP(TSensor* s) : sensor(s) {
}

TSensor* MtwoIMP::tsensor() {
	return sensor;
}

void MtwoIMP::start() {
	std::cout << "Motor 2 is aangezet." << std::endl;
}

void MtwoIMP::stop() {
	std::cout << "Motor 2 is uitgezet." << std::endl;
}