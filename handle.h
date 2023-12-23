#ifndef _HANDLE_H_
#define _HANDLE_H_

#include "base.h"
#include <iostream>
using namespace std;

class Handle {
public:
    // Constructor and Destructor (non-default)
    Handle(Base *);
    Handle(const Handle&);
    ~Handle();

    // Member function
    Handle& operator=(const Handle&);
    void print(ostream&) const;
    double eval() const;
    TYPE type() const;
    void subst(char, const Handle&);

    // Member variable
    Base *p;
};

#endif // _HANDLE_H_
