#include <stdio.h>

int get_min(int, int);
int get_max(int, int);

int main() {
	int a, b, result1, result2;
	int (*p)(int, int);
	
	printf("첫 번째 값 : ");
	scanf_s("%d", &a);
	printf("두 번째 값 : ");
	scanf_s("%d", &b);

	p = get_max;
	result1 = p(a, b);
	p = get_min;
	result2 = p(a, b);

	printf("큰 값 : %d\n", result1);
	printf("작은 값 : %d", result2);

	return 0;
}

int get_min(int a, int b) {
	if (a > b) {
		return b;
	} else {
		return a;
	}
}

int get_max(int a, int b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}