#include <stdio.h>

struct contacts {
	char name[10];
	char address[100];
	char tel_no[20];
};

int main() {

	struct contacts contacts;

	printf("이름을 입력하시오 : ");
	gets(contacts.name);
	printf("주소를 입력하시오 : ");
	gets(contacts.address);
	printf("전화번호를 입력하시오 : ");
	gets(contacts.tel_no);

	printf("\n");

	printf("이름 : %s\n", contacts.name);
	printf("주소 : %s\n", contacts.address);
	printf("전화번호 : %s\n", contacts.tel_no);

	return 0;
}