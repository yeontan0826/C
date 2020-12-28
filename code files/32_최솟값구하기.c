#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main() {

	int num, min = INT_MAX;

	printf("정수를 입력하시오 (종료는 Ctrl + Z 3번 입력하세요)\n");

	while (scanf("%d", &num) != EOF) {
		if (num < min) {
			min = num;
		}
	}

	printf("최솟값 : %d", min);
	
	return 0;
}