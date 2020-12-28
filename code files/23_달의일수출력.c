#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int month;

	printf("달을 입력하세요 : ");
	scanf("%d", &month);

	if (1 <= month && month <= 12) {
		switch (month) {
		case 4:
		case 6: 
		case 9:
		case 11:
			printf("%d월은 30일까지 있습니다.", month);
			break;
		case 2:
			printf("%d월은 28일까지 있습니다.", month);
			break;
		default:
			printf("%d월은 31일까지 있습니다.", month);
			break;
		}
	} else {
		printf("입력하신 달은 존재하지 않습니다.");
	}

	return 0;
}