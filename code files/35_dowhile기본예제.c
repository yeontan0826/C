#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int i = 10;

	do {
		printf("Hello %d", i);
		i--;
	} while (i > 0);

	return 0;
}