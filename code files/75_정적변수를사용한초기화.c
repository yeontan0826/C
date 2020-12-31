#include <stdio.h>

void send(int);

int main() {

	for (int i = 0; i < 5; i++) {
		send(i);
	}
	return 0;
}

void send(int i) {
	static int inited = 0;

	if (inited == 0) {
		printf("네트워크 초기화가 되었습니다.\n");
		inited = 1;
	}
	printf("%d을 보냈습니다.\n", i);
}