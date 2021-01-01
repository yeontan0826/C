#include <stdio.h>

void menu1(void);
void menu2(void);
void menu3(void);

int main() {

	int (*p[3])(void);
	int choice;

	p[0] = menu1;
	p[1] = menu2;
	p[2] = menu3;

	printf("메뉴를 선택하시오(0:햄버거 1:치킨 2:피자) : ");
	scanf_s("%d", &choice);

	if (choice >= 0 && choice <= 2) {
		p[choice]();
	}

	return 0;
}

void menu1(void) {
	printf("햄버거를 선택하셨습니다");
}

void menu2(void) {
	printf("치킨를 선택하셨습니다");
}

void menu3(void) {
	printf("피자를 선택하셨습니다");
}