#include <stdio.h>

int main() {

	FILE* fp;
	errno_t err;
	int c;

	err = fopen_s(&fp, "sample.txt", "r");
	if (err == 0) {
		puts("���Ͽ��� ����\n");
	} else {
		puts("���Ͽ��� ����\n");
		return -1;
	}

	while ((c = fgetc(fp)) != EOF) {
		putchar(c);
	}
	fclose(fp);

	return 0;
}