#include <stdio.h>

int main() {

	int arr1[3][3] = {
		{2, 3, 0},
		{8, 9, 1},
		{7, 0, 5}
	};
	int arr2[3][3] = {
		{1, 0, 0},
		{1, 0, 0},
		{1, 0, 0}
	};
	int sum[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}