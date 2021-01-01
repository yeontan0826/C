#include <stdio.h>

int get_min(int, int);
int get_max(int, int);

int main() {

	int n1, n2, result1, result2;
	int (*p)(int, int);

	printf("첫번째 값 : ");
	scanf_s("%d", &n1);
	printf("두번째 값 : ");
	scanf_s("%d", &n2);

	p = get_min;
	result1 = p(n1, n2);
	p = get_max;
	result2 = p(n1, n2);

	printf("큰값은 : %d\n", result1);
	printf("작은값은 : %d", result2);

	return 0;
}

int get_min(int a, int b) {

	if (a > b) {
		return a;
	} else {
		return b;
	}
}

int get_max(int a, int b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}