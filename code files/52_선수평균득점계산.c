#include <stdio.h>

int main() {

	int score[3];
	int sum = 0;
	double avg;

	for (int i = 0; i < 3; i++) {
		printf_s("게임 %d에서 선수의 득점은? : ", i+1);
		scanf_s("%d", &score[i]);
		sum += score[i];
	}

	avg = (double)sum / 3;

	printf_s("평균 득점은 %f입니다", avg);

	return 0;
}