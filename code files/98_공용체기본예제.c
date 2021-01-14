#include <stdio.h>

union example {
	char a;
	short b;
	int c;
};

int main() {

	union example v;

	v.a = 'c';
	printf("v.a : %c     v.b : %d     v.c : %d\n", v.a, v.b, v.c);

	v.c = 10000;
	printf("v.a : %c     v.b : %d     v.c : %d\n", v.a, v.b, v.c);

	return 0;
}