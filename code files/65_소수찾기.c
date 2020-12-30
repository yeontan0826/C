#include <stdio.h>

int main() {

	int num, result;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);

	result = prime(num);

	if (result == 0) {
		printf("소수가 아닙니다.");
	} else printf("소수입니다.");

	return 0;
}

int prime(int a) {
	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			return 0;
		}
	}
	return 1;
}