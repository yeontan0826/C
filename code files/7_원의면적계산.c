#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double r, area, peri;

	printf("���� �������� �Է��Ͻÿ� : ");
	scanf("%lf", &r);
	
	area = 3.14 * r * r;
	peri = 2.0 * 3.14 * r;

	printf("���� ���� : %.2f\n", area);
	printf("���� �ѷ� : %.2f\n", peri);

	return 0;
}