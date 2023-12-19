#include "term.h"
#include "base.h"
#include "handle.h"
#include <iostream>
using namespace std;

Term::Term(char _op, Handle _left, Handle _right): op(_op), left(_left), right(_right) {}

void Term::print(ostream& o) const {
    o << "(";
    left.print(o);
    o << op;
    right.print(o);
    o << ")";
}

double Term::eval() const {
    if (op == '+')
        return left.eval() + right.eval();
    else if (op == '-')
        return left.eval() - right.eval();
    else if (op == '*')
        return left.eval() * right.eval();
    else if (op == '/')
        return left.eval() / right.eval();
}

void Term::subst(char, const Handle&) {}
