#include "robot.h"
#include "server.h"
#include <iostream>

Robot::Robot(Server* s) : S(s) {
}

void Robot::run() const {
    S->move(10, 20);
}

void Robot::show() const {
    std::cout << "x: " << S->x() << " y:" << S->y() << std::endl;
}