#include <stdio.h>
#include <string.h>

int main() {

	char a[50], b[50];
	
	printf("ù��° ���ڿ��� �Է��Ͻÿ� : ");
	gets(a);

	printf("�ι�° ���ڿ��� �Է��Ͻÿ� : ");
	gets(b);

	if (strcmp(a, b) == 0) {
		printf("�� ���ڿ��� ��ġ�մϴ�.");
	} else {
		printf("�� ���ڿ��� ��ġ���� �ʽ��ϴ�.");
	}
	return 0;
}