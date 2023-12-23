#ifndef _TERM_H_
#define _TERM_H_

#include "base.h"
#include "handle.h"
#include "symbol.h"
#include <iostream>
using namespace std;

class Term: public Base {
public:
    Term(char, Handle, Handle);
	void print(ostream&) const;
	void subst(char, const Handle&);
	double eval() const;

    char op;
    Handle left, right;
};

#endif // _TERM_H_
