#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int i = 1;
	int num;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);

	while (i <= 9) {
		printf("%d * %d = %d\n", num, i, num * i);
		i++;
	}

	return 0;
}