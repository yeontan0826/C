#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a, sum = 0;

	do {
		printf("정수를 입력하시오(0이면 종료) : ");
		scanf("%d", &a);
		sum += a;
	} while (a != 0);

	printf("정수의 합계 : %d", sum);

	return 0;
}