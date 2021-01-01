#include <stdio.h>

void menu1(void);
void menu2(void);
void menu3(void);

int main() {
	int choice;
	int (*p[3])(void);

	p[0] = menu1;
	p[1] = menu2;
	p[2] = menu3;

	while (1) {
		printf("[메뉴] 피자:1   햄버거:2   치킨:3\n");
		printf("메뉴를 선택하세요 : ");
		scanf_s("%d", &choice);

		if (choice >= 1 && choice <= 3) {
			p[choice-1]();
			break;
		} else {
			printf("---- 메뉴를 다시 선택하세요 ----\n\n");
			continue;
		}
	}

	return 0;
}

void menu1(void) {
	printf("---- 피자를 선택하셨습니다 ----");
}

void menu2(void) {
	printf("---- 햄버거를 선택하셨습니다 ----");
}

void menu3(void) {
	printf("---- 치킨를 선택하셨습니다 ----\n");
}