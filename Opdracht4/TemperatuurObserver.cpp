#include "TemperatuurObserver.h"
#include <iostream>
#include "TSensor.h"
#include "Subject.h"

TemperatuurObserver::TemperatuurObserver(Subject* s): Observer(s) {
}

void TemperatuurObserver::update() {
	std::cout << "De temperatuur is: " << dynamic_cast<TSensor*>(getSubject())->temperatuur() << std::endl;
}