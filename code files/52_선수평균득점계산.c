#include <stdio.h>

int main() {

	int score[3];
	int sum = 0;
	double avg;

	for (int i = 0; i < 3; i++) {
		printf_s("���� %d���� ������ ������? : ", i+1);
		scanf_s("%d", &score[i]);
		sum += score[i];
	}

	avg = (double)sum / 3;

	printf_s("��� ������ %f�Դϴ�", avg);

	return 0;
}