#include <stdio.h>

int main() {

	FILE* fp;
	errno_t err;
	int c;

	err = fopen_s(&fp, "sample.txt", "r");
	if (err == 0) {
		printf("���Ͽ��� ����\n");
	} else {
		printf("���Ͽ��� ����\n");
		return -1;
	}

	while ((c = fgetc(fp)) != EOF) {
		putchar(c);
	}
	fclose(fp);

	return 0;
}