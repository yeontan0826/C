#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	double volume;
	double radius = 3;
	const double pi = 3.141592;

	volume = 4.0 * pi * (radius * radius * radius) / 3.0;
	printf("���� ���� : %f", volume);

	return 0;
}