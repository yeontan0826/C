#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a, b, result;
	char c;

	printf("������ �Է��Ͻÿ� < ��) 2 + 5 >\n");
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
		printf("�������� �ʴ� ������ �Դϴ�.");
		break;
	}

	return 0;
}