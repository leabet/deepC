#include <stdio.h>

void bar(void);

void foo(void) {
	int a;
	printf("%d\n", a);
}

void main(void) {
	bar();
	foo();
}
