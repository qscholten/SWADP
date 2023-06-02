#include "TemperatuurWindow.h"
#include <iostream>
#include "TSensor.h"
#include "Subject.h"

TemperatuurWindow::TemperatuurWindow(Subject* s) : Observer(s) {
}

void TemperatuurWindow::update() {
	std::cout << "De temperatuur is: " << dynamic_cast<TSensor*>(getSubject())->temperatuur() << std::endl;
}