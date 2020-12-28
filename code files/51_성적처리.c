#include <stdio.h>

int main() {

	int num, score;
	int min = 100;
	int max = 0;
	int sum = 0;

	do {
		printf_s("학생수를 입력하세요 : ");
		scanf_s("%d", &num);
	} while (num < 1 || num>25);

	for (int i = 1; i <= num; i++) {
		do {
			printf_s("%d번째 학생의 성적을 입력하시오 : ", i);
			scanf_s("%d", &score);
		} while (score < 0 || score>100);

		if (score < min) min = score;
		if (score > max) max = score;
		sum += score;
	}

	float avg = (float)sum / num;
	printf("최대값 : %d     최소값 : %d     평균값 : %.1f", max, min, avg);

	return 0;
}