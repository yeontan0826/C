#include <stdio.h>

int get_min(int, int);
int get_max(int, int);

int main() {
	int a, b, result1, result2;
	int (*p)(int, int);
	
	printf("ù ��° �� : ");
	scanf_s("%d", &a);
	printf("�� ��° �� : ");
	scanf_s("%d", &b);

	p = get_max;
	result1 = p(a, b);
	p = get_min;
	result2 = p(a, b);

	printf("ū �� : %d\n", result1);
	printf("���� �� : %d", result2);

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