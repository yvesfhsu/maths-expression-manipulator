#ifndef _VALUE_H_
#define _VALUE_H_

#include <iostream>
#include "base.h"

class Value: public Base {
public:
    Value(double);
    void print(ostream&) const;
    double eval() const;
    double val;
    
	void subst(char, const Handle&);
};

#endif // _VALUE_H_
