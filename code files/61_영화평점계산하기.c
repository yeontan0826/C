#include <stdio.h>

int main() {

	int arr[3][4] = {
		{4, 6, 2, 9},
		{7, 8, 3, 7},
		{6, 9, 7, 6}
	};
	int num, sum;
	double avg;

	printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
	printf("|  ��а�0  |   %d   |   %d   |   %d   |   %d   |\n", arr[0][0], arr[0][1], arr[0][2], arr[0][3]);
	printf("|  ��а�1  |   %d   |   %d   |   %d   |   %d   |\n", arr[1][0], arr[1][1], arr[1][2], arr[1][3]);
	printf("|  ��а�2  |   %d   |   %d   |   %d   |   %d   |\n", arr[2][0], arr[2][1], arr[2][2], arr[2][3]);
	printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n\n");

	while (1) {
		sum = 0;

		printf("������ �˰� ���� ��а��� ��ȣ�� �Է����ּ���(����: -1) : ");
		scanf_s("%d", &num);

		if (num == -1) break;

		if (num < 0 || num>2) {
			printf("0~2���� �������ּ���. ����� -1�Դϴ�.\n\n");
			continue;
		}

		switch (num) {
		case 0:
			for (int i = 0; i < 4; i++) {
				sum += arr[0][i];
			}
			break;
		case 1:
			for (int i = 0; i < 4; i++) {
				sum += arr[1][i];
			}
			break;
		case 2:
			for (int i = 0; i < 4; i++) {
				sum += arr[2][i];
			}
			break;
		}

		avg = (double)sum / 4;
		printf("��а�%d�� ������ %.2f���Դϴ�.\n\n", num, avg);
	}
	return 0;
}