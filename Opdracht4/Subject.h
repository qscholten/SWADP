#ifndef SUBJECT_H
#define SUBJECT_H

class Observer;
using namespace std;
#include <list>

class Subject
{
    private:
        list<Observer*> L;
    protected:
        virtual void notify();
    public:
        Subject() {}
        virtual ~Subject() {}
        virtual void insert(Observer* s);
        virtual void remove(Observer* s);
};
#endif