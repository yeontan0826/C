#include <stdio.h>

int main() {

	int a, fact = 1;

	printf_s("정수를 입력하시오 : ");
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++) {
		fact *= i;
	}

	printf("%d!은 %d입니다.", a, fact);

	return 0;
}