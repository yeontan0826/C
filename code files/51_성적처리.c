#include <stdio.h>

int main() {

	int num, score;
	int min = 100;
	int max = 0;
	int sum = 0;

	do {
		printf_s("�л����� �Է��ϼ��� : ");
		scanf_s("%d", &num);
	} while (num < 1 || num>25);

	for (int i = 1; i <= num; i++) {
		do {
			printf_s("%d��° �л��� ������ �Է��Ͻÿ� : ", i);
			scanf_s("%d", &score);
		} while (score < 0 || score>100);

		if (score < min) min = score;
		if (score > max) max = score;
		sum += score;
	}

	float avg = (float)sum / num;
	printf("�ִ밪 : %d     �ּҰ� : %d     ��հ� : %.1f", max, min, avg);

	return 0;
}