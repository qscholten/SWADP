#ifndef ROBOT_H
#define ROBOT_H

class Server;

class Robot {
public:
    Robot(Server* s);
    virtual ~Robot() {}
    virtual void run() const;
    virtual void show() const;
private:
    Server* S;
};

#endif //ROBOT_H#pragma once
