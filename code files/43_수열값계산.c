#include <stdio.h>

int main() {

	int a, sum = 0;

	printf_s("n�� ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++) {
		sum += i * i;
	}
	
	printf_s("��갪�� %d�Դϴ�.", sum);

	return 0;
}