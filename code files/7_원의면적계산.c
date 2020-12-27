#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double r, area, peri;

	printf("원의 반지름을 입력하시오 : ");
	scanf("%lf", &r);
	
	area = 3.14 * r * r;
	peri = 2.0 * 3.14 * r;

	printf("원의 면적 : %.2f\n", area);
	printf("원의 둘레 : %.2f\n", peri);

	return 0;
}