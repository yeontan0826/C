#include <stdio.h>

int main() {
	
	int a, b;

	printf("���� �ٸ� �� ���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d", &a, &b);
	printf("�� �� �߿��� ū ���� %d�Դϴ�,", compare(a, b));

	return 0;
}

int compare(int x, int y) {
	if (x > y) {
		return x;
	} else {
		return y;
	}
}