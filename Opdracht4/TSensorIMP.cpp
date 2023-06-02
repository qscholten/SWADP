#include "TSensorIMP.h"
#include <iostream>

TSensorIMP::TSensorIMP(): temp(0) {
}

void TSensorIMP::read() {
	std::cout << "Geef temperatuur: ";
	std::cin >> temp;
	notify();
}

int TSensorIMP::temperatuur() {
	return temp;
}