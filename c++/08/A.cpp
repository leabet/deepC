#include <stdio.h>
#include "A.hpp"

int A::count;

A::A():id(A::count++) 
{
	printf("A(%d)\n", id);
}

A::~A()
{
	printf("destructor ~A(%d)\n", id);
}

A::A(const A& other) : id(other.id * 100)
{
	printf("A(%d) copied to A(%d)\n", other.id, id);
}

A& A::operator=(const A& other) {
	id = other.id;
	printf("this A assigned id value:%d from other A", id);
	return *this;
}

