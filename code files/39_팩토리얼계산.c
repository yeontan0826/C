#include <stdio.h>

int main() {

	int a, fact = 1;

	printf_s("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++) {
		fact *= i;
	}

	printf("%d!�� %d�Դϴ�.", a, fact);

	return 0;
}