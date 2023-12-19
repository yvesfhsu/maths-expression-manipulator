#include <iostream>
#include "handle.h"
#include "base.h"

Handle::Handle(Base* _p): p(_p) {}

Handle::Handle(const Handle& h): p(h.p) {
    p->use++;
}

Handle::~Handle() {
    if (--(p->use) == 0)
        delete p;
}

Handle& Handle::operator=(const Handle& h) {
    if (--(p->use) == 0)
        delete p;
    p = h.p;
    p->use++;
    return *this;
}

void Handle::print(ostream& o) const {
    p->print(o);
}

double Handle::eval() const {
    return p->eval();
}

TYPE Handle::type() const {
    return p->type;
}

void Handle::subst(char, const Handle&) {}
