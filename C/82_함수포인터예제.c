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

	printf("�޴��� �����Ͻÿ�(0:�ܹ��� 1:ġŲ 2:����) : ");
	scanf_s("%d", &choice);

	if (choice >= 0 && choice <= 2) {
		p[choice]();
	}

	return 0;
}

void menu1(void) {
	printf("�ܹ��Ÿ� �����ϼ̽��ϴ�");
}

void menu2(void) {
	printf("ġŲ�� �����ϼ̽��ϴ�");
}

void menu3(void) {
	printf("���ڸ� �����ϼ̽��ϴ�");
}