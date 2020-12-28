#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num = 1;
	int sum = 0;

	while (num <= 100) {
		if (num % 3 == 0) {
			sum += num;
		}
		num++;
	}

	printf("1부터 100 사이의 모든 3의 배수의 합은 %d입니다.", sum);

	return 0;
}
