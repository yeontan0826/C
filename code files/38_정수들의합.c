#include <stdio.h>

int main() {
	
	int a, sum = 0;

	printf_s("������ ����ұ��? ");
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++) {
		sum += i;
	}

	printf("1���� %d���� ������ �� = %d", a, sum);

	return 0;
}