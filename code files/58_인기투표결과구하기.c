#include <stdio.h>

#define SIZE 11

int main() {
	
	int arr[SIZE] = { 0 };
	int num;

	while (1) {
		printf("1���� 10���� ������ �� �� ���� �����Ͻðڽ��ϱ�?(����: -1) : ");
		scanf_s("%d", &num);
		
		if (num == -1) break;

		if (num < 1 || num>10) {
			printf("1���� 10���� ������ �߿��� ������.\n");
			continue;
		}

		arr[num]++;
	}

	printf("\n===============\n");
	printf(" ��   ��ǥ���");
	printf("\n===============\n");
	
	for (int i = 1; i < SIZE; i++) {
		printf(" %2d       %d\n", i, arr[i]);
	}

	return 0;
}