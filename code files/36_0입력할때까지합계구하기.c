#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a, sum = 0;

	do {
		printf("������ �Է��Ͻÿ�(0�̸� ����) : ");
		scanf("%d", &a);
		sum += a;
	} while (a != 0);

	printf("������ �հ� : %d", sum);

	return 0;
}