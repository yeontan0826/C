#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a, b, sum;

	printf("A�� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("B�� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &b);

	sum = a + b;

	printf("A + B = %d", sum);

	return 0;
}