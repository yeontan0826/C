#include <stdio.h>

int check(char[], char[], char);

int main(void) {

	char solution[50] = "java python";
	char answer[50] = "____ ______";
	char ch;

	while (1) {
		printf("���� ���ڿ� : %s\n", answer);
		printf("���ڸ� �����Ͻÿ� : ");
		//ch = getch(); 'getchar()'�� ��� ��, �� �� �ԷµǹǷ� 'getch()'�� ���� �Է¹޴� ��� �����ϴ� ���� �� ȿ����
		ch = getchar();
		fflush(stdin);
		printf("\n");

		if (check(solution, answer, ch) == 1) {
			printf("������ ���߼̽��ϴ�.\n");
			break;
		}
	}
	return 0;
}

int check(char s[], char a[], char ch) {

	for (int i = 0; s[i] != NULL; i++) {
		if (s[i] == ch) {
			a[i] = ch;
		}
	}

	if (strcmp(s, a) == 0) {
		return 1;
	} else {
		return 0;
	}
}