#include <stdio.h>
#include <string.h>

int main() {

	char name[100], address[100];

	printf("�̸��� �Է��Ͻÿ� : ");
	gets(name);

	printf("���� �����ϴ� �ּҸ� �Է��Ͻÿ� : ");
	gets(address);

	printf("\n\n");

	printf("(%d����)�̸� : ", strlen(name));
	puts(name);
	printf("(%d����)�ּ� : ", strlen(address));
	puts(address);

	return 0;
}