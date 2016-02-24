#include "A.hpp"
int main() 
{
	A * array = new A[4];

	A &b = array[1] ;

	b.setId(10);
	A &c = b;
	delete[] array;
}
