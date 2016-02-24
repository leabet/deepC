#include <stdio.h>

struct A
{
	static int count;
	int id;

	A() 
	{
		id = count;
		count++;

		printf("A(%d) \n", id);
	}
	~A() 
	{ 
		printf("~A(%d) \n", id);
	}
};

int main() {
	A array[4];
}

