#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a, b;

	printf("2���� ������ �Է��ϼ���(�� 9 2) : ");
	scanf("%d %d", &a, &b);

	printf("���� %d�Դϴ�.", a / b);
	printf("�������� %d�Դϴ�.", a % b);

	return 0;
}