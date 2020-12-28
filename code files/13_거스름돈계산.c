#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int money, price, change;

	printf("고객으로부터 받은 돈 : ");
	scanf("%d", &money);

	printf("물건값 : ");
	scanf("%d", &price);

	printf("----- 거스름돈 -----\n");

	change = money - price;
	printf("오천원 : %d\n", change / 5000);
	printf("천원 : \t% d\n", (change % 5000) / 1000);
	printf("오백원 : %d\n", (change % 5000 % 1000) / 500);
	printf("백원 : \t %d\n", (change % 5000 % 1000 % 500) / 100);
	printf("오십원 : %d\n", (change % 5000 % 1000 % 500 % 100) / 50);
	printf("십원 : \t %d\n", (change % 5000 % 1000 % 500 % 100 % 50) / 10);

	return 0;
}