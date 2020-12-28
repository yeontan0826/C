#include <stdio.h>

int main() {

	int tries = 0;
	int guess;
	int answer = 62;

	do {
		printf_s("정답을 추측하여 보시오 : ");
		scanf_s("%d", &guess);
		tries++;

		if (guess > answer) {
			printf_s("제시한 숫자가 높습니다.\n\n");
		}
		if (guess < answer) {
			printf_s("제시한 숫자가 낮습니다.\n\n");
		}
	} while (guess != answer);

	printf("축하합니다. 시도 횟수는 %d번 입니다.", tries);

	return 0;
}