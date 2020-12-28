#include <stdio.h>

int main() {

	for (int i = 1; i <= 9; i++) {
		for (int k = 1; k <= 9; k++) {
			printf_s("%d*%d=%2d ", i, k, i * k);
		}
		printf_s("\n");
	}

	return 0;
}