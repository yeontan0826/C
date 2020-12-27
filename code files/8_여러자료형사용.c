#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int year, month, day;
	int won;
	float discount;

	printf("오늘의 날짜를 입력하시오(YYYY.MM.DD 형식) : ");
	scanf("%d.%d.%d", &year, &month, &day);
	printf("요즘 영화 한편 보려면 얼마나 하나요 : ");
	scanf("%d", &won);
	printf("멤버십 카드가 있으면 몇 퍼센트나 할인되나요 : ");
	scanf("%f", &discount);

	printf("\n날짜 : %d년 %d월 %d일\n", year, month, day);
	printf("영화 티켓 가격 : %d\n", won);
	printf("할인 퍼센트 : %.1f", discount);
	
	return 0;
}