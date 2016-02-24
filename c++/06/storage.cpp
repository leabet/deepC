#include <iostream>

struct X 
{
	int a;
	char b;
	int c;
	virtual void set_value(int v) {
		a = v;
	}
	virtual int get_value() {
		return a;
	}
	virtual int increase_value() {
	a++;
	}
};

int main() {

	std::cout << sizeof(X) << std::endl;
}
