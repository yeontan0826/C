#include <stdio.h>
#include <string.h>

int main() {

	char name[100], address[100];

	printf("이름을 입력하시오 : ");
	gets(name);

	printf("현재 거주하는 주소를 입력하시오 : ");
	gets(address);

	printf("\n\n");

	printf("(%d글자)이름 : ", strlen(name));
	puts(name);
	printf("(%d글자)주소 : ", strlen(address));
	puts(address);

	return 0;
}