#include <stdio.h>

struct contacts {
	char name[10];
	char address[100];
	char tel_no[20];
};

int main() {

	struct contacts contacts;

	printf("�̸��� �Է��Ͻÿ� : ");
	gets(contacts.name);
	printf("�ּҸ� �Է��Ͻÿ� : ");
	gets(contacts.address);
	printf("��ȭ��ȣ�� �Է��Ͻÿ� : ");
	gets(contacts.tel_no);

	printf("\n");

	printf("�̸� : %s\n", contacts.name);
	printf("�ּ� : %s\n", contacts.address);
	printf("��ȭ��ȣ : %s\n", contacts.tel_no);

	return 0;
}