#include <stdio.h>
#include <string.h>

int main() {

	char password[100];
	int is_upper, is_lower, is_digit;

	while (1) {
		printf("======= PASSWORD =======\n");
		printf("암호를 생성하시오 : ");
		scanf_s("%s", password, 100);

		if (strlen(password) > 20) {
			printf("20자이내로 다시 설정하세요.\n\n");
			continue;
		}

		is_upper = is_lower = is_digit = 0;
		for (int i = 0; i < strlen(password); i++) {
			if (password[i] >= '0' && password[i] <= '9') {
				is_digit = 1;
			} else if (password[i] >= 'A' && password[i] <= 'Z') {
				is_upper = 1;
			} else if (password[i] >= 'a' && password[i] <= 'z') {
				is_lower = 1;
			}
		}

		if ((is_digit == 1) && (is_lower == 1) && (is_upper == 1)) {
			printf("적정한 암호입니다.\n");
			break;
		} else {
			printf("암호를 다시 설정하세요.\n\n");
		}
	}
	return 0;
}