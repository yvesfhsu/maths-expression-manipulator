#include <iostream>
#include "expr.h"
#include "base.h"
#include "handle.h"
#include "value.h"
#include "symbol.h"
#include "term.h"
using namespace std;

void Expr::subst(char sym, const Expr& e) {
    h.subst(sym, e.h);
}

double Expr::eval() const {
    return h.eval();
}

ostream& operator<< (ostream& o, const Expr& e) {
    e.h.print(o);
    return o;
}

