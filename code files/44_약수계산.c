#include <stdio.h>

int main() {

	int a;

	printf_s("���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &a);
	printf("%d�� ����� ������ �����ϴ�.\n", a);

	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			printf("%d ", i);
		}
	}

	return 0;
}