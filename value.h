#ifndef _VALUE_H_
#define _VALUE_H_

#include <iostream>
#include "base.h"

class Value: public Base {
public:
    Value(double);
    void print(ostream&) const;
    double eval() const;
	void subst(char, const Handle&);
    
    double val;
};

#endif // _VALUE_H_
