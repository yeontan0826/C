#include <stdio.h>

int main() {

	int a;

	printf_s("양의 정수를 입력하시오 : ");
	scanf_s("%d", &a);
	printf("%d의 약수는 다음과 같습니다.\n", a);

	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			printf("%d ", i);
		}
	}

	return 0;
}