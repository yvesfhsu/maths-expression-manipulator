#ifndef _TERM_H_
#define _TERM_H_

#include "base.h"
#include "handle.h"
#include <iostream>
using namespace std;

class Term: public Base {
public:
    char op;
    Handle left, right;
    Term(char, Handle, Handle);
	void print(ostream&) const;
	void subst(char, const Handle&);
	double eval() const;
};

#endif // _TERM_H_