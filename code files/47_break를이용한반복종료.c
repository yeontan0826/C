#include <stdio.h>

int main() {

	char a;

	for (;;) {
		printf_s("�ƹ�Ű�� ��������('q'�� ����) : ");
		scanf_s(" %c", &a);
		if (a == 'q') break;
	}

	return 0;
}