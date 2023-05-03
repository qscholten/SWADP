#include "observer.h"
#include "Subject.h"

Observer::Observer(Subject* s) : S(s)
{
	getSubject()->insert(this);
}

Observer::~Observer()
{
	getSubject()->remove(this);
}

Subject* Observer::getSubject() const{
	return S;
}