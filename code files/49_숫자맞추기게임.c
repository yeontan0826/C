#include <stdio.h>

int main() {

	int tries = 0;
	int guess;
	int answer = 62;

	do {
		printf_s("������ �����Ͽ� ���ÿ� : ");
		scanf_s("%d", &guess);
		tries++;

		if (guess > answer) {
			printf_s("������ ���ڰ� �����ϴ�.\n\n");
		}
		if (guess < answer) {
			printf_s("������ ���ڰ� �����ϴ�.\n\n");
		}
	} while (guess != answer);

	printf("�����մϴ�. �õ� Ƚ���� %d�� �Դϴ�.", tries);

	return 0;
}