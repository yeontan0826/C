#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	 
	double f_temp, c_temp;

	printf("ȭ���µ��� �Է��ϼ��� : ");
	scanf("%lf",&f_temp);
	c_temp = 5.0 / 9.0 * (f_temp - 32);
	printf("�����µ��� %f�Դϴ�.", c_temp);

	return 0;
}