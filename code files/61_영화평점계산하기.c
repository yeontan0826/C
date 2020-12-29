#include <stdio.h>

int main() {

	int arr[3][4] = {
		{4, 6, 2, 9},
		{7, 8, 3, 7},
		{6, 9, 7, 6}
	};
	int num, sum;
	double avg;

	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("|  평론가0  |   %d   |   %d   |   %d   |   %d   |\n", arr[0][0], arr[0][1], arr[0][2], arr[0][3]);
	printf("|  평론가1  |   %d   |   %d   |   %d   |   %d   |\n", arr[1][0], arr[1][1], arr[1][2], arr[1][3]);
	printf("|  평론가2  |   %d   |   %d   |   %d   |   %d   |\n", arr[2][0], arr[2][1], arr[2][2], arr[2][3]);
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n\n");

	while (1) {
		sum = 0;

		printf("평점을 알고 싶은 평론가의 번호를 입력해주세요(종료: -1) : ");
		scanf_s("%d", &num);

		if (num == -1) break;

		if (num < 0 || num>2) {
			printf("0~2번중 선택해주세요. 종료는 -1입니다.\n\n");
			continue;
		}

		switch (num) {
		case 0:
			for (int i = 0; i < 4; i++) {
				sum += arr[0][i];
			}
			break;
		case 1:
			for (int i = 0; i < 4; i++) {
				sum += arr[1][i];
			}
			break;
		case 2:
			for (int i = 0; i < 4; i++) {
				sum += arr[2][i];
			}
			break;
		}

		avg = (double)sum / 4;
		printf("평론가%d의 평점은 %.2f점입니다.\n\n", num, avg);
	}
	return 0;
}