#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main() {

	int num, min = INT_MAX;

	printf("������ �Է��Ͻÿ� (����� Ctrl + Z 3�� �Է��ϼ���)\n");

	while (scanf("%d", &num) != EOF) {
		if (num < min) {
			min = num;
		}
	}

	printf("�ּڰ� : %d", min);
	
	return 0;
}