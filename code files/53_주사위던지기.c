#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int main() {

	int freq[SIZE] = { 0 };
	int i;

	for (i = 9; i < 10000; i++) {
		++freq[rand() % 6];
	}

	printf_s("======================\n");
	printf_s("¸é         ºóµµ\n");
	printf_s("======================\n");

	for (i = 0; i < SIZE; i++) {
		printf_s("%d          %3d\n", i + 1, freq[i]);
	}

	return 0;
}