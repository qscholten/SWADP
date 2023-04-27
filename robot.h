#ifndef ROBOT_H
#define ROBOT_H

class Positie;

class Robot {
public:
    Robot(Positie *p);
    virtual ~Robot(){}
    virtual void run() const;
    virtual void show() const;
private:
    Positie *P;
};

#endif //ROBOT_H