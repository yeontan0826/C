#include <stdio.h>

int main() {

	int c;
	FILE* fp;
	errno_t err = fopen_s(&fp, "memo.txt", "a");

	if (err == 0) {
		puts("���Ͽ��� ����\n");
	} else {
		puts("���Ͽ��� ����\n");
		return -1;
	}

	while ((c = getchar()) != EOF) {
		fputc(c, fp);
	}
	fclose(fp);

	return 0;
}