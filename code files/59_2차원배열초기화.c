#include <stdio.h>

int main() {

	int arr[3][5] = {
		{1, 5, 60, 32, 54},
		{45, 65, 87, 7, 13},
		{87, 51, 4, 66, 20}
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("2차원배열[%d][%d] = %d\n", i, j, arr[i][j]);
		}
	}

	return 0;
}