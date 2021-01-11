#include <stdio.h>

void encrypt(char[], int);

int main() {

	char cipher[50];
	int shift = 3;

	printf("문자열을 입력하세요 : ");
	gets(cipher);
	encrypt(cipher, shift);

	return 0;
}

void encrypt(char cipher[], int shift) {

	int i = 0;

	while (cipher[i] != '\0') {
		if (cipher[i] >= 'a' && cipher[i] <= 'z') {
			cipher[i] += shift;
			if (cipher[i] > 'z') {
				cipher[i] -= 26;
			}
		}
		i++;
	}
	printf("암호화 된 문자열 : %s", cipher);
}