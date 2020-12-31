#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 1
#define RETRY 2
#define LIMITS 3

int log_chk(int, int);

int main(void) {

	int id, pw, result;

	while (1) {
		printf("%8s : ", "ID");
		scanf_s("%d", &id);
		printf("%8s : ", "PASSWORD");
		scanf_s("%d", &pw);
		result = log_chk(id, pw);

		if (result == SUCCESS) {
			break;
		}  else if (result == RETRY) {
			printf("�ٽ� �α����� �ּ���.\n\n");
		}
	}

	printf("Login Success!!");
}

int log_chk(int id, int pw) {

	static int ID = 0000;
	static int PW = 8080;
	static int cnt = 0; // �α��� Ƚ�� ī��Ʈ

	cnt++;

	if (id == ID && pw == PW) {
		return SUCCESS;
	} else if (cnt >= LIMITS) {
		printf("Ƚ�� �ʰ�!!");
		exit(1);
	} else return RETRY;
}