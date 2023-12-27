#include "term.h"
#include "base.h"
#include "handle.h"
#include "symbol.h"
#include <iostream>
using namespace std;

Term::Term(char _op, Handle _left, Handle _right): 
           Base(), op(_op), left(_left), right(_right) {
    type = TERM;
}

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
    else {
        cout << "Invalid operator input." << endl;
        return 0.0;
    }
}

void Term::subst(char c, const Handle& h) {
    if (left.type() == SYMBOL && ((Symbol*)left.p)->sym == c)
        left = h;
    else
        left.subst(c, h);

    if (right.type() == SYMBOL && ((Symbol*)right.p)->sym == c)
        right = h;
    else
        right.subst(c, h);
}
