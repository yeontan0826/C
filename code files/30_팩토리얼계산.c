#include <stdio.h>

int main() {

	int i = 1;
	int fact = 1;

	while (i <= 10) {
		fact *= i;
		i++;
	}

	printf("10!은 %d입니다.", fact);

	return 0;
}