#include <stdio.h>

int main() {

	char line[100];
	FILE* fp;
	errno_t err = fopen_s(&fp, "sample.txt", "r");

	if (err == 0) {
		puts("���Ͽ��� ����\n");
	} else {
		puts("���Ͽ��� ����\n");
		return -1;
	}

	while (fgets(line, 100, fp) != NULL) {
		puts(line);
	}
	fclose(fp);

	return 0;
}