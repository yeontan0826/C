#include <stdio.h>

int main() {

	int num, result;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);

	result = prime(num);

	if (result == 0) {
		printf("�Ҽ��� �ƴմϴ�.");
	} else printf("�Ҽ��Դϴ�.");

	return 0;
}

int prime(int a) {
	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			return 0;
		}
	}
	return 1;
}