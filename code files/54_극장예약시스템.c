#include <stdio.h>
#define SIZE 10

int main() {

	int num;
	int seat[SIZE] = { 0 };
	
	while(1) {
		printf("--------------------------------\n");
		printf("  1  2  3  4  5  6  7  8  9  10\n");
		printf("--------------------------------\n");

		for (int i = 0; i < 10; i++) {
			printf("  %d", seat[i]);
		}

		printf("\n");
		printf("원하시는 좌석번호를 입력하세요(종료는 -1) : ");
		scanf_s("%d", &num);

		if (num < 0) break;

		if (num <= 0 || num > SIZE) {
			printf("1부터 10 사이의  숫자를 입력하세요\n");
			continue;
		}

		if (seat[num-1] == 0) {
			seat[num-1] = 1;
			printf("예약되었습니다.\n\n");
		} else {
			printf("이미 예약된 자리입니다.\n\n");
		}
	}
	return 0;
}