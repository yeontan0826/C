#include <stdio.h>

int main() {
	
	double light_speed = 300000;
	double distance = 149600000;

	printf("���� �ӵ��� %lfkm/s\n", light_speed);
	printf("�¾�� �������� �Ÿ� : %lfkm\n", distance);

	double time = distance / light_speed;
	printf("���� �ð� : %lf��", time);

	return 0;
}