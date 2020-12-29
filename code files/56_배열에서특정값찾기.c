#include <stdio.h>

#define SIZE 10

int main() {

	int arr[SIZE] = {12, 56, 78, 55, 7, 94, 62, 30, 6, 84};
	int look, index;

	printf("탐색할 값을 입력하시오 : ");
	scanf_s("%d", &look);

	for (int i = 0; i < SIZE; i++) {
		if (look == arr[i]) {
			index = i;
		}
	}

	printf("Located : index[%d]", index);

	return 0;
}