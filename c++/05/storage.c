#include <stdio.h>

int *immortal(void) {
	static int a = 42;
	return &a;
}

int *zombie(void) {
	auto int a = 43;
	return &a;
}

int *finite(void) {
	int *ptr = malloc(sizeof *ptr);
	*ptr = 44;
	return ptr;
}

int main(void) {
	int* result = immortal();
	printf("immortal result:%d\n", *result);

	result = zombie();
	printf("zombie result:%d\n", *result);

	result = finite();
	printf("finite result:%d\n", *result);
}
