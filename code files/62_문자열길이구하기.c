#include <stdio.h>
#include <string.h>

int main() {

	char arr[10];

	printf("문자열을 10글자내로 입력하시오 : ");
	scanf_s("%s", arr, 10);

	printf("문자열의 길이 : %d", strlen(arr));

	return 0;
}