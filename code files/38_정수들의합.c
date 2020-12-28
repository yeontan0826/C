#include <stdio.h>

int main() {
	
	int a, sum = 0;

	printf_s("어디까지 계산할까요? ");
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++) {
		sum += i;
	}

	printf("1부터 %d까지 정수의 합 = %d", a, sum);

	return 0;
}