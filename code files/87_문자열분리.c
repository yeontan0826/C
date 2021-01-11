#include <stdio.h>
#include <string.h>

int main() {

	char a[50], b[50];
	
	printf("첫번째 문자열을 입력하시오 : ");
	gets(a);

	printf("두번째 문자열을 입력하시오 : ");
	gets(b);

	if (strcmp(a, b) == 0) {
		printf("두 문자열은 일치합니다.");
	} else {
		printf("두 문자열은 일치하지 않습니다.");
	}
	return 0;
}