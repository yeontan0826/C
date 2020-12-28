#include <stdio.h>
#define SUM 7

int main() {

	printf_s("합이 %d이 되는 경우의 수를 찾아 봅니다.\n", SUM);
	printf_s("---------------------\n");
	printf_s("주사위A  주사위B\n");
	printf_s("---------------------\n");
	
	for (int i = 1; i <= 6; i++) {
		for (int k = 1; k <= 6; k++) {
			if (i + k == SUM) {
				printf_s("%d         %d \n", i, k);
			}
		}
	}

	return 0;
}