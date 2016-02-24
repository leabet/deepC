
#include "B.hpp"

class A {
public:
	A(int sz) : sz_(sz), v(new B[sz]) {}
	~A() {delete [] v;}

private:
	A(const A &);
	A& operator = (const A &);
	int sz_;
	B* v;
};
		
