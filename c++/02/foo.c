#include <stdio.h>

void foo(void) {
	int a = 41;
	a = a++;
	printf("%d\n", a);
}

void bar(void) {
	int a = 41;
	a = a+1;
	printf("%d\n", a);
}
int main(void) {
	foo();
	bar();

}
