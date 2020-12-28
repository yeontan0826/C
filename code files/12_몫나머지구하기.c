#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a, b;

	printf("2개의 정수를 입력하세요(예 9 2) : ");
	scanf("%d %d", &a, &b);

	printf("몫은 %d입니다.", a / b);
	printf("나머지는 %d입니다.", a % b);

	return 0;
}