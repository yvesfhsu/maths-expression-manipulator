#include "value.h"
#include "base.h"
#include <iostream>
using namespace std;

Value::Value(double _val): Base(), val(_val) {
    type = VALUE;
}

void Value::print(ostream& o) const {
    o << val;
}

double Value::eval() const {
    return val;
}

void Value::subst(char, const Handle&) {}
