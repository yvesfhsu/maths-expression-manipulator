#ifndef _SYMBOL_H_
#define _SYMBOL_H_

#include "base.h"
#include <iostream>
using namespace std;

class Symbol: public Base {
public:
    Symbol(char);
	void print(ostream&) const;
	void subst(char, const Handle&);
	double eval() const;

    char sym;
};

#endif // _SYMBOL_H_
