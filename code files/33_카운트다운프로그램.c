#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int i = 0;

	printf("3이상의 숫자를 입력하세요 : ");
	scanf("%d", &i);

	while (i > 0) {
		printf("%d\n", i);
		i--;
	}

	printf("발사!");

	return 0;
}