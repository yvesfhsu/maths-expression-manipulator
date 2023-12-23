#ifndef _BASE_H_
#define _BASE_H_

#include <iostream>
using namespace std;

enum TYPE {
	VALUE,
	SYMBOL,
	TERM
};

class Handle;

class Base {
public:
	// Virtual destructor
	virtual ~Base() {}
	// Pure virtual function
	virtual void print(ostream&) const = 0;
	virtual double eval() const = 0;
	virtual void subst(char, const Handle&) = 0;

	// Data member
	int use;
	TYPE type;

protected:
	// Constructor (default)
	Base();
	// Copy assignment operator
	Base& operator=(const Base&);
};

#endif // _BASE_H_
