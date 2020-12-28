#include <stdio.h>

int main() {

	int a, sum = 0;

	printf_s("n의 값을 입력하세요 : ");
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++) {
		sum += i * i;
	}
	
	printf_s("계산값은 %d입니다.", sum);

	return 0;
}