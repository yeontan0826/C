#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int input;

	printf("�������� ������ 1�� ��������\n");
	printf("�������� ������ 2�� ��������\n");
	printf("���⸦ ���Ϸ��� 3�� ��������\n");
	printf("������ �˻��Ϸ��� 4�� ��������\n\n");

	printf("������ �Ͻðڽ��ϱ�? ");
	scanf("%d", &input);
	
	switch (input) {
	case 1:
		printf("\n8�������� �̵��մϴ�.");
		break;
	case 2:
		printf("\n10�������� �̵��մϴ�.");
		break;
	case 3:
		printf("\n���� ����� 2���Դϴ�.");
		break;
	case 4:
		printf("\n�ƹ��͵� ã�� ���߽��ϴ�.");
		break;
	default:
		printf("\n1~4���߿��� �����ϼ���.");
		break;
	}

	return 0;
}