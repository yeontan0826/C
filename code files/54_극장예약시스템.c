#include <stdio.h>
#define SIZE 10

int main() {

	int num;
	int seat[SIZE] = { 0 };
	
	while(1) {
		printf("--------------------------------\n");
		printf("  1  2  3  4  5  6  7  8  9  10\n");
		printf("--------------------------------\n");

		for (int i = 0; i < 10; i++) {
			printf("  %d", seat[i]);
		}

		printf("\n");
		printf("���Ͻô� �¼���ȣ�� �Է��ϼ���(����� -1) : ");
		scanf_s("%d", &num);

		if (num < 0) break;

		if (num <= 0 || num > SIZE) {
			printf("1���� 10 ������  ���ڸ� �Է��ϼ���\n");
			continue;
		}

		if (seat[num-1] == 0) {
			seat[num-1] = 1;
			printf("����Ǿ����ϴ�.\n\n");
		} else {
			printf("�̹� ����� �ڸ��Դϴ�.\n\n");
		}
	}
	return 0;
}