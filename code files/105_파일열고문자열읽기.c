#include <stdio.h>

int main() {

	char line[100];
	FILE* fp;
	errno_t err = fopen_s(&fp, "sample.txt", "r");

	if (err == 0) {
		puts("파일열기 성공\n");
	} else {
		puts("파일열기 실패\n");
		return -1;
	}

	while (fgets(line, 100, fp) != NULL) {
		puts(line);
	}
	fclose(fp);

	return 0;
}