#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &a);

	if (a % 2 == 0) {
		printf("�Էµ� ������ ¦���Դϴ�.\n");
	} else {
		printf("�Ԏ��� ������ Ȧ���Դϴ�.\n");
	}
	
	printf("�� ������ �׻� ����ˤ���.");

	return 0;
}