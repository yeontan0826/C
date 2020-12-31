#include <stdio.h>

void swap(int *, int *);

int main() {

	int a = 100, b = 200;

	printf("swap() 호출 전 a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("swap() 호출 후 a=%d b=%d\n", a, b);

	return 0;
}

void swap(int *x, int *y) {

	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}