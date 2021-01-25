#include <stdio.h>

int main() {

	FILE* fp;
	errno_t err;

	err = fopen_s(&fp, "sample.txt", "w");
	if (err == 0) {
		puts("파일열기 성공\n");
	} else {
		puts("파일열기 실패\n");
	}

	fputs("This is a text.\n", fp);
	fputs("This is a sample.\n", fp);

	fclose(fp);

	return 0;
}