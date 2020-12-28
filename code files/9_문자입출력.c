#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char name, score;

	printf("영어 이름의 첫글자 : ");
	scanf(" %c", &name);

	printf("성적(A~F) : ");
	scanf(" %c", &score);

	printf("\n%c학생의 성적은 %c입니다.", name, score);

	return 0;
}