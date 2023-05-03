#include "Subject.h"
#include "Observer.h"

Subject::Subject() {
}

void Subject::notify()
{
	for (list<Observer*>::iterator i = L.begin(); i != L.end(); ++i) {
		(*i)->update();
	}
}

void Subject::insert(Observer* s) {
	L.push_front(s);
}

void Subject::remove(Observer* s) {
	L.remove(s);
}