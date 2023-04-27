#include "robot.h"
#include "positie.h"
#include <iostream>

Robot::Robot(Positie *p): P(p) {
}

void Robot::run() const{
    P->move(10,20);
}

void Robot::show() const{
    std::cout << "x: " << P->x() << " y:" << P->y() << std::endl;
}