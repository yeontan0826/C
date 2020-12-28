#include <stdio.h>

int main() {

	char color;

	do {
		printf("신호의 색상을 입력하세요(r, y, g) : ");
		scanf_s(" %c", &color);
	} while (color!='r'&&color!='y'&&color!='g');

	switch (color) {
	case 'r':
		printf("정지!");
		break;
	case 'y':
		printf("천천히!");
		break;
	case 'g':
		printf("통과!");
		break;
	}

	return 0;
}