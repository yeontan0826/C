#include <stdio.h>

int main() {

	int i = 1;
	int fact = 1;

	while (i <= 10) {
		fact *= i;
		i++;
	}

	printf("10!�� %d�Դϴ�.", fact);

	return 0;
}