#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a, b, result;
	char c;

	printf("수식을 입력하시오 < 예) 2 + 5 >\n");
	printf(">>>  ");
	scanf("%d %c %d", &a, &c, &b);

	switch (c) {
	case '+':
		result = a + b;
		printf("%d %c %d = %d", a, c, b, result);
		break;
	case '-':
		result = a - b;
		printf("%d %c %d = %d", a, c, b, result);
		break;
	case '/':
		result = a / b;
		printf("%d %c %d = %d", a, c, b, result);
		break;
	case '%':
		result = a % b;
		printf("%d %c %d = %d", a, c, b, result);
		break;
	case '*':
		result = a * b;
		printf("%d %c %d = %d", a, c, b, result);
		break;
	default:
		printf("지원하지 않는 연산자 입니다.");
		break;
	}

	return 0;
}