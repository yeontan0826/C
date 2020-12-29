#include <stdio.h>

#define SIZE 10

int main() {

	int arr[SIZE] = {10, 3, 14, 11, 8, 2, 9, 10, 11, 7};

	printf("요소     값     히스토그램\n");
	printf("==========================\n");

	for (int i = 0; i < SIZE; i++) {
		printf("%d        %2d     ", i, arr[i]);
		for (int j = 0; j < arr[i]; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}