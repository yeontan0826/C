#include <stdio.h>

#define SIZE 10

int main() {

	int arr[SIZE] = {11, 20, 97, 72, 5, 62, 41, 78, 36, 3};
	int min = 100;
	int max = 0;

	for (int i = 0; i < SIZE; i++) {
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}

	printf("�ּҰ��� %d�Դϴ�.\n", min);
	printf("�ִ밪�� %d�Դϴ�.\n", max);

	return 0;
}