#include "MachineWindow.h"
#include <iostream>

using namespace std;

MachineWindow::MachineWindow(Subject* s) : Observer(s)
{
}

void MachineWindow::update()
{
	cout << "MachineWindow::update()" << endl;
}
