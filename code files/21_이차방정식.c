#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {

	double a, b, c, dis, value;

	printf("��� a�� �Է��Ͻÿ� : ");
	scanf("%lf", &a);
	printf("��� b�� �Է��Ͻÿ� : ");
	scanf("%lf", &b);
	printf("��� c�� �Է��Ͻÿ� : ");
	scanf("%lf", &c);

	if (a == 0) {
		printf("�������� ���� %f�Դϴ�.", -c / b);
	} else {
		dis = b * b - 4.0 * a * c;
		if (dis > 0) {
			value = sqrt(dis);
			printf("�������� ���� %f�Դϴ�.\n", (-b + value) / (2.0 * a));
			printf("�������� ���� %f�Դϴ�.\n", (-b - value) / (2.0 * a));
		} else if (dis == 0) {
			printf("�������� ���� %f�Դϴ�.\n", (-b) / (2.0 * a));
		} else {
			printf("�Ǳ��� �������� �ʽ��ϴ�.\n");
		}
	}

	return 0;
}