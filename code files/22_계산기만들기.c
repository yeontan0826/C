#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a, b, result;
	char c;

	printf("������ �Է��ϼ��� < ��) 2 + 10 >\n");
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
		printf("�������� �ʴ� �������Դϴ�.");
	}

	printf("%d %c %d = %d", a, c, b, result);

	return 0;
}