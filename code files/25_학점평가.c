#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char score;

	printf("학점을 입력하세요 (A, B, C, D, F) : ");
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
		printf("잘못된 입력입니다.");
		break;
	}

	return 0;
}