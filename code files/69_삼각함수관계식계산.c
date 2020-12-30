#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main() {

	double x, y, result;

	x = sin(rad(60.0));
	y = cos(rad(60.0));

	result = x * x + y * y;
	printf("result = %f", result);

	return 0;
}

int rad(double degree) {
	return PI * degree / 180.0;
}