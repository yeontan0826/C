#include <stdio.h>

int main() {

	FILE* fp;
	errno_t err;

	err = fopen_s(&fp, "sample.txt", "w");
	if (err == 0) {
		puts("���Ͽ��� ����\n");
	} else {
		puts("���Ͽ��� ����\n");
	}

	fputs("This is a text.\n", fp);
	fputs("This is a sample.\n", fp);

	fclose(fp);

	return 0;
}