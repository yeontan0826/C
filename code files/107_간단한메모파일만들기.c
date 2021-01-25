#include <stdio.h>

int main() {

	int c;
	FILE* fp;
	errno_t err = fopen_s(&fp, "memo.txt", "a");

	if (err == 0) {
		puts("파일열기 성공\n");
	} else {
		puts("파일열기 실패\n");
		return -1;
	}

	while ((c = getchar()) != EOF) {
		fputc(c, fp);
	}
	fclose(fp);

	return 0;
}