#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a, b, sum;

	printf("A의 숫자를 입력하세요 : ");
	scanf("%d", &a);
	printf("B의 숫자를 입력하세요 : ");
	scanf("%d", &b);

	sum = a + b;

	printf("A + B = %d", sum);

	return 0;
}