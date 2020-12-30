#include <stdio.h>

int main() {
	
	int a, b;

	printf("서로 다른 두 개의 정수를 입력하시오 : ");
	scanf_s("%d %d", &a, &b);
	printf("두 수 중에서 큰 수는 %d입니다,", compare(a, b));

	return 0;
}

int compare(int x, int y) {
	if (x > y) {
		return x;
	} else {
		return y;
	}
}