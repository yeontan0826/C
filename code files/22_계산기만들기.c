#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a, b, result;
	char c;

	printf("수식을 입력하세요 < 예) 2 + 10 >\n");
	printf(">>>  ");
	scanf("%d %c %d", &a, &c, &b);

	if (c == '+') {
		result = a + b;
	} else if (c == '-') {
		result = a - b;
	} else if (c == '/') {
		result = a / b;
	} else if (c == '%') {
		result = a % b;
	} else if (c == '*') {
		result = a * b;
	} else {
		printf("지원되지 않는 연산자입니다.");
	}

	printf("%d %c %d = %d", a, c, b, result);

	return 0;
}