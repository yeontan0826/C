#include <stdio.h>

void sum_it(int);

int main() {

	for (int i = 0; i < 5; i++) {
		sum_it(i);
	}
	return 0;
}

void sum_it(int money) {
	static int sum = 0;
	sum += money;
	printf("현재의 합계는 %d입니다.\n", sum);
}