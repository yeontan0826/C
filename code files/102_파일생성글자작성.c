#include <stdio.h>

int main() {

	FILE* fp;
	errno_t err;

	err = fopen_s(&fp,"sample.txt", "w");
	if (err == 0) {
		puts("파일열기 성공");
	}
	else {
		puts("파일열기 실패");
		return -1;
	}

	fputc('h', fp);
	fputc('e', fp);
	fputc('l', fp);
	fputc('l', fp);
	fputc('o', fp);
	fputc('!', fp);
	fclose(fp);

	return 0;
}