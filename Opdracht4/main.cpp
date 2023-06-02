#include <iostream>
#include "TSensorIMP.h"
#include "MoneIMP.h"
#include "MtwoIMP.h"
#include "MachineIMP.h"
#include "TemperatuurWindow.h"

int main()
{
    std::cout << "Hello World!" << std::endl;
    TSensorIMP t1;
    TSensorIMP t2;
    MoneIMP m1(&t1);
    MtwoIMP m2(&t2);
    MachineIMP machine(&m1, &m2);
    TemperatuurWindow to1 (&t1);
    TemperatuurWindow to2(&t2);
    machine.run();
    machine.halt();
    return 0;
}
