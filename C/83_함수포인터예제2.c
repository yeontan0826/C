#include <stdio.h>

int get_min(int, int);
int get_max(int, int);

int main() {

	int n1, n2, result1, result2;
	int (*p)(int, int);

	printf("ù��° �� : ");
	scanf_s("%d", &n1);
	printf("�ι�° �� : ");
	scanf_s("%d", &n2);

	p = get_min;
	result1 = p(n1, n2);
	p = get_max;
	result2 = p(n1, n2);

	printf("ū���� : %d\n", result1);
	printf("�������� : %d", result2);

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