#include <stdio.h>

int get_sum(int*, int);

int main() {

	int data[] = {10, 20, 30, 40, 50};
	int value;

	value = get_sum(data, 5);

	printf("%d", value);

	return 0;
}

int get_sum(int* p, int m) {

	int sum = 0;

	for (int i = 0; i < m; i++) {
		sum += *(p + i);
	}

	return sum;
}