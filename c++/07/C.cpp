#include <iostream>
#include <stdio.h>

struct A 
{
	A() { puts("A()");}
	~A() { puts("~A()");}

};

struct B
{

	B() { puts("B()");}
	~B() { puts("~B()");}

};

struct C {
	A a;
	B b;
};

int main() {
	C obj;
}
