#include <stdio.h>

int main() {

	char color;

	do {
		printf("��ȣ�� ������ �Է��ϼ���(r, y, g) : ");
		scanf_s(" %c", &color);
	} while (color!='r'&&color!='y'&&color!='g');

	switch (color) {
	case 'r':
		printf("����!");
		break;
	case 'y':
		printf("õõ��!");
		break;
	case 'g':
		printf("���!");
		break;
	}

	return 0;
}