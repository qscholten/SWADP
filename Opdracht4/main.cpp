#include <iostream>
#include "TSensorIMP.h"
#include "MoneIMP.h"
#include "MtwoIMP.h"
#include "MachineIMP.h"
#include "TemperatuurWindow.h"

int main()
{
    TSensorIMP t1;
    TSensorIMP t2;
    MoneIMP m1(&t1);
    MtwoIMP m2(&t2);
    MachineIMP machine(&m1, &m2);
    TemperatuurWindow to1 (&t1);
    TemperatuurWindow to2(&t2);
    int x = 1;
    while (x>0) {
        std::cout << "1: run machine" << endl;
        std::cout << "2: stop machine" << endl;
        std::cout << "3: show temperature" << endl;
        std::cout << "0: end" << endl;
        std::cin >> x;
        switch (x) {
        case 1: machine.run();
            break;
        case 2: machine.halt();
            break;
        case 3: std::cout << "Temperatuur motor 1: " << m1.tsensor()->temperatuur() << endl;
            std::cout << "Temperatuur motor 2: " << m2.tsensor()->temperatuur() << endl;
            break;
        }
    }
    return 0;
}
