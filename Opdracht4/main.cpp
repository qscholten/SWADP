#include <iostream>
#include "TSensorIMP.h"
#include "MoneIMP.h"
#include "MtwoIMP.h"
#include "MachineIMP.h"
#include "MachineWindow.h"
#include "TemperatuurObserver.h"

int main()
{
    std::cout << "Hello World!" << std::endl;
    TSensorIMP t1;
    TSensorIMP t2;
    MoneIMP m1(&t1);
    MtwoIMP m2(&t2);
    MachineIMP machine(&m1, &m2);
    TemperatuurObserver to1 (&t1);
    TemperatuurObserver to2(&t2);
    machine.run();
    machine.halt();
    return 0;
}
