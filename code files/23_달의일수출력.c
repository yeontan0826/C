#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int month;

	printf("���� �Է��ϼ��� : ");
	scanf("%d", &month);

	if (1 <= month && month <= 12) {
		switch (month) {
		case 4:
		case 6: 
		case 9:
		case 11:
			printf("%d���� 30�ϱ��� �ֽ��ϴ�.", month);
			break;
		case 2:
			printf("%d���� 28�ϱ��� �ֽ��ϴ�.", month);
			break;
		default:
			printf("%d���� 31�ϱ��� �ֽ��ϴ�.", month);
			break;
		}
	} else {
		printf("�Է��Ͻ� ���� �������� �ʽ��ϴ�.");
	}

	return 0;
}