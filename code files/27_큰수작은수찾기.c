#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a, b;

	printf("ù��° �� : ");
	scanf("%d", &a);
	printf("�ι�° �� : ");
	scanf("%d", &b);
	
	printf("ū �� -> %d\n", (a > b) ? a : b);
	printf("���� �� -> %d", (a < b) ? a : b);

	return 0;
}