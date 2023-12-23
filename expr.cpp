#include "expr.h"
#include "base.h"
#include "handle.h"
#include "value.h"
#include "symbol.h"
#include "term.h"
#include <iostream>
using namespace std;

Expr::Expr(Handle _h): h(_h) {}

Expr::Expr(const Expr& e): h(e.h) {}

Expr::Expr(double val): h(new Value(val)) {}

Expr::Expr(char c): h(new Symbol(c)) {}

Expr& Expr::operator= (const Expr& e) {
    h = e.h;
    return *this;
}

Expr Expr::operator+ (const Expr& e) const {
    return Expr(new Term('+', h, e.h));
}

Expr Expr::operator- (const Expr& e) const {
    return Expr(new Term('-', h, e.h));
}

Expr Expr::operator* (const Expr& e) const {
    return Expr(new Term('*', h, e.h));
}

Expr Expr::operator/ (const Expr& e) const {
    return Expr(new Term('/', h, e.h));
}

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
