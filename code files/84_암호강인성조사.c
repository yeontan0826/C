#include <stdio.h>
#include <string.h>

int main() {

	char password[100];
	int is_upper, is_lower, is_digit;

	while (1) {
		printf("======= PASSWORD =======\n");
		printf("��ȣ�� �����Ͻÿ� : ");
		scanf_s("%s", password, 100);

		if (strlen(password) > 20) {
			printf("20���̳��� �ٽ� �����ϼ���.\n\n");
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
			printf("������ ��ȣ�Դϴ�.\n");
			break;
		} else {
			printf("��ȣ�� �ٽ� �����ϼ���.\n\n");
		}
	}
	return 0;
}