#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a, b;

	printf("첫번째 수 : ");
	scanf("%d", &a);
	printf("두번째 수 : ");
	scanf("%d", &b);
	
	printf("큰 수 -> %d\n", (a > b) ? a : b);
	printf("작은 수 -> %d", (a < b) ? a : b);

	return 0;
}