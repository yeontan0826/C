#include <stdio.h>
#include <string.h>

int main() {

	char arr[10];

	printf("���ڿ��� 10���ڳ��� �Է��Ͻÿ� : ");
	scanf_s("%s", arr, 10);

	printf("���ڿ��� ���� : %d", strlen(arr));

	return 0;
}