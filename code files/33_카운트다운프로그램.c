#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int i = 0;

	printf("3�̻��� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &i);

	while (i > 0) {
		printf("%d\n", i);
		i--;
	}

	printf("�߻�!");

	return 0;
}