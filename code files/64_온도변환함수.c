#include <stdio.h>

double c_temp(double);

int main() {

	double f, c;

	f = 100.0;
	c = c_temp(f);

	printf("ȭ���µ� %.2f�� �����µ� %.2f�� �ش��Ѵ�.", f, c);

	return 0;
}

double c_temp(double a) {
	double temp_c;
	temp_c = (5.0 * (a - 32.0)) / 9.0;
	return temp_c;
}