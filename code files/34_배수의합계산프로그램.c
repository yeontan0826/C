#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num = 1;
	int sum = 0;

	while (num <= 100) {
		if (num % 3 == 0) {
			sum += num;
		}
		num++;
	}

	printf("1���� 100 ������ ��� 3�� ����� ���� %d�Դϴ�.", sum);

	return 0;
}
