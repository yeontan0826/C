#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int money, price, change;

	printf("�����κ��� ���� �� : ");
	scanf("%d", &money);

	printf("���ǰ� : ");
	scanf("%d", &price);

	printf("----- �Ž����� -----\n");

	change = money - price;
	printf("��õ�� : %d\n", change / 5000);
	printf("õ�� : \t% d\n", (change % 5000) / 1000);
	printf("����� : %d\n", (change % 5000 % 1000) / 500);
	printf("��� : \t %d\n", (change % 5000 % 1000 % 500) / 100);
	printf("���ʿ� : %d\n", (change % 5000 % 1000 % 500 % 100) / 50);
	printf("�ʿ� : \t %d\n", (change % 5000 % 1000 % 500 % 100 % 50) / 10);

	return 0;
}