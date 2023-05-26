#ifndef __Observer_H
#define __Observer_H

#include <list>

using namespace std;
class Subject;
class Observer
{
    private:
        Subject* S;
    protected:
        Subject* getSubject() const { return S; }
    public:
        Observer(Subject* s);
        virtual ~Observer();
        virtual void update() = 0;
};
#endif