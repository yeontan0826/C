#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a, b;

	printf("ù��° ���� : ");
	scanf("%d", &a);

	printf("�ι�° ���� : ");
	scanf("%d", &b);

	if (a > b) {
		printf("ū ���� %d�Դϴ�.\n", a);
	} else if (a < b) {
		printf("ū ���� %d�Դϴ�.\n", b);
	} else if (a == b) {
		printf("�� ���� �����մϴ�.\n");
	}

	printf("�׻� ����Ǵ� �����Դϴ�.");

	return 0;
}