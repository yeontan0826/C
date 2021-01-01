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
		printf("[�޴�] ����:1   �ܹ���:2   ġŲ:3\n");
		printf("�޴��� �����ϼ��� : ");
		scanf_s("%d", &choice);

		if (choice >= 1 && choice <= 3) {
			p[choice-1]();
			break;
		} else {
			printf("---- �޴��� �ٽ� �����ϼ��� ----\n\n");
			continue;
		}
	}

	return 0;
}

void menu1(void) {
	printf("---- ���ڸ� �����ϼ̽��ϴ� ----");
}

void menu2(void) {
	printf("---- �ܹ��Ÿ� �����ϼ̽��ϴ� ----");
}

void menu3(void) {
	printf("---- ġŲ�� �����ϼ̽��ϴ� ----\n");
}