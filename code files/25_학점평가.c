#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char score;

	printf("������ �Է��ϼ��� (A, B, C, D, F) : ");
	scanf("%c", &score);

	switch (score) {
	case 'A':
		printf("Excellent!");
		break;
	case 'B':
		printf("Great!");
		break;
	case 'C':
		printf("Good!");
		break;
	case 'D':
		printf("Not Bad!");
		break;
	case 'F':
		printf("Too Bad...");
		break;
	default:
		printf("�߸��� �Է��Դϴ�.");
		break;
	}

	return 0;
}