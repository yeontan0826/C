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
		printf("��Ʈ��ũ �ʱ�ȭ�� �Ǿ����ϴ�.\n");
		inited = 1;
	}
	printf("%d�� ���½��ϴ�.\n", i);
}