#include <stdio.h>

int check(char[], char[], char);

int main(void) {

	char solution[50] = "java python";
	char answer[50] = "____ ______";
	char ch;

	while (1) {
		printf("현재 문자열 : %s\n", answer);
		printf("글자를 추측하시오 : ");
		//ch = getch(); 'getchar()'를 사용 시, 두 번 입력되므로 'getch()'를 통해 입력받는 즉시 실행하는 것이 더 효율적
		ch = getchar();
		fflush(stdin);
		printf("\n");

		if (check(solution, answer, ch) == 1) {
			printf("정답을 맞추셨습니다.\n");
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