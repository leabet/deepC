#include <stdio.h>
int main(void) {
	int a1 = 41; a1++; printf("a1:%d\n", a1);
	int a2 = 41; a2++ & printf("a2:%d\n", a2);
	int a3 = 41; a3++ && printf("a3:%d\n", a3);
	int a4 = 41; if (a4++ < 41) printf("a4:%d\n", a4);
	int a5 = 41; a5 = a5++; printf("a5:%d\n", a5);
return 0;
}
