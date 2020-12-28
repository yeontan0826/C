#include <stdio.h>

int main() {

	char a;

	for (;;) {
		printf_s("아무키나 누르세요('q'는 종료) : ");
		scanf_s(" %c", &a);
		if (a == 'q') break;
	}

	return 0;
}