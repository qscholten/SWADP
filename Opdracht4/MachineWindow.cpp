#include "MachineWindow.h"
#include <iostream>
#include "Motor.h"
#include "TSensor.h"
#include "Machine.h"

using namespace std;

MachineWindow::MachineWindow(Subject* s) : Observer(s)
{
}

void MachineWindow::update()
{
	cout << "Temperatuur Motor 1: " << dynamic_cast<Machine*>(getSubject())->motor1()->tsensor()->temperatuur() << endl;
	cout << "Temperatuur Motor 2: " << dynamic_cast<Machine*>(getSubject())->motor2()->tsensor()->temperatuur() << endl;
}

void MachineWindow::run() {
	dynamic_cast<Machine*>(getSubject())->run();
}

void MachineWindow::halt() {
	dynamic_cast<Machine*>(getSubject())->halt();
}