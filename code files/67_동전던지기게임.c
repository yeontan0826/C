#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int front = 0;
	int back = 0;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 100; i++) {
		if (tossing() == 1) {
			front++;
		} else {
			back++;
		}
	}

	printf("������ �ո� : %d\n", front);
	printf("������ �ո� : %d\n", back);

	return 0;
}

int tossing() {
	int i = rand() % 2;
	if (i == 1) {
		return 1;
	} else {
		return 0;
	}
}