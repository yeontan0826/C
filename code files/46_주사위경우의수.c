#include <stdio.h>
#define SUM 7

int main() {

	printf_s("���� %d�� �Ǵ� ����� ���� ã�� ���ϴ�.\n", SUM);
	printf_s("---------------------\n");
	printf_s("�ֻ���A  �ֻ���B\n");
	printf_s("---------------------\n");
	
	for (int i = 1; i <= 6; i++) {
		for (int k = 1; k <= 6; k++) {
			if (i + k == SUM) {
				printf_s("%d         %d \n", i, k);
			}
		}
	}

	return 0;
}