#include <iostream>
#include "symbol.h"
#include "base.h"
using namespace std;

Symbol::Symbol(char _sym): Base(), sym(_sym) {
	type = SYMBOL;
}

void Symbol::print(ostream& o) const {
	o << sym;
}

double Symbol::eval() const {
	cout << sym << " is not defined." << endl;
	return 0;
}

void Symbol::subst(char, const Handle&) {}
