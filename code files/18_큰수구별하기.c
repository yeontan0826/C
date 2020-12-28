#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a, b;

	printf("첫번째 정수 : ");
	scanf("%d", &a);

	printf("두번째 정수 : ");
	scanf("%d", &b);

	if (a > b) {
		printf("큰 수는 %d입니다.\n", a);
	} else if (a < b) {
		printf("큰 수는 %d입니다.\n", b);
	} else if (a == b) {
		printf("두 값은 동일합니다.\n");
	}

	printf("항상 실행되는 문장입니다.");

	return 0;
}