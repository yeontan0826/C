#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int year, month, day;
	int won;
	float discount;

	printf("������ ��¥�� �Է��Ͻÿ�(YYYY.MM.DD ����) : ");
	scanf("%d.%d.%d", &year, &month, &day);
	printf("���� ��ȭ ���� ������ �󸶳� �ϳ��� : ");
	scanf("%d", &won);
	printf("����� ī�尡 ������ �� �ۼ�Ʈ�� ���εǳ��� : ");
	scanf("%f", &discount);

	printf("\n��¥ : %d�� %d�� %d��\n", year, month, day);
	printf("��ȭ Ƽ�� ���� : %d\n", won);
	printf("���� �ۼ�Ʈ : %.1f", discount);
	
	return 0;
}