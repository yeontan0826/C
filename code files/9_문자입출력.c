#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char name, score;

	printf("���� �̸��� ù���� : ");
	scanf(" %c", &name);

	printf("����(A~F) : ");
	scanf(" %c", &score);

	printf("\n%c�л��� ������ %c�Դϴ�.", name, score);

	return 0;
}